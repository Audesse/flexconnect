# Use the official Ruby image
FROM ruby:3.1

# Set the working directory inside the container
WORKDIR /usr/src/app

# Install Jekyll and Bundler
RUN gem install bundler jekyll

# Copy the Gemfile into the container
COPY Gemfile ./

# Install the gems
RUN bundle install

# Copy the rest of the application's code into the container
COPY . .

# Expose port 4000 to be accessible from the host
EXPOSE 4000

# Command to run the Jekyll server
CMD ["bundle", "exec", "jekyll", "serve", "--host", "0.0.0.0"]
