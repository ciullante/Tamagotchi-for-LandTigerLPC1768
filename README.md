# Tamagotchi for LandTigerLPC1768

Welcome to the Tamagotchi for LandTigerLPC1768 project. This README provides an overview of the project, its features, and instructions on how to set it up and use it.

## Table of Contents

1. [Overview](#overview)
2. [Features](#features)
3. [Functionalities Preview](#functionalitiesPreview)
4. [Getting Started](#GettingStarted)
5. [License](#license)


## Overview

The Tamagotchi for LandTigerLPC1768 project is a bare-metal C and ARM assembly implementation of a Tamagotchi-like game for the LandTiger LPC1768 development board. The project includes libraries for frame-by-frame animation management, LCD controller interface enhancements, and sound management.

## Features

- **Frame-by-frame Animation Management**: Developed a library for efficient frame-by-frame animation using interrupts, optimizing performance.
- **Enhanced LCD Controller Interface**: Expanded the functionalities of the LCD controller interface, achieving a tenfold increase in refresh rate.
- **Sound Management Library**: Implemented a modular library for sound management, allowing playback of simple musical compositions through direct interaction with the embedded DAC within the speaker.

## Functionalities Preview
### Eating
![image1](images/image1.gif)
### Cuddling
![image2](images/image2.gif)
### Game Over
![image2](images/image3.gif)

## GettingStarted

### Prerequisites
To set up the project, you need the following tools and components:

- LandTiger LPC1768 development board
- Keil uVision
- ARM cortex M3 C cross compiler
### Installation

1. Clone the repository
2. Open in Keil uVision
3. Build and Flash the project to the board
4. Have fun!

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
