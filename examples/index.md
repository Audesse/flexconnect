---
layout: default
title: Samples
---

# Examples

This section contains example models and code to help you get started with FlexConnect.

## Models

Sample DBC files and simulation models are available in the {% include repo_link.html path="examples/models/" text="models" tree=true %} folder.

## Code

Sample C (S32DK) and Python (Linux) code is available in the [code](code/) folder. Source for all examples is hosted on GitHub at {% include repo_link.html path="examples\/code/" text="examples/code" tree=true %}.

### IMU K3 

This example demonstrates polling for IMU data over SPI and sending the data over CAN. {% include repo_link.html path="examples\/code\/IMU_k3" text="link" tree=true %}.

### FlexConnect IMU K3

This example follows the same pattern as the IMU K3 example, but uses the FlexConnect library to send the data over SPI to the attached MPU. {% include repo_link.html path="examples\/code\/FlexConnect_IMU_k3" text="link" tree=true %}.

