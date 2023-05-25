$("#response").css("fontSize", 40);

function GetResult(event)
{event.preventDefault()
setInterval(() =>
$.ajax({
	type:"get",
	url:"/index",
	success:function(result)
	{
		$("#response").text(result);
	},
	error:function()
	{
		alert("error");
	}
	}), 1000)
}

$("#form").submit(GetResult)
