//  write your code here
const express = require('express');
const router = express.Router();

router.get('/', (req, res) => {
  res.send('Products Route');
  });

  router.get('/:id', (req, res) => {
    res.send(`Product with ID ${req.params.id}`);
    });

    module.exports = router;