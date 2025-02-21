function add(){
    var a=Number(Prompt("Enter value for a"));
    var b=Number(prompt("Enter value for b"));
    document.getElementById('demo1').innerHTML=(a+b);
    alert(a+b);
}
function sub(){
    var a=Number(Prompt("Enter value for a"));
    var b=Number(prompt("Enter value for b"));
    document.getElementById('demo2').innerHTML=(a-b);
    alert(a-b);
}
function mul(){
    var a=Number(Prompt("Enter value for a"));
    var b=Number(prompt("Enter value for b"));
    document.getElementById('demo3').innerHTML=(a*b);
    alert(a*b);
}
function div(){
    var a=Number(Prompt("Enter value for a"));
    var b=Number(prompt("Enter value for b"));
    document.getElementById('demo4').innerHTML=(a/b);
    alert(a/b);
}