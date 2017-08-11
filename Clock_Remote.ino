//Clock Remote 
#include <LiquidCrystal.h>
#include <Wire.h>
#include <Encoder.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 9, 10, 12, 11, 8);


//encoder
Encoder knobOne(2, 17); //(pin, pin)
int hue;

//encoder led
int encBlueLED = 6;
int encGreenLED = 3;
int encRedLED = 5;
//because encoder led low level logic
int xR;
int trueBrightnessR;
int invertedBrightnessR =255;
int xG;
int trueBrightnessG;
int invertedBrightnessG =255;
int xB;
int trueBrightnessB;
int invertedBrightnessB =255;



byte handSelect;
byte clockMode = 0;
byte timeState = 1;

byte secondHandHue = 115;
byte minuteHandHue = 135;
byte hourHandHue = 100;


int timerHour;
int timerMin;
int timerSec;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
 Serial.begin(9600);
//start coms  
  Wire.begin(); 
//bootMessage (); 

}



void loop() {
  
if (clockMode == 0) {    
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0): 
  lcd.setCursor(0, 0);
  lcd.print("Set Colour:     ");
  lcd.setCursor(0, 1);
  
 if (handSelect == 0) {lcd.print("Second Hand     ");}
 if (handSelect == 1) {lcd.print("Minute Hand     ");}
 if (handSelect == 2) {lcd.print("Hour Hand       ");} 
  // print the number of seconds since reset:
 // lcd.print(millis() / 1000);
}

if (clockMode == 1){
  lcd.setCursor(0, 0);
  lcd.print("Countdown Timer:");
  lcd.setCursor(0, 1);
 lcd.print(timerHour);
lcd.setCursor(2, 1);
lcd.print(":");
lcd.setCursor(3, 1);
lcd.print(timerMin);
lcd.setCursor(5, 1);
lcd.print(":");
lcd.setCursor(6, 1);
lcd.print(timerSec);
}

if (clockMode == 2){
  lcd.setCursor(0, 0);
  if (timeState == 0) {
  lcd.print("Local Time Is:  ");}
 if (timeState == 1){
  lcd.print("Change The Time:"); } 
  lcd.setCursor(0, 1);
  lcd.print("xx:yy:zz");}



//i2C wire

Wire.beginTransmission(1);
Wire.write (secondHandHue);
Wire.write (minuteHandHue);
Wire.write (hourHandHue);
Wire.endTransmission();

//knob
encoder ();
encoderLED ();
}

