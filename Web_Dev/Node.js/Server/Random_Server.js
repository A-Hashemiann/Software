//this code will create servers on random ports within the specified range at regular time intervals and the previous server will be closed before starting a new one the first server is also started immediately

const http = require('http');

const minPort = 3000; // define the range of ports you want to start from (e.g., starting from 3000)
const maxPort = 4000; // up to a certain port

let currentServer = null;


// random port number
function getRandomPort() {
    const range = maxPort - minPort + 1;
    return Math.floor(Math.random() * range) + minPort;
  }