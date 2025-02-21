function count(){
    let a=document.getElementById("age").value;
    let c=(a>=18) && (a<=100)  ? "You are Eligible" : "You are not Eligible";
    alert(c);
}
