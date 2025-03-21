## **IcyTower: A Simple SFML-Based Platformer**

This repository contains a small 2D platformer inspired by the classic “Icy Tower.” The code demonstrates basic game mechanics using [SFML](https://www.sfml-dev.org/) for rendering, input handling, and texture management. Players can jump on moving platforms, track their score, and watch the background scroll as they progress.


## Features

- **Dynamic Platform Generation**: Blocks are created at varying widths and positions to keep the game interesting.
- **Scrolling Background**: A continuous background that shifts as the player moves.
- **Player Movement & Jumping**: Basic horizontal movement, jump initiation, and landing detection on blocks.
- **Difficulty Scaling**: Over time, block widths decrease and the game speed increases.
- **Score Display**: Score is shown using a custom number sprite system.

## Example Screenshots

Here are some screenshots showing what the game looks like in action:

![Screenshot 1](screenshots/screenshot1.png)
*Start view*

![Screenshot 2](screenshots/screenshot2.png)
*Playing view*

![Screenshot 3](screenshots/screenshot3.png)
*Endgame view*

## Getting Started

### Self-compiling
1. **Clone** this repository.
2. **Install SFML** (version 2.5+ recommended).
3. **Open** the solution (`IcyTower.sln`) in Visual Studio (or your preferred IDE).
4. **Configure** the project to link against SFML libraries.
5. **Build & Run** the project. Ensure the `assets` folder is in the same directory as the executable.
### Ready-to-go
1. **Clone** this repository.
2. Go to the **ForDistribution** catalog and launch the .exe file.
   
## Controls (Example)

- **A/D Keys**: Move the player left and right.
- **Space**: Jump.
