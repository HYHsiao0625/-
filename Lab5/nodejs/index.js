const response = require("express");
const express = require("express");
const app = express();

app.use(express.static('./public'));
app.get("/index", async (req,res)=>{
    if (req.query.Detect == "on"){
	console.log(req.query);
	const s = await test()
res.end(s)
    }
  //res.redirect('/');
})

app.get("/shine", (req,res)=>{
    callShine(req.query.Frequency);
    //console.log(req.query.Frequency);
    //res.sendfile('./public/index.html');
})


function callShine(Frequency){
    let child_process = require("child_process");
    let process = child_process.execFile('sudo', [
        "./C++/lab2/lab2", "Mode_Shine" , Frequency
    ]);
   
}

function test()
{
	return new Promise(function(resolve, reject){
	let child_process = require("child_process");
	let process = child_process.spawn('python', ["./test.py"]);

	process.stdout.on('data', (data) => {
		console.log(`stdout: ${data}`);
		resolve(data.toString())
		});
	process.stderr.on('data', (data) => {
		console.log(`stderr: ${data}`);
		resolve(data)
		});
	});
}
const PORT = process.env.PORT || 8080;
app.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}.`);
});



