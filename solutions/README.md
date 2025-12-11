# Solution Explanation — Round 2 Coding Puzzle Challenge

This document explains how each of the three problems was solved and how the final key was generated.

---

## Problem 1 — Grid Transform

Each row of the grid was rotated by one position according to the direction provided.  
After all rotations, the middle row was selected.  
The ASCII values of the characters in that row were added together, producing the first clue.

---

## Problem 2 — Multi-Pass String Processing

The input string was reversed, then every third character (based on 1-indexed positions) was removed.  
Each remaining character was shifted forward by two ASCII positions.  
The number of vowels in the resulting string was counted, giving the second clue.

---

## Problem 3 — State Sequence Simulation

Each number was classified into one of three categories.  
Prime numbers directly reached the terminal state, while even non-prime numbers advanced but did not reach it.  
Odd composite numbers did not move.  
The count of prime numbers formed the third clue.

---

## Final Key Construction

The first clue was converted to hexadecimal.  
The second clue was repeated as many times as indicated by the third clue.  
Both parts were joined with a dash to create the final key, which was written into `final_key.txt`.
