# OJJAR208

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Adding a Restart Game Button

Okay, excellent! You've successfully implemented the Game Over logic. The game now correctly identifies when no more moves are possible and displays the "Game Over" message.

 **Goal:**  Let's give the player the ability to start a new game at any point, especially after a "Game Over" or even during an ongoing game. We'll add a "Restart" button that resets the board and the game state.

 **Conceptual Logic:**  Think about what needs to happen when the "Restart" button is clicked:

- What should the game board be set to? (Hint: How did you initialize it at the very beginning?)
- What should happen to the gameOver status?
- Give the class name restart to your button.

 **Your app should work like this one in the end.**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T06:43:28.986Z  

```cpp
function compress(board) {
  const newBoard = board.map(row => {
    let newRow = row.filter(val => val !== 0);
    while (newRow.length < SIZE) {
  return board.map(row => [...row].reverse());
}

  return newBoard;
}

function reverse(board) {
      newBoard[c][r] = board[r][c];
    }
  }
  for (let r = 0; r < SIZE; r++) {
    for (let c = 0; c < SIZE; c++) {
  const newBoard = getEmptyBoard();
function transpose(board) {

}
  return newBoard;
  newBoard[r][c] = Math.random() < 0.9 ? 2 : 4;
  const [r, c] = emptyTiles[getRandomInt(emptyTiles.length)];
  const newBoard = board.map(row => [...row]);
  if (emptyTiles.length === 0) return board;
  }
function addRandomTile(board) {
  const emptyTiles = [];
  for (let r = 0; r < SIZE; r++) {
    for (let c = 0; c < SIZE; c++) {
      if (board[r][c] === 0) emptyTiles.push([r, c]);
    }

function getRandomInt(max) {
  return Math.floor(Math.random() * max);
}

}
  return Array(SIZE).fill().map(() => Array(SIZE).fill(0));
function getEmptyBoard() {

const SIZE = 4;

import './App.css'; // Assuming you have this CSS file and it styles .game-over
import { useEffect, useState } from 'react';
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR208)