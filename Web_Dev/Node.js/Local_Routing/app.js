const http = require('http');
const displayContent = require("./routes");


//create server and run module function on server
const server = http.createServer(displayContent);

server.listen(3001);