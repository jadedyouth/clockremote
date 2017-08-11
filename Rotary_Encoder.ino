void encoder (){
   
//changing hand colours 
if (clockMode == 0){
   if (knobOne.read() < 0) { knobOne.write(1023); }
   if (knobOne.read() >=1023) { knobOne.write(0); }
   
   hue = knobOne.read() /4;

if (handSelect == 0) {secondHandHue = hue;}
if (handSelect == 1) {minuteHandHue = hue;}
if (handSelect == 2) {hourHandHue = hue;}

  
}
 Serial.println(hue);  
}
