# Solution Explanation — Round 2 Coding Puzzle Challenge

This document describes how each problem in Round 2 was approached and solved.
All solutions were implemented by carefully following the rules and guidelines provided in the `docs/` directory.

---

## Problem 1 — Grid Transform

- The grid is read from the input file one row at a time.
- Each row is rotated by a single position according to its associated instruction:
  - `L` indicates a left rotation
  - `R` indicates a right rotation
- After all rows have been transformed, the middle row of the grid is selected using zero-based indexing.
- The characters in this row are converted to their ASCII values and summed to produce the first clue.

---

## Problem 2 — Multi-Pass String Processing

The input string is processed step by step in the required order:

1. The entire string is reversed.
2. Every third character is removed from the reversed string.
3. Each remaining character is shifted forward by two positions in its ASCII encoding.
4. The number of vowels in the final string is counted using the standard English vowel set.

The vowel count obtained from this process represents the second clue.

---

## Problem 3 — State Machine Simulation

- Each value from the input is handled independently.
- Even numbers move forward through the state system and reach the terminal state.
- Prime numbers do not follow the even-number rule and instead transition directly to the terminal state.
- Odd composite numbers remain in their current state and never reach the terminal state.

The number of values that successfully reach the terminal state forms the third clue.

---

## Final Key Construction

- The first clue is converted into its hexadecimal representation.
- The second clue is treated as a string.
- This string is repeated as many times as indicated by the third clue.
- Both parts are joined using a dash (`-`) to form the final key.

The completed key is saved in `final_key.txt` as instructed.
