# Visual Sort
An assignment for ICS4U. The goal is to create a visualization of the Bubble Sort sorting algorithm using the [SFML framework](https://www.sfml-dev.org/index.php).

## Dependencies
### Linux
Source: https://www.sfml-dev.org/tutorials/2.5/start-linux.php

This project requires the SFML dev libraries. I recommend you install them from the official repositories provided by your distribution if they are available, however you can also download the SDK from their [download page](https://www.sfml-dev.org/download.php) and build the package yourself. (Read further on the page given above)

#### Debian, Ubuntu...
The package in the official repositories is called `libsfml-dev`. You can simply install it using your package manager:
`sudo apt-get install libsfml-dev`

### Other OS
See SFML's official documents for setup on another platform: https://www.sfml-dev.org/tutorials/2.5/

## Building
You must link your program against three SFML libraries, `-lsfml-grahpics`, `-lsfml-window` & `-lsfml-system` **in that order!**

Ex: `g++ src/main.cpp src/Link.cpp -o bin/visualsort -lsfml-grahpics -lsfml-window -lsfmlsystem`
