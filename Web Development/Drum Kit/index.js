var n=document.querySelectorAll("button").length;

function aud()
{
    var audio=new Audio('sounds/tom-1.mp3');
    audio.play(); 
    
    this.style.color= "white";
}

for(var i=0;i<n;i++)
{
document.querySelectorAll("button")[i].addEventListener("click" ,  aud  );

}

