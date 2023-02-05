//serial_plotter

double a=0.00;



void setup()             
{                                   
     
     Serial.begin(9600);
}                                                   



                                                         
void loop() 
{    

  if(a==100)
  a=-a;
   if(a==0)
  a=-a;
   
 // Serial.print(sin( (a*PI)/180.00 )  ); 
 
 Serial.print(a*a  ); //parabola
  Serial.print(" , "); 
   
//  Serial.print(cos( (a*PI)/180.00 )  );

 Serial.print(-a*a  ); //reverse parabola
  Serial.println(" , ");  
   

  a+=5;
   
}
