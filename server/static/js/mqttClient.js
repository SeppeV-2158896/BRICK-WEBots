// var mqtt = require('mqtt')

var host = "test.mosquitto.org:8080"
var options = {
    username: 'TestUser',
    password: 't3stT3ST'
}

// initialize the MQTT client
var client = mqtt.connect(host);

// setup the callbacks
client.on('connect', function () {
    console.log('Connected');
});

client.on('error', function (error) {
    console.log(error);
});
