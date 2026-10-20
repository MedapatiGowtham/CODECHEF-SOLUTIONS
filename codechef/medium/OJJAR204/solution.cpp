
  const handleKeyDown = (event) => {
  const [board, setBoard] = useState(addRandomTile(addRandomTile(getEmptyBoard())));
function App() {


}
  return newBoard;
  let newBoard = compress(board);
function moveLeft(board) {

  return newBoard;
}
  });
    return newRow;
    while (newRow.length < SIZE) newRow.push(0);
    let newRow = row.filter(val => val !== 0);

function compress(board) {
  let newBoard = board.map(row => {
}
  return board;
  board[r][c] = Math.random() < 0.9 ? 2 : 4;
  if (emptyTiles.length === 0) return board;
  const [r, c] = emptyTiles[getRandomInt(emptyTiles.length)];
  }
    }
      if (board[r][c] === 0) emptyTiles.push([r, c]);
  for (let r = 0; r < SIZE; r++) {
    for (let c = 0; c < SIZE; c++) {
function addRandomTile(board) {
  const emptyTiles = [];
}

function getRandomInt(max) {
  return Math.floor(Math.random() * max);
  return Array(SIZE).fill().map(() => Array(SIZE).fill(0));
}


function getEmptyBoard() {
import './App.css';

const SIZE = 4;
import { useEffect, useState } from 'react';