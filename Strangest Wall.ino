#include "FastLED.h"

#define NUM_LEDS 50
#define BRIGHTNESS 64
#define DATA_PIN 3

CRGB leds[NUM_LEDS];  
char message [30];
char watLetter;
int messageNum = 0;
#define longPulse 600  
#define shortPulse 350 

// space = pause in lights; .= long pause (end of message)

void setup() {
  Serial.begin(9600);
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  randomSeed(analogRead(0));
}

void WalkingIn() {
  uint8_t brightness = BRIGHTNESS;
  int blinkers = random(0,13);
  for(int i = 0; i < blinkers; i++) {
    int my_colour = i % 7;
    switch (my_colour) {
      case 0:
      leds[i] = CRGB::Red;
      break;
      case 1:
      leds[i] = CRGB::Grey;
      break;
      case 2:
      leds[i] = CRGB::Purple;
      break;
      case 3:
      leds[i] = CRGB::Green;
      break;
      case 4:
      leds[i] = CRGB::Blue;
      break;
      case 5:
      leds[i] = CRGB::Orange;
      break;
      case 6:
      leds[i] = CRGB::Cyan;
      break;
    }            
    FastLED.show();
    delay(random(70,130));
    leds[i] = CRGB::Black;
    FastLED.show();
    delay(random(30,90));
  }
  FastLED.clear();
  delay(random(1,4)*1000);
}

