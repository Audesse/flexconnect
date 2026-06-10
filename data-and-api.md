---
layout: default
---
# Data and API

This section provides an overview of the data architecture and how to publish custom data.

## Data Architecture Overview

The following describes how data flows from a FlexCase to the dashboard. This is useful background for developers integrating custom data sources.

| Stage           | Description                                                                                                                                                 |
| --------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------- |
| MCU             | Collects data from connected devices, including the CAN bus, digital inputs, and sensors. Packages data as CAN messages and sends them over SPI to the MPU. |
| MPU (Linux)     | Receives data from the MCU over SPI. Parses CAN messages using the DBC file and publishes field/value pairs to the cloud over MQTT with TLS.                |
| MQTT Broker     | AWS-hosted broker that receives authenticated messages from the device.                                                                                     |
| Ingest Pipeline | Processes incoming data, parses messages, triggers alerts or events, and routes data to storage.                                                            |
| InfluxDB        | Time-series database that stores all field/value data from your devices.                                                                                    |
| Grafana / API   | Queries InfluxDB and renders data in the dashboard. Data is also accessible through the FlexConnect REST API for custom front ends.                         |

Single-message payload limit: 100 KB, including authentication overhead.

## Publishing Custom Data

In addition to standard CAN telemetry, you can publish custom data from both the MCU and the MPU.

### From the MCU (C API)

Audesse provides a C header and object file for packaging and sending data from the S32K3 MCU. Data is sent over SPI to the MPU, which handles cloud delivery.

- Package any signal, including digital input states or derived values, as a CAN message using the FlexConnect C API.
- Define the parsing for that CAN ID in your DBC file.
- Everything else, including compression, upload, and storage, is handled automatically by FlexConnect.

Contact Audesse to receive the FlexConnect C header and object file, along with any available sample code for MCU peripheral integration.

### From the MPU (Python API)

If your application runs Linux on the MPU, you can publish data directly using the Python API without packaging it as a CAN message.

- Data is sent as field-value pairs in JSON or protobuf format.
- GZIP compression is supported.
- Authentication credentials are pre-loaded on the FlexCase and can be reused by your Python scripts.

Contact Audesse for the Python API documentation and JSON or GZIP format guide.

## Downstream Messaging (Write-Back)

The FlexCase communicates with the cloud over both MQTT and HTTP:

- MQTT is the primary real-time channel. If you have credentials for a device's MQTT channel, you can publish messages downstream, for example to update configuration or control outputs.
- HTTP is used for file transfers such as DBC downloads and OTA firmware updates. FlexConnect wraps S3 with its own authentication, so any file you upload through the platform becomes available to the device via HTTP.

> If you prefer HTTP or REST over MQTT for downstream control, contact Audesse to discuss a custom interface.
