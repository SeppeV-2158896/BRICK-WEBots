const client = new Paho.MQTT.Client('2a144db8513740369fedfc9de40e179b.s1.eu.hivemq.cloud', Number(8884), "/mqtt", 'client-id:' + Math.random().toString(16).substr(2, 8));

client.onConnectionLost = onConnectionLost;
client.onMessageArrived = onMessageArrived;

client.connect({
    onSuccess: onConnect, 
    userName : "TestUser",
    password : "t3stT3ST",
    useSSL: true
});

function subscribeOnTopic(topic){
    client.subscribe(topic, {
        onSuccess: function() {
            console.log('Subscription to topic', topic, 'successful');
        },
        onFailure: function(err) {
            console.error('Failed to subscribe to topic', topic, ':', err.errorMessage);
        }
    });
}

function onConnect() {
    console.log('Connected to MQTT broker');

    setup()
}

function onConnectionLost(responseObject) {
    if (responseObject.errorCode !== 0) {
        console.log('Connection lost:', responseObject.errorMessage);
    }
}

function onMessageArrived(message) {
    // console.log("Message received: " + message.destinationName)
    if (message.destinationName == "videostream"){
        var imageBase64 = message.payloadString;
        var imageElement = document.getElementById('cameraView');
        imageElement.src = "data:image/jpeg;charset=utf-8;base64," + imageBase64;
        // console.log(imageElement.src)
    }
}

function sendData(data, topic) {
    var message = new Paho.MQTT.Message(data);
    message.qos = 2;
    message.destinationName = topic;
    client.send(message);

    console.log("message send: " + message.toString());
}

function setup() {
    subscribeOnTopic("movement");
    subscribeOnTopic("emergencyStop");
    subscribeOnTopic("videostream")

    setEventListenersArrowButtons('forward');
    setEventListenersArrowButtons('left');
    setEventListenersArrowButtons('backward');
    setEventListenersArrowButtons('right');

    setEventListenersEmergencyStopButton();

    setKeyboardEventListener()
}

function setEventListenersArrowButtons(direction) {
    var arrowButton = document.getElementById('arrow-' + direction);

    // Mouse actions
    arrowButton.addEventListener('mousedown', function() {
        sendData(direction + '_down', 'movement');
    });

    arrowButton.addEventListener('mouseup', function() {
        sendData(direction + '_up', 'movement');
    });
}

function setEventListenersEmergencyStopButton() {
    var emergencyStopButton = document.getElementById('emergency-stop');

    emergencyStopButton.addEventListener('click', function(){
        sendData("stop", "emergencyStop");
    });
}

function setKeyboardEventListener() {
    // Keyboard actions
    document.addEventListener('keydown', function(event) {
        if(!event.repeat){
            if(event.key === 'z'){
                sendData('forward_down', 'movement');
            }
            else if(event.key === 'q') {
                sendData('left_down', 'movement');
            }
            else if(event.key === 's') {
                sendData('backward_down', 'movement');
            }
            else if(event.key === 'd') {
                sendData('right_down', 'movement');
            }
        }
    });

    document.addEventListener('keyup', function(event) {
        if(event.key === 'z'){
            sendData('forward_up', 'movement');
        }
        else if(event.key === 'q') {
            sendData('left_up', 'movement');
        }
        else if(event.key === 's') {
            sendData('backward_up', 'movement');
        }
        else if(event.key === 'd') {
            sendData('right_up', 'movement');
        }
        else if(event.key === 'Escape'){
            sendData('stop', 'emergencyStop');
        }
    });

    // document.addEventListener('keypress', function(event){
    //     if(event.key === 'del') {
    //         sendData('stop', 'emergencyStop');
    //     }
    // });
}
