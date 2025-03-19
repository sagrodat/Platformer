## **IcyTower: A Simple SFML-Based Platformer**

This repository contains a small 2D platformer inspired by the classic “Icy Tower.” The code demonstrates basic game mechanics using [SFML](https://www.sfml-dev.org/) for rendering, input handling, and texture management. Players can jump on moving platforms, track their score, and watch the background scroll as they progress.

## Features

- **Dynamic Platform Generation**: Blocks are created at varying widths and positions to keep the game interesting.
- **Scrolling Background**: A continuous background that shifts as the player moves.
- **Player Movement & Jumping**: Basic horizontal movement, jump initiation, and landing detection on blocks.
- **Difficulty Scaling**: Over time, block widths decrease and the game speed increases.
- **Score Display**: Score is shown using a custom number sprite system.

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

- **Left/Right Arrow Keys**: Move the player.
- **Space**: Jump.

Feel free to customize the controls or adjust parameters (e.g., block size, speed, difficulty intervals) in the code.
