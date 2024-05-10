function connectVizanti(){
    var host = document.getElementById("host").value;
    var port = document.getElementById("port").value;

    var vizantiView = document.getElementById("vizanti");
    vizantiView.src = "http://" + host + ":" + port;
}