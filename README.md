# C++ Spellchecker using Edit Distance Algorithm

This C++ program implements a spellchecker using the edit distance algorithm. It takes a word as input and suggests corrections for misspelled words based on the minimum number of edits required to convert the misspelled word into a correctly spelled word.

## Table of Contents

- [C++ Spellchecker using Edit Distance Algorithm](#c-spellchecker-using-edit-distance-algorithm)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Features](#features)
  - [Requirements](#requirements)
  - [Usage](#usage)
  - [Algorithm](#algorithm)
  - [Contributing](#contributing)

## Introduction

Spelling errors are common in text documents, and spellcheckers help in identifying and correcting these errors. This spellchecker utilizes the edit distance algorithm, also known as the Levenshtein distance, to measure the similarity between two strings by counting the minimum number of single-character edits (insertions, deletions, or substitutions) required to change one string into the other.

## Features

- Corrects misspelled words by suggesting possible corrections.
- Efficient implementation using the edit distance algorithm.
- User-friendly command-line interface.

## Requirements

- C++ compiler with C++11 support (e.g., g++ or clang++)
- Make to use the provided `Makefile` 

## Usage

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/spellchecker.git
    ```

2. Navigate to the project directory:

    ```bash
    cd spellchecker
    ```

3. Build the project using Make:

    ```bash
    make
    ```

4. Run the spellchecker:

    ```bash
    ./spellchecker
    ```

5. Enter a word and a number of suggestions when prompted. The spellchecker will suggest top `n` potential corrections for the word inputed.

## Algorithm

The edit distance algorithm computes the minimum number of edits required to transform one string into another. It works by constructing a matrix where each cell represents the minimum number of edits required to convert a prefix of one string into a prefix of another string. By iteratively filling this matrix and considering three types of edits (insertion, deletion, and substitution), the algorithm efficiently computes the edit distance.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please fork the repository and submit a pull request.

