const path = require('path');
const os = require('os');

const filePath = '/users/john/documents/report.txt';

const platform = os.platform();

console.log('Extracted filename:', fileName);
const fileName = path.basename(filePath);
console.log('Operating System Platform:', platform);