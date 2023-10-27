// in this code I use the http.request() method to send an HTTP request and handle the response from the server

const http = require('http');

const options = {
  hostname: 'example.com',
  port: 80,
  path: '/some/path',
  method: 'GET'
};

const req = http.request(options, (res) => {
  // handle responses from the server
  res.on('data', (data) => {
    console.log(data.toString());
  });
});

req.on('error', (error) => {
  console.error(error);
});

req.end(); // send the request
