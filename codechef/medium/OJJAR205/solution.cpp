
function moveRight(board) {
}
  return newBoard;

function moveLeft(board) {
  let newBoard = compress(board);
}
  return newBoard;
    return newRow;
  });
    while (newRow.length < SIZE) newRow.push(0);
    let newRow = row.filter(val => val !== 0);
  let newBoard = board.map(row => {
function compress(board) {

}
  return board.map(row => [...row].reverse());
function reverse(board) {

}
  return board;
  board[r][c] = Math.random() < 0.9 ? 2 : 4;
  const [r, c] = emptyTiles[getRandomInt(emptyTiles.length)];
  if (emptyTiles.length === 0) return board;
  }
    }
      if (board[r][c] === 0) emptyTiles.push([r, c]);
    for (let c = 0; c < SIZE; c++) {
  for (let r = 0; r < SIZE; r++) {
  const emptyTiles = [];
function addRandomTile(board) {

}
  return Math.floor(Math.random() * max);
function getRandomInt(max) {

}
  return Array(SIZE).fill().map(() => Array(SIZE).fill(0));
function getEmptyBoard() {

const SIZE = 4;

import './App.css';
import { useEffect, useState } from 'react';