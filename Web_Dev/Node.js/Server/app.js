const http = require('http');

const server = http.createServer((req, res) => {
  // Set response headers
  res.setHeader('Content-Type', 'application/json');
  res.setHeader('Access-Control-Allow-Origin', '*'); // CORS permission

  // JSON data
  const jsonData = {
    name: 'John Doe',
    age: 30,
    city: 'Exampleville'
  };

  // Send JSON data to the client
  res.end(JSON.stringify(jsonData));
});

const port = 3000; // Port that the server will listen on
server.listen(port, () => {
  console.log(`Server is running on port ${port}.`);
});
