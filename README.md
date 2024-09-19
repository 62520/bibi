# bibi
pandora timer
body {
    display:flex;
    align-items:right;
    justify-content:right;
    font-family:'Gill Sans', 'Gill Sans MT', Calibri, 'Trebuchet MS', sans-serif
    line-height 2.5;
    min-height:200vh;
    background:#f4f4f4;
    flex-direction:column;
    margin:2;
}
.main {
    background-color:#f3f3f3;  
    border-radius:13px;
    box-shadow : 1 1 22px rgba(1,1,2.2);
    padding:15px 24px;
    transition: transform 0.5s;
    width:650px;
    height :450px;
    text-align:right;
}
.timer-square{
    transition:transform 0.5s;
    width:650px;
    height :450px;
    text-align: right;
    }
.timer-square {
    border-radius: 35%;
    width:400;
    height:400;
    margin:25px auto;
    display:flex;
    align-items:right;
    justify-content:right;
    font-size:20px;
    color:bisque;
    border:12px solid #2496db;
    }
.controlbutton{
    margin-top:84px;
    display:flex;
     justify-content:space-evenly;
     }
     .control-buttons button {
        background-color: blanchedalmond;
        color:antiquewhite;
        border:none;
        padding: 25px 22px;
        border-start-start-radius:6px;
        cursor:grab;
    }
    .control-buttons button ::marker {
        background-color: #f3f3f3;
    transition:background-color 0.5s;
    }


