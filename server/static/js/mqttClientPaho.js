// Functie om verbinding te maken met de broker
function connectMQTT() {
    var hostname = 'test.mosquitto.org';
    var port = 8080;
    var clientId = 'clientID - 19';

    // Initialisatie van de MQTT-client
    client = new Paho.MQTT.Client(hostname, port, clientId);

    console.log(client)

    // Set de verbindingsopties
    client.onConnectionLost = onConnectionLost;
    client.onMessageArrived = onMessageArrived;

    // Verbind de client
    client.connect({
        onSuccess: onConnect,
        onFailure: function(errorMessage) {
            console.log('Connection failed: ' + errorMessage.errorMessage);
        }
    });
}

// Functie om de verbinding te verbreken
function disconnect() {
    if (client) {
        client.disconnect();
    }
}

// Callback functie voor het behandelen van de verbinding
function onConnect() {
    console.log('Connected');
    // Voeg hier eventueel extra logica toe voor na de verbinding
}

// Callback functie voor het behandelen van verbindingsverlies
function onConnectionLost(responseObject) {
    if (responseObject.errorCode !== 0) {
        console.log('Connection lost: ' + responseObject.errorMessage);
    }
}

// Callback functie voor het ontvangen van berichten
function onMessageArrived(message) {
    console.log('Message arrived: ' + message.payloadString);
    // Voeg hier eventueel extra logica toe voor het verwerken van ontvangen berichten
}