void CHRISTMAS() {
  int m = random(6, 30);
  for(int i=0; i<m; i++){
    for(int j=0; j<9; j++){
      FastLED.clear();
    leds[j] = CRGB (0,255,255); //aqua
      leds[j+10] = CRGB (0,255,255); //aqua
        leds[j+20] = CRGB (0,255,255); //aqua
          leds[j+30] = CRGB (0,255,255); //aqua
            leds[((j+40)%50)] = CRGB (0,255,255); //aqua
    leds[j+1] = CRGB (153, 50, 204); //dark orchid
      leds[j+11] = CRGB (153, 50, 204); //dark orchid
        leds[j+21] = CRGB (153, 50, 204); //dark orchid
          leds[j+31] = CRGB (153, 50, 204); //dark orchid
           leds[((j+41)%50)] = CRGB (153, 50, 204); //dark orchid
    leds[j+2] = CRGB (255,255,0); //yellow
      leds[j+12] = CRGB (255,255,0); //yellow
        leds[j+22] = CRGB (255,255,0); //yellow
          leds[j+32] = CRGB (255,255,0); //yellow    
           leds[((j+42)%50)] = CRGB (255,255,0); //yellow                             
    leds[j+3] = CRGB (0,255,127); //spring green
      leds[j+13] = CRGB (0,255,127); //spring green
        leds[j+23] = CRGB (0,255,127); //spring green
          leds[j+33] = CRGB (0,255,127); //spring green
          leds[((j+43)%50)] = CRGB (0,255,127); //spring green
    leds[j+4] = CRGB (255,165,0); //orange 
      leds[j+14] = CRGB (255,165,0); //orange 
        leds[j+24] = CRGB (255,165,0); //orange 
          leds[j+34] = CRGB (255,165,0); //orange
           leds[((j+44)%50)] = CRGB (255,165,0); //orange 
    leds[j+5] = CRGB (65,105,255); //royal blue
      leds[j+15] = CRGB (65,105,255); //royal blue
        leds[j+25] = CRGB (65,105,255); //royal blue
          leds[j+35] = CRGB (65,105,255); //royal blue
           leds[((j+45)%50)] = CRGB (65,105,255); //royal blue
    leds[j+6] = CRGB (76, 0, 153); //dark purple
      leds[j+16] = CRGB (76, 0, 153); //dark purple
        leds[j+26] = CRGB (76, 0, 153); //dark purple
          leds[j+36] = CRGB (76, 0, 153); //dark purple
          leds[((j+46)%50)] = CRGB (76, 0, 153); //dark purple
    leds[j+7] = CRGB (255,105,180); //hot pink
      leds[j+17] = CRGB (255,105,180); //hot pink
        leds[j+27] = CRGB (255,105,180); //hot pink
          leds[j+37] = CRGB (255,105,180); //hot pink
          leds[((j+47)%50)] = CRGB (255,105,180); //hot pink
    leds[j+8] = CRGB (0,128,0); //dark green 
      leds[j+18] = CRGB (0,128,0); //dark green 
        leds[j+28] = CRGB (0,128,0); //dark green 
          leds[j+38] = CRGB (0,128,0); //dark green 
          leds[((j+48) % 50)] = CRGB (0,128,0); //dark green 
    leds[j+9] = CRGB (255,0,0); //red
      leds[j+19] = CRGB (255,0,0); //red
        leds[j+29] = CRGB (255,0,0); //red
          leds[j+39] = CRGB (255,0,0); //red
          leds[((j+49)%50)] = CRGB (255,0,0); //red
          FastLED.show();
          delay(200);
        }
      }
      delay(random(5, 15) * 100);
      FastLED.clear(); 
    }

    void glowup() {
      FastLED.clear();
      for( int i = 60; i < 255; i++ ) {
        int r = i;  
        int b = 0;  
        int g = 0;   
        for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(r,g,b);
        }
        FastLED.show();
        delay(50); 
      }
    }

    void glowdown() {
      for (int i = 255; i > 60; i--){
        int r = i;  
        int b = 0;  
        int g = 0;   
        for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(r,g,b);
        }
        FastLED.show();
        delay(50); 
      }      
    }

    void LOWREDDOWN(){
     for(int i = 150; i > 20; i--) {
      int r = i;  
      int b = 0;  
      int g = 0;   
      for(int x = 0; x < NUM_LEDS; x++){
        leds[x] = CRGB(r,g,b);
      }
      FastLED.show();
      delay(100); 
    } 
  }

  void LOWREDUP(){
    FastLED.clear();
    for(int i = 20; i < 150; i++) {
      int r = i;  
      int b = 0;  
      int g = 0;   
      for(int x = 0; x < NUM_LEDS; x++){
        leds[x] = CRGB(r,g,b);
      }
      FastLED.show();
      delay(100); 
    } 
  }

  void caseMessage() {
    switch (messageNum) {

      case 1:
      {
        WalkingIn(); 
        strncpy(message, "gute ideer.", 25);   
      }
      break;

      case 2:
      {
        WalkingIn(); 
        strncpy(message, "run.", 25);
      }
      break;

      case 3:
      {
        WalkingIn(); 
        strncpy(message, "i see you.", 25);
      }
      break;

      case 4:
      {
        WalkingIn(); 
        strncpy(message, "ha ha.", 25);
      }
      break;

      case 5:
      {
        WalkingIn(); 
        strncpy(message, ".", 25);
      }
      break;

      case 6:
      {
        WalkingIn(); 
        strncpy(message, "jesse.", 25);
      }
      break;

      case 7:
      {
        WalkingIn(); 
        strncpy(message, "merry christmas.", 25);
      }
      break;

      case 8:
      {
        WalkingIn(); 
        strncpy(message, "tuck frump.", 25);
      }
      break;

      case 9:
      {
        WalkingIn(); 
        strncpy(message, "help.", 25);
      }
      break;

      case 10:
      {
        WalkingIn(); 
        strncpy(message, "what did you do.", 25);
      }
      break;

      case 11:
      {
        WalkingIn(); 
        strncpy(message, "are you there.", 25);
      }
      break;

      case 12:
      {
        WalkingIn(); 
        strncpy(message, "good luck.", 25);
      }
      break;

      case 13:
      {
        WalkingIn(); 
        strncpy(message, "you cant hide.", 25);
      }
      break;

      case 14:
      {
        WalkingIn(); 
        strncpy(message, "i know what you did.", 26);
      }
      break;

      case 15:
      {
        WalkingIn(); 
        strncpy(message, "get out.", 25);
      }
      break;

      case 16:
      {
        WalkingIn(); 
        strncpy(message, "you are weird lol.", 25);
      }
      break;

      case 17:
      {
        WalkingIn(); 
        strncpy(message, "hello.", 25);
      }
      break;

      case 18:
      {
        WalkingIn(); 
        strncpy(message, "its me.", 25);
      }
      break;

      case 29:

      case 30:
      glowup();
      glowdown();
      FastLED.clear();
      break;
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 38:
      LOWREDUP();
      LOWREDDOWN();
      FastLED.clear();
      break;
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      glowup();
      glowdown();
      glowup();
      glowdown();
      FastLED.clear();
      break;
      default:
      CHRISTMAS();
      break;
    }
  }

  void caseLetters() {
    switch (watLetter) {
      case 'a':
      {
        leds[5] = CRGB::Red;
        leds[6] = CRGB::Red;
        FastLED.show();
        delay(longPulse);
        leds[5] = CRGB::Black;
        leds[6] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'b':
      {
        leds[8] = CRGB::Green;
        leds[9] = CRGB::Green;
        FastLED.show();
        delay(longPulse);
        leds[8] = CRGB::Black;
        leds[9] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'c':
      {
        leds[10] = CRGB::Red;
        FastLED.show();
        delay(longPulse);
        leds[10] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'd':
      {
        leds[11] = CRGB::Blue;
        leds[12] = CRGB::Blue;
        FastLED.show();
        delay(longPulse);
        leds[11] = CRGB::Black;
        leds[12] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'e':
      {
        leds[13] = CRGB::Yellow;
        FastLED.show();
        delay(longPulse);
        leds[13] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'f':
      {
        leds[14] = CRGB::Red;
        FastLED.show();
        delay(longPulse);
        leds[14] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'g':
      {
        leds[15] = CRGB::Green;
        FastLED.show();
        delay(longPulse);
        leds[15] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;
    //end of row 1
      case 'h':
      {
        leds[16] = CRGB::Blue;
        FastLED.show();
        delay(longPulse);
        leds[16] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'i':
      {
        leds[17] = CRGB::Yellow;
        FastLED.show();
        delay(longPulse);
        leds[17] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'j':
      {
        leds[18] = CRGB::Green;
        FastLED.show();
        delay(longPulse);
        leds[18] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'k':
      {
        leds[19] = CRGB::Red;
        leds[20] = CRGB::Red;
        FastLED.show();
        delay(longPulse);
        leds[19] = CRGB::Black;
        leds[20] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'l':
      {
        leds[21] = CRGB::Blue;
        FastLED.show();
        delay(longPulse);
        leds[21] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;
      case 'm':
      {
        leds[22] = CRGB::Green;
        FastLED.show();
        delay(longPulse);
        leds[22] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'n':
      {
        leds[23] = CRGB::Yellow;
        leds[24] = CRGB::Yellow;
        leds[25] = CRGB::Yellow;
        FastLED.show();
        delay(longPulse);
        leds[23] = CRGB::Black;
        leds[24] = CRGB::Black;
        leds[25] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'o':
      {
        leds[47] = CRGB::Blue;
        leds[48] = CRGB::Blue;
        FastLED.show();
        delay(longPulse);
        leds[47] = CRGB::Black;
        leds[48] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'p':
      {
        leds[46] = CRGB::Red;
        leds[45] = CRGB::Red;
        FastLED.show();
        delay(longPulse);
        leds[45] = CRGB::Black;
        leds[46] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'q':
      {
        leds[44] = CRGB::Yellow;
        FastLED.show();
        delay(longPulse);
        leds[44] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'r':
      {
        leds[43] = CRGB::Green;
        FastLED.show();
        delay(longPulse);
        leds[43] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 's':
      {
        leds[41] = CRGB::Red;
        leds[42] = CRGB::Red;
        FastLED.show();
        delay(longPulse);
        leds[41] = CRGB::Black;
        leds[42] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 't':
      {
        leds[40] = CRGB::Blue;
        FastLED.show();
        delay(longPulse);
        leds[40] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'u':
      {
        leds[39] = CRGB::Green;
        FastLED.show();
        delay(longPulse);
        leds[39] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;
    // end or row 3
      case 'v':
      {
        leds[37] = CRGB::Green;
        leds[38] = CRGB::Green;
        FastLED.show();
        delay(longPulse);
        leds[37] = CRGB::Black;
        leds[38] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'w':
      {
        leds[36] = CRGB::Blue;
        FastLED.show();
        delay(longPulse);
        leds[36] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'x':
      {
        leds[34] = CRGB::Red;
        leds[35] = CRGB::Red;
        FastLED.show();
        delay(longPulse);
        leds[34] = CRGB::Black;
        leds[35] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'y':
      {
        leds[33] = CRGB::Yellow;
        FastLED.show();
        delay(longPulse);
        leds[33] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

      case 'z':
      {
        leds[31] = CRGB::Red;
        leds[32] = CRGB::Red;
        FastLED.show();
        delay(longPulse);
        leds[31] = CRGB::Black;
        leds[32] = CRGB::Black;
        FastLED.show();
        delay(shortPulse);
      }
      break;

    case ' ':   // space
    {
      delay(longPulse);
      delay(shortPulse);
    }
    break;

    case '.':   //long pause between words
    {
      delay(1200);
      delay(1200);
    }
    break;
    default:
    delay(shortPulse);
    break;
  }
} 

void loop() {
  messageNum = random(1, 70); 
  caseMessage(); 
  for (int i = 0; i < strlen(message); i++) {
    watLetter = message[i];
    caseLetters();
  }
} 

