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



function createRandomServer() {
if (currentServer) {
    currentServer.close(() => {
    console.log(`server on port ${currentServer.address().port} closed.`);
    startRandomServer();
    });
} else {
    startRandomServer();
}
}


function startRandomServer() {
const port = getRandomPort();
const server = http.createServer((req, res) => {
    res.writeHead(200, { 'Content-Type': 'text/plain' });
    res.end(`hello, server running on port ${port}!\n`);
});

server.listen(port, () => {
    console.log(`server is listening on port ${port}...`);
});

currentServer = server;
}
  