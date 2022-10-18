<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>2048 Game</title>
    <link href="https://fonts.googleapis.com/css?family=Londrina+Outline|Sniglet" rel="stylesheet">
    <link rel="stylesheet" href="styles.css" type="text/css">
</head>
<body>
    <div id="container">
        <div id="splash" class="screen">
            <h1>20<span class="char1">4</span><span class="char2">8</span></h1>
            <button id="start" onclick="start()">new game</button>
        </div>
        <div id="pause" class="screen">
            <h1>Paused</h1>
            <button onclick="reset()">reset</button>
            <button onclick="resume()">continue</button>
        </div>
        <div id="end" class="screen">end</div>
        <div id="game" class="screen">
            <h1>2048</h1>
            <div id="info">Score:
                <span id="score"></span>
                <button type="button" id="pausebtn" onclick="pause()">pause</button>
            </div>
            <div id="gamearea">
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
                <div class="element"></div>
            </div>
        </div>
    </div>
    <div id="control">
        <h2>Control</h2>
        <button onclick="left()">left</button>
        <button onclick="up()">up</button>
        <button onclick="down()">down</button>
        <button onclick="right()">right</button>
    </div>
    <p>You can also use Arrow keys!</p>
<script src="script.js"></script>
</body>
</html>
