#include <FastLED.h>
#define LED_PIN     5
#define NUM_LEDS    29

int strobo_1 = 30;
int strobo_2 = 80;
int strobo_3 = 50;
int strobo_4 = 100;

int freq_1 = 10;
int freq_2 = 30;
int freq_3 = 100;

int freq_pattern_1 = 40;


CRGB leds[NUM_LEDS];




void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}


void rosso() {
  
  for (int i = 0; i <= 3; i++) {
       
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);

  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);
  
  FastLED.show();
  delay(strobo_1);
  }
}


void bianco()  {

for (int i = 0; i <= 3; i++) {
  
  leds[10]=CRGB (255,255,255);
  leds[11]=CRGB (255,255,255);
  leds[12]=CRGB (255,255,255);
  leds[13]=CRGB (255,255,255);
  leds[14]=CRGB (255,255,255);
  leds[15]=CRGB (255,255,255);
  leds[16]=CRGB (255,255,255);
  leds[17]=CRGB (255,255,255);
  leds[18]=CRGB (255,255,255);

  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);
  
  FastLED.show();
  delay(strobo_1);
  
 } 
}


void blu()  {

for (int i = 0; i <= 3; i++) {
 

  leds[19]=CRGB (0,0,255);
  leds[20]=CRGB (0,0,255);
  leds[21]=CRGB (0,0,255);
  leds[22]=CRGB (0,0,255);
  leds[23]=CRGB (0,0,255);
  leds[24]=CRGB (0,0,255);
  leds[25]=CRGB (0,0,255);
  leds[26]=CRGB (0,0,255);
  leds[27]=CRGB (0,0,255);
  leds[28]=CRGB (0,0,255);
  leds[29]=CRGB (0,0,255);

  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);
  
  FastLED.show();
  delay(strobo_1);
  
  }
}

void mix_rwb()  {

for (int i = 0; i <= 6; i++) {
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);
  
  leds[10]=CRGB (255,255,255);
  leds[11]=CRGB (255,255,255);
  leds[12]=CRGB (255,255,255);
  leds[13]=CRGB (255,255,255);
  leds[14]=CRGB (255,255,255);
  leds[15]=CRGB (255,255,255);
  leds[16]=CRGB (255,255,255);
  leds[17]=CRGB (255,255,255);
  leds[18]=CRGB (255,255,255);

  leds[19]=CRGB (0,0,255);
  leds[20]=CRGB (0,0,255);
  leds[21]=CRGB (0,0,255);
  leds[22]=CRGB (0,0,255);
  leds[23]=CRGB (0,0,255);
  leds[24]=CRGB (0,0,255);
  leds[25]=CRGB (0,0,255);
  leds[26]=CRGB (0,0,255);
  leds[27]=CRGB (0,0,255);
  leds[28]=CRGB (0,0,255);
  leds[29]=CRGB (0,0,255);

  FastLED.show();
  delay(strobo_1);
  
  FastLED.clear ();
  delay(strobo_1);
  
  FastLED.show();
  delay(strobo_1);
  
  }
 
}


void mix_rb()  {

for (int i = 0; i <= 3; i++) {
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

}

for (int i = 0; i <= 3; i++) {
  
  leds[19]=CRGB (0,0,255);
  leds[20]=CRGB (0,0,255);
  leds[21]=CRGB (0,0,255);
  leds[22]=CRGB (0,0,255);
  leds[23]=CRGB (0,0,255);
  leds[24]=CRGB (0,0,255);
  leds[25]=CRGB (0,0,255);
  leds[26]=CRGB (0,0,255);
  leds[27]=CRGB (0,0,255);
  leds[28]=CRGB (0,0,255);
  leds[29]=CRGB (0,0,255);

  
  
  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);
  
  }
 
}



void mix_rl_lr()  {

 for (int i = 0; i <= 3; i++) {
  
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);


  leds[25]=CRGB (0,0,255);
  leds[26]=CRGB (0,0,255);
  leds[27]=CRGB (0,0,255);
  leds[28]=CRGB (0,0,255);
  leds[29]=CRGB (0,0,255);

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);
}

 
 for (int i = 0; i <= 3; i++) {
  
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (2550,0,0);
  leds[9]=CRGB (2550,0,0);
    
  leds[19]=CRGB (0,0,255);
  leds[20]=CRGB (0,0,255);
  leds[21]=CRGB (0,0,255);
  leds[22]=CRGB (0,0,255);
  leds[23]=CRGB (0,0,255);
  
  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

  }
}




