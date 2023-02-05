var num1=Math.floor(   Math.random()*6 + 1 );
var num2=Math.floor(   Math.random()*6 + 1 );

var dicesrc1="images/dice"+num1+".png"
var dicesrc2="images/dice"+num2+".png"

document.querySelectorAll("img")[0].setAttribute("src" , dicesrc1 );
document.querySelectorAll("img")[1].setAttribute("src" , dicesrc2 );

if(num1>num2)
{
    document.querySelector("h1").innerHTML="Player1 Wins!!"
}

if(num1<num2)
{
    document.querySelector("h1").innerHTML="Player2 Wins!!"
}

if(num1===num2)
{
    document.querySelector("h1").innerHTML="Draw!!"
}