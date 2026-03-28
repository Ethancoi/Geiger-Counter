# Geiger-Counter
Here is my second year project at the Grenoble Alpes University IUT1: The Geiger counter. 
## Table of Contents
- [Overview](#Overview)
- [Features](#Features)
- [How the system works](#How_the_system_works)
- [Contributors](#Contributors)
- [Contact](#Contact)
## Overview
This project aims to detect radiation in the stratosphere and automatically shut down sensitive components before they are damaged by radiation exposure.
### Context
The SEED Wio E5 board was designed to be housed in stratospheric balloon gondolas (Planète Science) for use in middle and high schools. The SEED Wio E5 board can be equipped with a Mikrobus GPS module and a Geiger-Muller counter to transmit the balloon’s position, altitude, and atmospheric and radiological conditions (α, β, γ particles) up to 30 km altitude via long-range LoRa communications.
Meshtastic is an open-source project that turns small LoRa radio modules into a mesh communication network without the need for the internet or cellular networks. It allows users to exchange short text messages + emojis (max 220 bytes), share GPS positions, and transmit telemetry, staying connected in remote areas with low power consumption and a range of several kilometers. Some nodes in the Meshtastic network, equipped with solar charging, are dedicated to relaying messages from other nodes. It is typically used by hikers, rescue teams in disaster situations, and ecologists studying operator network territories.
The Seeedstudio Wio E5 Mini board is already supported by the Meshtastic firmware available on PlatformIO.
Adding a Geiger-Muller counter will enable the detection of radioactive events to deactivate sensitive parts of electronic boards and prevent equipment damage.
### Description
This project involves adding the following telemetry features to the SEED Wio E5 board:
- Counting α, β, γ pulses from a Geiger-Muller counter (interrupt on a GPIO);
- Measuring the duration of pulses received by the Geiger-Muller tube.
## Features
- Detects radiation with a geiger tube
- Work with STM32 and Arduino
- Count the number of impulsion
- Look at the duration of the impulsion
- See how many microSievert per hour is the impulsion
## How the system works
By pluging the board to a microcontroller with 5V, and a pin like the A0 on arduino and STM32 you can turn on the board. By using the STM32 code you can read the data using an external software like Putty but if you use the Arduino code you can read the data just with the Serial window on the software.
## Contributors
This project was developed in collaboration with **CSUG** (Centre de Services Universitaire de Grenoble).
- [Coissieux Ethan] - [Student]
- [Lattat Ludivine] - [Student]
- [Martin Frédéric] - [Engineer]

## Contact
For questions about this project, contact: [coissieuxethan@orange.fr]