void mix_rl_w_lr()  {

 for (int i = 0; i <= 3; i++) {
  
  leds[0]=CRGB::Red;
  leds[1]=CRGB::Red;
  leds[2]=CRGB::Red;
  leds[3]=CRGB::Red;
  leds[4]=CRGB::Red;

  
  leds[10]=CRGB::White;
  leds[11]=CRGB::White;
  leds[12]=CRGB::White;
  leds[13]=CRGB::White;
  leds[14]=CRGB::White;
  
  leds[15]=CRGB::White;
  leds[16]=CRGB::White;
  leds[17]=CRGB::White;
  leds[18]=CRGB::White;

  leds[25]=CRGB::Blue;
  leds[26]=CRGB::Blue;
  leds[27]=CRGB::Blue;
  leds[28]=CRGB::Blue;
  leds[29]=CRGB::Blue;

  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);
}

 
 for (int i = 0; i <= 3; i++) {
  
  leds[5]=CRGB::Red;
  leds[6]=CRGB::Red;
  leds[7]=CRGB::Red;
  leds[8]=CRGB::Red;
  leds[9]=CRGB::Red;

  leds[10]=CRGB::Black;
  leds[11]=CRGB::Black;
  leds[12]=CRGB::Black;
  leds[13]=CRGB::Black;
  leds[14]=CRGB::Black;

  leds[15]=CRGB::Black;
  leds[16]=CRGB::Black;
  leds[17]=CRGB::Black;
  leds[18]=CRGB::Black;

  
    
  leds[19]=CRGB::Blue;
  leds[20]=CRGB::Blue;
  leds[21]=CRGB::Blue;
  leds[22]=CRGB::Blue;
  leds[23]=CRGB::Blue;
  
  FastLED.show();
  delay(strobo_1);
  FastLED.clear ();
  delay(strobo_1);

  }
}

//*********************************************************************

void rosso_static() {  
       
  leds[0]=CRGB (255,0,0);
  leds[1]=CRGB (255,0,0);
  leds[2]=CRGB (255,0,0);
  leds[3]=CRGB (255,0,0);
  leds[4]=CRGB (255,0,0);
  leds[5]=CRGB (255,0,0);
  leds[6]=CRGB (255,0,0);
  leds[7]=CRGB (255,0,0);
  leds[8]=CRGB (255,0,0);
  leds[9]=CRGB (255,0,0);

  FastLED.show();
  delay(strobo_3);
  
  FastLED.clear();
  delay(strobo_3);

}


void bianco_static()  {
 
  leds[10]=CRGB (255,255,255);
  leds[11]=CRGB (255,255,255);
  leds[12]=CRGB (255,255,255);
  leds[13]=CRGB (255,255,255);
  leds[14]=CRGB (255,255,255);
  leds[15]=CRGB (255,255,255);
  leds[16]=CRGB (255,255,255);
  leds[17]=CRGB (255,255,255);
  leds[18]=CRGB (255,255,255);

  FastLED.show();
  delay(strobo_3);
  
  FastLED.clear();
  delay(strobo_3);
    
}


void blu_static()  {

  leds[19]=CRGB (0,0,255);
  leds[20]=CRGB (0,0,255);
  leds[21]=CRGB (0,0,255);
  leds[22]=CRGB (0,0,255);
  leds[23]=CRGB (0,0,255);
  leds[24]=CRGB (0,0,255);
  leds[25]=CRGB (0,0,255);
  leds[26]=CRGB (0,0,255);
  leds[27]=CRGB (0,0,255);
  leds[28]=CRGB (0,0,255);
  leds[29]=CRGB (0,0,255);

  FastLED.show();
  delay(strobo_3);
  
  FastLED.clear();
  delay(strobo_3);
  
}

// §§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// Pattern 1

void pattern_1()  {

  for (int i = 0; i <= 3; i++) {  
    
    leds[0]=CRGB (255,0,0);
    leds[1]=CRGB (255,0,0);
    leds[2]=CRGB (255,0,0);
    leds[3]=CRGB (255,0,0);
    leds[4]=CRGB (255,0,0);

    leds[25]=CRGB (0,0,255);
    leds[26]=CRGB (0,0,255);
    leds[27]=CRGB (0,0,255);
    leds[28]=CRGB (0,0,255);
    leds[29]=CRGB (0,0,255);

    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1);
    }

  for (int i = 0; i <= 3; i++) {
  
    leds[5]=CRGB (255,0,0);
    leds[6]=CRGB (255,0,0);
    leds[7]=CRGB (255,0,0);
    leds[8]=CRGB (2550,0,0);
    leds[9]=CRGB (2550,0,0);
    
    leds[19]=CRGB (0,0,255);
    leds[20]=CRGB (0,0,255);
    leds[21]=CRGB (0,0,255);
    leds[22]=CRGB (0,0,255);
    leds[23]=CRGB (0,0,255);
  
    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1); 
    }
}


