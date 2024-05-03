# Crossbow Training

## Overview

 This project was my capstone for the game development bootcamp I recently completed, and it was my first time using Unreal Engine. I challenged myself to complete the bulk of the game in three days, which was ridiculous... but a lot of fun. "Crossbow Training" is a simple FPS high-score game. You have a crossbow with unlimited ammo and must walk around a small village map to shoot all 50 targets before time runs out. There are two types of targets: ones that give you points (Normal) and ones that lose you points (Bomb). Normal targets yield 150 points for a center shot and 50 for anywhere else. Bomb targets, indicated by a slightly red hue and a bomb icon in the center, blow apart and subtract 25 points. How high of a score can you get?

 The are a lot of features I wanted to add, detailed below, but wasn't able to within the timeframe. 

 ### Features to add:
    -> "Wisps" to guide the player to the nearest 5 un-shot targets
    -> Proper Main Menu "Options" section
    -> Escape menu during gameplay
    -> Moving targets
    -> Countdown audio que when the timer hits 30, 15, 10-0 seconds left
    -> Begining cutscene explaining the game's controls and goal
    -> Player sprint capabilities
    -> Night-mode

## Features

- **3D Design**: A fun midevil themed village in a valley
- **FPS Gameplay**: FPS style crossbow shooting with custom models and animations
- **Art style**: Vibrant low-poly world design

## Game Engine

 This game was developed using Unreal Engine 5.3.2

## Game Development

  Development took place over about three days. I started with a similar outline style to "Droppin' Tilted" and began by working on game mechanics. I opted to use Blueprints instead of C++ for scripting due to time constraints. Once the mechanics were finalized, I began blocking out the level. For textures and models, I used various packs from the Unreal Asset Store. I wasn't able to find a good crossbow model with animations, so with this project, I also dabbled a bit in Blender for the first time. I took a simple crossbow model, made a reload animation, and created a bolt model so there was a visible projectile being shot.

## Challenges and Learnings

 Saying this project provided a lot of learning opportunities would be an understatement. At first, I didn't realize just how different Unreal and Unity were, and then I added Blender... I would not recommend this approach to anyone, but it forced me to grow as a developer in quite a few ways. I had to be extremely organized and have a clear plan of action to meet the deadline.

## How to Play

To play "Crossbow Training," follow these simple steps:

1. Download the latest release from the repository's [Releases](#) page.
2. Unzip the downloaded file.
3. Run the executable.

## Controls
**Note: Currently only Keyboard and Mouse support**
- Move -> W (Forward), A (Back), S (Left), D (Right)
- Shoot -> LMB
- Look -> Mouse Movement

Enjoy your midevil adventure! :)

---

### Important Note on Windows SmartScreen Warning

When you download and run this application, Windows may display a SmartScreen warning because the software is unsigned. This is a common warning for applications downloaded from the Internet and does not indicate any risk.

To proceed with installing and running the game:

1. Click on **More info**.
2. Then click **Run anyway**.

This will allow you to install and enjoy the game without any issues. Thank you for checking out my portfolio project!


---

### Using Git Large File Storage (LFS)

This project uses Git LFS to manage large files. Ensure you have Git LFS installed on your system before cloning the project. You can install Git LFS and set it up by following the instructions at [https://git-lfs.github.com/](https://git-lfs.github.com/).

For support, feature requests, or contributions, please submit an issue directly on the GitHub issues page of this project. This helps keep discussions public and benefit others who might have similar questions or issues.
