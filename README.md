# Statistics Calculator
A simple calculator program that can calculate the measures of central tendency and analyze a list of data.

## Features
- Takes in an input file of data
- Outputs a file with the statistics

- Returns a sorted list
- Calculates the average/mean
- Calculates the median
- Calculates the mode
- Calculates the range

## Usage
An argument with a path pointing to a list of data is expected. This list may only contain numbers (no commas or other types of text). See `data/data.txt` for an example of this.

A file named `statistics.txt` will be generated in the `statistics` directory. See `statistics/statistics.txt` for an example of this.

On the command line, run:

`./<path-to-executable>/calculator <path-to-data>/input.txt`

E.g.

`./bin/calculator data/data.txt`

## Compile
The executable found in the `bin` folder is **not cross platform**, and you will need to compile the calculator yourself in order to use it.

On the command line, run:

`g++ src/main.cpp src/statistics.cpp -o bin/calculator -std=c++17`

(Note, C++17 and later is required.)
