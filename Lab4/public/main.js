var LED_output=["off","off","off","off"];
function foo(){
  $("#response").css("fontSize", 40);
  setInterval(GetResult, 1000);
  function GetResult() {
    $.ajax({
      type:"get",
      url:"/index",
      success:function (result) {
        $('#response').text(result);
      },
      error: function() {
        alert("error");
      }
    })
  }
  /*var LED=[false,false,false,false];
  //window.event.preventDefault();
  var inputElements = document.getElementsByClassName('lightCheckbox');
  for(var i=0; inputElements[i]; ++i){
      if(inputElements[i].checked){
           LED[i] = true;
      }
  }
  var state=document.querySelector('input[name="light"]:checked').value;
  //alert(state);
  //alert(LED);
  //set text
  if(LED[0]==true){
    LED_output[0]=state;
  }
  if(LED[1]==true){
    LED_output[1]=state;
    document.getElementById('LED2_label').innerHTML = 'LED2：ON';
  }
  if(LED[2]==true){
    LED_output[2]=state;
    document.getElementById('LED3_label').innerHTML = 'LED3：ON';
  }
  if(LED[3]==true){
    LED_output[3]=state;
    document.getElementById('LED4_label').innerHTML = 'LED4：ON';
  }
  //alert(LED_output);

  if(LED_output[0]=="on"){
    document.getElementById('LED1_label').innerHTML = 'LED1：ON';
  }
  else{
    document.getElementById('LED1_label').innerHTML = 'LED1：OFF';
  }

  if(LED_output[1]=="on"){
    document.getElementById('LED2_label').innerHTML = 'LED2：ON';
  }
  else{
    document.getElementById('LED2_label').innerHTML = 'LED2：OFF';
  }
  
  if(LED_output[2]=="on"){
    document.getElementById('LED3_label').innerHTML = 'LED3：ON';
  }
  else{
    document.getElementById('LED3_label').innerHTML = 'LED3：OFF';
  }

  if(LED_output[3]=="on"){
    document.getElementById('LED4_label').innerHTML = 'LED4：ON';
  }
  else{
    document.getElementById('LED4_label').innerHTML = 'LED4：OFF';
  }*/
}

function foo2(){
  //window.event.preventDefault();
  var t = document.getElementById("fre").value;
  //alert(t);
  document.getElementById('Shine_label').innerHTML = 'Mode_Shine_Times：'+t;
}
