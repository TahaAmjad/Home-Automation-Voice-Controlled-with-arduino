//Courtesy:  Angelo Casimiro (4/27/14)
//Voice Activated Arduino (Bluetooth + Android)

#include <LiquidCrystal.h>
LiquidCrystal lcd(25,26,27,28,29,30);
String voice;
int num;
void setup(){
  Serial.begin(9600);
  disp();
}

void disp(){
  lcd.begin(16, 2);
  lcd.print("Semester Project");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("2014-MC-01");
  delay(1500);
  lcd.setCursor(0, 1);
  lcd.print("2014-MC-20");
  delay(1500);
  lcd.setCursor(0, 1);
  lcd.print("2014-MC-24");
  delay(1500);
  lcd.setCursor(0, 1);
  lcd.print("Speak-o-Bulb");
  delay(1500);
  lcd.clear();
}


void loop() {
  while (Serial.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = Serial.read(); //Conduct a serial read
  if (c == '#') {break;} //Exit the loop when the # is detected after the word
  voice += c; //Shorthand for voice = voice + c
  }  
  if (voice.length() > 0) {
    Serial.println(voice); 
    if(voice == "*on") {num=100;}  
    else if(voice == "off"){num=0;}

    else if(voice == "*0%"){num=100;}
    else if(voice == "*10%"){10%();}
    else if(voice == "*20%"){20%();}
    else if(voice == "*30%"){30%();}
    else if(voice == "*40%"){40%();}
    else if(voice == "*50%"){50%();}
    else if(voice == "*half"){50%();}
    else if(voice == "*60%"){60%();}
    else if(voice == "*70%"){70%();}
    else if(voice == "*80%"){80%();}
    else if(voice == "*90%"){90%();}
    else if(voice == "*100%"){100%();}

    else {100%();}
    
      voice="";}} //Reset the variable after initiating 

