const { response } = require("express");
const express = require("express");
const app = express();

app.use(express.static('./public'));
app.get("/index", (req,res)=>{
    //console.log(req.query.LED);
    //console.log(req.query.light);
    var str="";
    for(var i=0;i<req.query.LED.length;i++){
	str += req.query.LED[i];
        //console.log(req.query.LED[i]);
        //console.log(req.query.light);
    }
    console.log(str);
    callLED(str,req.query.light);
    //res.sendfile('./public/index.html');
})

app.get("/shine", (req,res)=>{
    callShine(req.query.Frequency);
    //console.log(req.query.Frequency);
    //res.sendfile('./public/index.html');
})

function callLED(LED, light){
    let child_process = require("child_process");
    let process = child_process.execFile('sudo', [
        "./C++/lab2/lab2", light , LED
    ]);
    process.stdout.on('data',(data)=>{
        console.log(`stdout: ${data}`);
    });
    process.stderr.on('data',(data)=>{
        console.error(`stdout: ${data}`);
    });
}

function callShine(Frequency){
    let child_process = require("child_process");
    let process = child_process.execFile('sudo', [
        "./C++/lab2/lab2", "Mode_Shine" , Frequency
    ]);
    process.stdout.on('data',(data)=>{
        console.log(`stdout: ${data}`);
    });
    process.stderr.on('data',(data)=>{
        console.error(`stdout: ${data}`);
    });
}

const PORT = process.env.PORT || 8080;
app.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}.`);
});
