# HandCricket-CPP

A console-based HandCricket game implemented in C++.

## Description

This project is a console-based implementation of the classic Handcricket game with an "Odd/Even" toss mechanic to determine who bats first. Two players input numbers; if the sum is odd, the player who chose "Odd" gets to choose batting or bowling. If the sum is even, the "Even" player gets the choice. The game then proceeds with each player taking turns batting and bowling, with a target set after the first innings.

This project was created as a personal exercise to practice C++ programming and game development fundamentals.

## How to Play

1.  Clone the repository: `git clone https://github.com/[YourUsername]/HandCricket-CPP.git`
2.  Navigate to the project directory: `cd HandCricket-CPP`
3.  Compile the code using a C++ compiler (e.g., g++): `g++ main.cpp -o handcricket`
4.  Run the executable: `./handcricket`
5.  The game will prompt you through the following steps:
    *   Players choose "Odd" or "Even".
    *   Players input a number.
    *   The sum is calculated, and the batting/bowling order is determined.
    *   Players take turns batting and bowling, inputting numbers for each ball.
    *   The game checks for outs and compares scores to the target.

## Features

*   Console-based text interface.
*   Two-player mode.
*   "Odd/Even" toss to determine batting/bowling order.
*   Target setting after the first innings.
*   Out detection and score comparison.

## Gameplay Logic

*   Toss: Players choose "Odd" or "Even". They then input a number each. The sum of these numbers determines who gets to choose batting/bowling.
*   Batting/Bowling: Players input numbers for each ball. If the numbers match, the batsman is out. Otherwise, the batsman's number is added to their score.
*   Target Setting: After the first player's innings, the total score becomes the target for the second player.
*   Game End: The game ends when the second player either gets out or surpasses the target score.

## Author

Mohammed Asif - https://github.com/md002asif
