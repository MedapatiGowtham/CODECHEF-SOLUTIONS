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