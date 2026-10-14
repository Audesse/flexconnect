---
layout: default
---
# AI Agents

You can give an AI agent read-only access to your fleet's telemetry. Once it's connected, you can ask questions such as "Which of my devices reported low battery in the last 24 hours?" and the agent will query FlexConnect for the answer.

Audesse publishes a plugin for coding agents in the [Audesse/flexconnect-plugins](https://github.com/Audesse/flexconnect-plugins) repository. The plugin connects the agent to the FlexConnect MCP server (`https://mcp.audesseinc.com/mcp/`) and teaches it how to use the telemetry tools.

## Signing In

The first time the agent uses FlexConnect, a browser window opens and you sign in with your FlexConnect credentials. There is no key to copy, and the agent can only see the devices your account can access. All tools are read-only: the agent cannot change devices or settings.

## Claude Code

Run these commands inside Claude Code:

```bash
/plugin marketplace add Audesse/flexconnect-plugins
/plugin install flexconnect-telemetry@flexconnect-plugins
```

Run `/reload-plugins` if prompted. Then run `/mcp`, select `plugin:flexconnect-telemetry:telemetry`, and sign in.

## Codex

Add the marketplace from a terminal:

```bash
codex plugin marketplace add Audesse/flexconnect-plugins
```

Open the Plugins directory in the Codex app, install **Flexconnect Telemetry**, and sign in when asked. To sign in again later, run:

```bash
codex mcp login telemetry
```

## Cursor

Add `Audesse/flexconnect-plugins` as a team marketplace under **Dashboard > Plugins**, then install **flexconnect-telemetry**. In **Settings > MCP**, click **Connect** next to `telemetry` and sign in.

## GitHub Copilot CLI

```bash
copilot plugin marketplace add Audesse/flexconnect-plugins
copilot plugin install flexconnect-telemetry@flexconnect-plugins
```

Copilot does not support sign-in for plugins yet, so it needs a FlexConnect API key. Follow the [manual setup guide](https://github.com/Audesse/flexconnect-plugins/blob/main/docs/connect/manual-mcp-config.md#github-copilot-cli) to add the server with your key.

## Chat Apps and APIs

FlexConnect also works without the plugin:

| Client                              | Guide                                                                                                   |
| ----------------------------------- | ------------------------------------------------------------------------------------------------------- |
| Claude (web, Desktop, mobile)       | [Custom connector](https://github.com/Audesse/flexconnect-plugins/blob/main/docs/connect/claude.md)     |
| ChatGPT                             | [Custom MCP server](https://github.com/Audesse/flexconnect-plugins/blob/main/docs/connect/chatgpt.md)   |
| Claude API, OpenAI API, other tools | [All guides](https://github.com/Audesse/flexconnect-plugins/tree/main/docs/connect)                     |

## Trying It Out

After signing in, ask the agent something like:

- "List my FlexConnect devices and summarize their latest overview."
- "How did the battery voltage of UKK change over the last week?"

> If sign-in fails or the agent stops seeing your devices, sign out of the FlexConnect server in your agent's MCP settings and sign in again. Contact Audesse if the problem persists.