// Pattern 2

void pattern_2()  {

  for (int i = 0; i <= 3; i++) {  
    
    leds[0]=CRGB (255,0,0);
    leds[1]=CRGB (255,0,0);
    leds[2]=CRGB (255,0,0);
    leds[3]=CRGB (255,0,0);
    leds[4]=CRGB (255,0,0);

    leds[25]=CRGB (0,0,255);
    leds[26]=CRGB (0,0,255);
    leds[27]=CRGB (0,0,255);
    leds[28]=CRGB (0,0,255);
    leds[29]=CRGB (0,0,255);

    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1);
    }

 
  for (int i = 0; i <= 3; i++) {
  
    leds[5]=CRGB (255,0,0);
    leds[6]=CRGB (255,0,0);
    leds[7]=CRGB (255,0,0);
    leds[8]=CRGB (2550,0,0);
    leds[9]=CRGB (2550,0,0);
      
    leds[19]=CRGB (0,0,255);
    leds[20]=CRGB (0,0,255);
    leds[21]=CRGB (0,0,255);
    leds[22]=CRGB (0,0,255);
    leds[23]=CRGB (0,0,255);
  
    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1); 
    }
   
}



//****************************************************************


void white_blink() {

  for (int i = 0; i <= 3; i++) {
    
    //leds[10]=CRGB (255,255,255);
    //leds[11]=CRGB (255,255,255);
    //leds[12]=CRGB (255,255,255);
   
    leds[13]=CRGB (255,255,255);
    leds[14]=CRGB (255,255,255);
    leds[15]=CRGB (255,255,255);
    
    //leds[16]=CRGB (255,255,255);
    //leds[17]=CRGB (255,255,255);
    //leds[18]=CRGB (255,255,255);
    
    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1); 

    leds[10]=CRGB (255,255,255);
    leds[11]=CRGB (255,255,255);
    leds[12]=CRGB (255,255,255);
   
    //leds[13]=CRGB (255,255,255);
    //leds[14]=CRGB (255,255,255);
    //leds[15]=CRGB (255,255,255);
    
    leds[16]=CRGB (255,255,255);
    leds[17]=CRGB (255,255,255);
    leds[18]=CRGB (255,255,255);


    FastLED.show();
    delay(freq_pattern_1);
    FastLED.clear ();
    delay(freq_pattern_1); 
    
  }

}
// §§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//***************************************************
//***************************************************
//***************************************************
//***************************************************
//***************************************************
//***************************************************



void loop() {



//--------------------------------------- STEP 1
rosso();
delay (strobo_2);

blu();
delay(strobo_2);

rosso();
delay (strobo_2);

blu();
delay(strobo_2);

//-------------------------------------- STEP 2

mix_rwb();
delay(strobo_2);

//-------------------------------------- STEP 3



//-------------------------------------- STEP 4

mix_rb();
delay(strobo_2);

//-------------------------------------- STEP 5


  
  for (int i = 0; i <= 3; i++) {
    mix_rl_lr(); 
   delay(strobo_1);
  }

//-------------------------------------- STEP 6

bianco();
delay(strobo_2);


//-------------------------------------- STEP 7

  for (int i = 0; i <= 6; i++) {
    mix_rl_w_lr();
    delay(strobo_1);
  }

//-------------------------------------- STEP 8


  for (int i = 0; i <= 6; i++) {
    rosso();
    delay (strobo_2);

    blu();
    delay(strobo_2);

    rosso();
    delay (strobo_2);

    blu();
    delay(strobo_2);
  }


//-----------------------------------  STEP 11

 for (int i = 0; i <= 6; i++) {
    pattern_1();
 }


//------------------------------------ STEP 12


for (int i = 0; i <= 6; i++) {
    pattern_2();
 }
 
 //----------------------------------- STEP 10


white_blink();

//


//------------------------------------- STEP 9



 

//------------------------------------ STEP 14

for (int i = 0; i <= 6; i++) {


    for (int i = 0; i <= 3; i++) {
      
        for (int i = 29; i >= 0; i--) {
          leds[i] = CRGB::Red; 
          FastLED.show();         
          }

          FastLED.clear ();
     }
      
              
     for (int i = 0; i <= 3; i++) {
      
        for (int i = 0; i <= 29; i++) {
        leds[i] = CRGB::White; 
        FastLED.show();  
        }
        FastLED.clear ();
     }


     for (int i = 0; i <= 3; i++) {
      
          for (int i = 0; i <= 29; i++) {
          leds[i] = CRGB::Blue; 
          FastLED.show();  
          }
          FastLED.clear ();
      }

}


//----------------------------------- STEP 15

              


}
