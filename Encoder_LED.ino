
void encoderLED (){
//for converting hsv to rgb for the encoder leds, all on 330 ohm resistors
//about the time i got to h72 I noticed the fastled rainbow deviates
//from the standard hsv spectrum
//so from then on i had to eyeball it
//it deviates earlier, but it was unnoticable

if (hue >= 0 && hue < 8) {  
trueBrightnessR = 255;
trueBrightnessG = 0;
trueBrightnessB = 0;
}

if (hue >= 8 &hue <16) {
trueBrightnessR = 255;
trueBrightnessG = 34;
trueBrightnessB = 0; 
}

else if (hue >= 16 && hue < 24) {
trueBrightnessR = 255;
trueBrightnessG = 68;
trueBrightnessB = 0; 
}

else if (hue >= 24 && hue < 32) {
trueBrightnessR = 255;
trueBrightnessG = 102;
trueBrightnessB = 0;  
}

else if (hue >= 32 && hue < 40) {
trueBrightnessR = 255;
trueBrightnessG = 137;
trueBrightnessB = 0; 
}

else if (hue >= 40 && hue < 48) {
trueBrightnessR = 255;
trueBrightnessG = 171;
trueBrightnessB = 0;  
}

else if (hue >= 48 && hue < 56) {
trueBrightnessR = 255;
trueBrightnessG = 205;
trueBrightnessB = 0;
}

else if (hue >= 56 && hue < 64) {
trueBrightnessR = 255;
trueBrightnessG = 239;
trueBrightnessB = 0; 
}

else if (hue >= 64 && hue < 72) {
trueBrightnessR = 239;
trueBrightnessG = 255;
trueBrightnessB = 0; 
}

else if (hue >= 72 && hue < 80) {
trueBrightnessR = 180;
trueBrightnessG = 255;
trueBrightnessB = 0; 
}

else if (hue >= 80 && hue < 88) {
trueBrightnessR = 90;
trueBrightnessG = 255;
trueBrightnessB = 0; 
}

else if (hue >= 88 && hue < 96) {
trueBrightnessR = 40;
trueBrightnessG = 255;
trueBrightnessB = 0; 
}

else if (hue >= 96 && hue < 104) {
trueBrightnessR = 0;
trueBrightnessG = 255;
trueBrightnessB = 0; 
}

else if (hue >= 104 && hue < 112) {
trueBrightnessR = 0;
trueBrightnessG = 225;
trueBrightnessB = 30; 
}

else if (hue >= 112 && hue < 120) {
trueBrightnessR = 0;
trueBrightnessG = 200;
trueBrightnessB = 60; 
}

else if (hue >= 120 && hue < 128) {
trueBrightnessR = 0;
trueBrightnessG = 180;
trueBrightnessB = 90; 
}

else if (hue >= 128 && hue < 136) {
trueBrightnessR = 0;
trueBrightnessG = 160;
trueBrightnessB = 120; 
}

else if (hue >= 136 && hue < 144) {
trueBrightnessR = 0;
trueBrightnessG = 120;
trueBrightnessB = 160; 
}

else if (hue >= 144 && hue < 152) {
trueBrightnessR = 0;
trueBrightnessG = 80;
trueBrightnessB = 200; 
}

else if (hue >= 152 && hue < 160) {
trueBrightnessR = 0;
trueBrightnessG = 40;
trueBrightnessB = 240; 
}

else if (hue >= 160 && hue < 168) {
trueBrightnessR = 0;
trueBrightnessG = 0;
trueBrightnessB = 255; 
}

else if (hue >= 168 && hue < 176) {
trueBrightnessR = 21;
trueBrightnessG = 0;
trueBrightnessB = 243; 
}

else if (hue >= 176 && hue < 184) {
trueBrightnessR = 42;
trueBrightnessG = 0;
trueBrightnessB = 222; 
}

else if (hue >= 184 && hue < 192) {
trueBrightnessR = 63;
trueBrightnessG = 0;
trueBrightnessB = 201; 
}

else if (hue >= 192 && hue < 200) {
trueBrightnessR = 84;
trueBrightnessG = 0;
trueBrightnessB = 180; 
}

else if (hue >= 200 && hue < 208) {
trueBrightnessR = 105;
trueBrightnessG = 0;
trueBrightnessB = 159; 
}

else if (hue >= 208 && hue < 216) {
trueBrightnessR = 126;
trueBrightnessG = 0;
trueBrightnessB = 138; 
}

else if (hue >= 216 && hue < 224) {
trueBrightnessR = 147;
trueBrightnessG = 0;
trueBrightnessB = 117; 
}

else if (hue >= 224 && hue < 232) {
trueBrightnessR = 168;
trueBrightnessG = 0;
trueBrightnessB = 96; 
}

else if (hue >= 232 && hue < 240) {
trueBrightnessR = 189;
trueBrightnessG = 0;
trueBrightnessB = 75; 
}

else if (hue >= 240 && hue < 248) {
trueBrightnessR = 210;
trueBrightnessG = 0;
trueBrightnessB = 54; 
}

else if (hue >= 248 && hue <= 255) {
trueBrightnessR = 231;
trueBrightnessG = 0;
trueBrightnessB = 33; 
}




//inverts the value because low level logic
xR =  255 - trueBrightnessR;
invertedBrightnessR = 0+xR;

xG =  255 - trueBrightnessG;
invertedBrightnessG = 0+xG;

xB =  255 - trueBrightnessB;
invertedBrightnessB = 0+xB;

analogWrite(encBlueLED, invertedBrightnessB);
analogWrite(encGreenLED, invertedBrightnessG); 
analogWrite(encRedLED, invertedBrightnessR); 

}
