#include "pitches.h"

//Pins
const int BUTTON_PIN = 2;
const int LED_PIN = 12;
const int SPEAKER_PIN = 8;
const int TRIG_PIN = 10;
const int ECHO_PIN = 11;
const int SPEAKER_SWITCH_PIN = 7; // Change to use pin 7 for the speaker switch
const int RED_PIN = 3;
const int GREEN_PIN = 6;
const int BLUE_PIN = 5;

// Song names array
const char* songNames[] = {"GOT", "Imperial March", "Pirates of the Caribbean", "Harry Potter"};


//Song melodies:

int gotMelody[] = {
  NOTE_G4, 8, NOTE_C4, 8, NOTE_DS4, 16, NOTE_F4, 16,
  NOTE_G4, 8, NOTE_C4, 8, NOTE_DS4, 16, NOTE_F4, 16,
  NOTE_G4, 8, NOTE_C4, 8, NOTE_E4, 16, NOTE_F4, 16,
  NOTE_G4, 8, NOTE_C4, 8, NOTE_E4, 16, NOTE_F4, 16,
  NOTE_G4, 4, NOTE_C4, 4,
  NOTE_DS4, 16, NOTE_F4, 16, NOTE_G4, 4, NOTE_C4, 4, 
  NOTE_DS4, 16, NOTE_F4, 16, NOTE_D4, 1
};
int imperialMarch[] = {
  // Opening
  NOTE_A4, 4, NOTE_A4, 4, NOTE_A4, 4, 
  NOTE_F4, 8, NOTE_C5, 16,
  NOTE_A4, 4, NOTE_F4, 8, NOTE_C5, 16, NOTE_A4, 4,
  // Transition
  NOTE_E5, 4, NOTE_E5, 4, NOTE_E5, 4, 
  NOTE_F5, 8, NOTE_C5, 16,
  NOTE_A4, 4, NOTE_F4, 8, NOTE_C5, 16, NOTE_A4, 4,
  // Middle section
  NOTE_A5, 4, NOTE_A4, 4, NOTE_A4, 4,
  NOTE_A5, 4, NOTE_GS5, 8, NOTE_G5, 16,
  NOTE_FS5, 16, NOTE_F5, 16, NOTE_FS5, 8, 
  NOTE_AS4, 8, NOTE_DS5, 4, NOTE_D5, 8, NOTE_CS5, 16,
  // Repeat with slight variation
  NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 8,
  NOTE_F4, 8, NOTE_AS4, 4, NOTE_A4, 8, NOTE_F4, 16, NOTE_C5, 16, NOTE_A4, 4,
  // Return to opening theme
  NOTE_A5, 4, NOTE_A4, 4, NOTE_A4, 4, 
  NOTE_A5, 4, NOTE_GS5, 8, NOTE_G5, 16,
  NOTE_FS5, 16, NOTE_F5, 16, NOTE_FS5, 8,
  NOTE_AS4, 8, NOTE_DS5, 4, NOTE_D5, 8, NOTE_CS5, 16,
  NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 8, NOTE_F4, 8,
  NOTE_AS4, 4, NOTE_A4, 8, NOTE_F4, 16, NOTE_C5, 16, NOTE_A4, 4
};

int piratesMelody[] = {
  NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, 0, 8,
  NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 4, NOTE_C5, 8, 0, 8,
  NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4, NOTE_B4, 8, 0, 8,
  NOTE_A4, 8, NOTE_G4, 8, NOTE_A4, 3, 0, 8,

  NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, 0, 8,
  NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 4, NOTE_C5, 8, 0, 8,
  NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4, NOTE_B4, 8, 0, 8,
  NOTE_A4, 8, NOTE_G4, 8, NOTE_A4, 3, 0, 8,

  NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, 0, 8,
  NOTE_A4, 8, NOTE_C5, 8, NOTE_D5, 4, NOTE_D5, 8, 0, 8,
  NOTE_D5, 8, NOTE_E5, 8, NOTE_F5, 4, NOTE_F5, 8, 0, 8,
  NOTE_E5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_A4, 4, 0, 8,

  NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 4, NOTE_C5, 8, 0, 8,
  NOTE_D5, 4, NOTE_E5, 8, NOTE_A4, 4, 0, 8,
  NOTE_A4, 8, NOTE_C5, 8, NOTE_B4, 4, NOTE_B4, 8, 0, 8,
  NOTE_C5, 8, NOTE_A4, 8, NOTE_B4, 3, 0, 3,

  NOTE_A4, 4, NOTE_A4, 8,
  //Repeat of first part
  NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 4, NOTE_C5, 8, 0, 8,
  NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4, NOTE_B4, 8, 0, 8,
  NOTE_A4, 8, NOTE_G4, 8, NOTE_A4, 3, 0, 8,

  NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, 0, 8,
  NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 4, NOTE_C5, 8, 0, 8,
  NOTE_C5, 8, NOTE_D5, 8, NOTE_B4, 4, NOTE_B4, 8, 0, 8,
  NOTE_A4, 8, NOTE_G4, 8, NOTE_A4, 3, 0, 8,

  NOTE_E4, 8, NOTE_G4, 8, NOTE_A4, 4, NOTE_A4, 8, 0, 8,
  NOTE_A4, 8, NOTE_C5, 8, NOTE_D5, 4, NOTE_D5, 8, 0, 8,
  NOTE_D5, 8, NOTE_E5, 8, NOTE_F5, 4, NOTE_F5, 8, 0, 8,
  NOTE_E5, 8, NOTE_D5, 8, NOTE_E5, 8, NOTE_A4, 4, 0, 8,

  NOTE_A4, 8, NOTE_B4, 8, NOTE_C5, 4, NOTE_C5, 8, 0, 8,
  NOTE_D5, 4, NOTE_E5, 8, NOTE_A4, 4, 0, 8,
  NOTE_A4, 8, NOTE_C5, 8, NOTE_B4, 4, NOTE_B4, 8, 0, 8,
  NOTE_C5, 8, NOTE_A4, 8, NOTE_B4, 3, 0, 3,
  //End of Repeat

  NOTE_E5, 4, 0, 8, 0, 3, NOTE_F5, 4, 0, 8, 0, 3,
  NOTE_E5, 8, NOTE_E5, 8, 0, 8, NOTE_G5, 8, 0, 8, NOTE_E5, 8, NOTE_D5, 8, 0, 8, 0, 3,
  NOTE_D5, 4, 0, 8, 0, 3, NOTE_C5, 4, 0, 8, 0, 3,
  NOTE_B4, 8, NOTE_C5, 8, 0, 8, NOTE_B4, 8, 0, 8, NOTE_A4, 4,

  NOTE_E5, 4, 0, 8, 0, 3, NOTE_F5, 4, 0, 8, 0, 3,
  NOTE_E5, 8, NOTE_E5, 8, 0, 8, NOTE_G5, 8, 0, 8, NOTE_E5, 8, NOTE_D5, 8, 0, 8, 0, 3,
  NOTE_D5, 4, 0, 8, 0, 3, NOTE_C5, 4, 0, 8, 0, 3,
  NOTE_B4, 8, NOTE_C5, 8, 0, 8, NOTE_B4, 8, 0, 8, NOTE_A4, 4
};

int silentNight[] = {
  0, 2, NOTE_D4, 4,
  NOTE_G4, 4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_C5, 2,
  NOTE_A4, 2,
  NOTE_G4, 4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_F4, 2, NOTE_GS4, 4,
  NOTE_D4, 1,
  NOTE_D4, 4,
  NOTE_G4, 4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, 4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_B4, 4,
  NOTE_G4, 1,
  NOTE_AS4, 4,
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_DS5, 2, NOTE_D5, 4,
  NOTE_CS5, 2, NOTE_A4, 4,
  NOTE_AS4, 4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_D4, 4,
  NOTE_D5, 1,
  0, 4, NOTE_AS4, 4,
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, 4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_AS4, 4,
  NOTE_G4, 1
};


// Existing songs array and their lengths
int *songs[] = {gotMelody, imperialMarch, piratesMelody, silentNight};
int songLengths[] = {
  sizeof(gotMelody) / sizeof(int),
  sizeof(imperialMarch) / sizeof(int),
  sizeof(piratesMelody) / sizeof(int),
  sizeof(silentNight) / sizeof(int) 
};
int numSongs = sizeof(songs) / sizeof(int*);


// Variables to keep track of the current song and switching state
int currentSong = 0;
volatile bool switchSong = false;


// Function to measure distance using the ultrasonic sensor
float getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  float duration = pulseIn(ECHO_PIN, HIGH);
  float distance = (duration / 2) / 29.1; // Convert to cm
  distance = constrain(distance, 1, 30);  // Constrain the value between 1 cm and 30 cm
  return distance;
}


void setup() {
  // Set pin modes and attach interrupt
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(SPEAKER_SWITCH_PIN, INPUT_PULLUP); // Set up pin 7 as input with internal pull-up resistor
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);


  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), buttonInterrupt, FALLING);

  Serial.begin(9600); // Start serial communication

}

// Function to set RGB LED color based on the current song and note
void setRGBColor(int song, int note) {
  int red, green, blue;

  if (song == 0) { // Game of Thrones
    static bool isRed = true;

    if (isRed) {
      red = 255;
      green = 0;
      blue = 0;
    } else {
      red = 0;
      green = 0;
      blue = 255;
    }

    isRed = !isRed;
  } else if (song == 1) { // Imperial March
    static int colorIndex = 0;

    switch (colorIndex) {
      case 0:
        red = 0;
        green = 0;
        blue = 255;
        break;
      case 1:
        red = 255;
        green = 0;
        blue = 0;
        break;
      case 2:
        red = 0;
        green = 255;
        blue = 0;
        break;
    }

    colorIndex = (colorIndex + 1) % 3;
  } else if (song == 2) { // Pirates of the Caribbean
    static int colorIndex = 0;

    switch (colorIndex) {
      case 0:
        red = 139;
        green = 69;
        blue = 19;
        break;
      case 1:
        red = 0;
        green = 0;
        blue = 255;
        break;
      case 2:
        red = 255;
        green = 255;
        blue = 0;
        break;
    }

    colorIndex = (colorIndex + 1) % 3;
  } else if (song == 3) { // Harry Potter
    static int colorIndex = 0;

    switch (colorIndex) {
      case 0:
        red = 255;
        green = 165;
        blue = 0;
        break;
      case 1:
        red = 255;
        green = 255;
        blue = 0;
        break;
      case 2:
        red = 0;
        green = 255;
        blue = 0;
        break;
      case 3:
        red = 255;
        green = 0;
        blue = 255;
        break;
    }

    colorIndex = (colorIndex + 1) % 4;
  }

  analogWrite(RED_PIN, red);
  analogWrite(GREEN_PIN, green);
  analogWrite(BLUE_PIN, blue);
}
void loop() {
  // Play the current song
  playSong(songs[currentSong], songLengths[currentSong]);

  // Check if the song should be switched
  if (switchSong) {
    currentSong = (currentSong + 1) % numSongs; // Switch to the next song
    switchSong = false;
    digitalWrite(LED_PIN, HIGH); // Turn on the LED to indicate song switch
    delay(500);
    digitalWrite(LED_PIN, LOW); // Turn off the LED after a delay
    Serial.println("Switched song!");
  }
}

// Function to play a song
void playSong(int *melody, int melodyLength) {
  // Check if the speaker is turned off
    if (digitalRead(SPEAKER_SWITCH_PIN) == LOW) {
        Serial.println("Speaker is turned off.");
        return; // Exit the function if the speaker is turned off
    }

    // Iterate through each note in the melody
    for (int noteIndex = 0; noteIndex < melodyLength; noteIndex += 2) {
        float distance = getDistance();  // Update distance with each note

        // Adjust speedFactor based on the song and distance
        float speedFactor;
        if (currentSong == 1) { 
            // Slower scaling for Imperial March
            speedFactor = 1.1 + (distance / 30.0); //  slows down the max speed
        } else if (currentSong==2){
            speedFactor = 0.6 + (distance / 30.0);
        } else if (currentSong==3) { 
            speedFactor = 0.4 + (distance / 30.0);
        } else {
            speedFactor = 1.2 + distance / 30.0;
        }

         // Calculate the note duration based on the speed factor
        int noteDuration = (int)(1000 / melody[noteIndex + 1] * speedFactor);

        // Check if the song should be switched or the speaker is turned off
        if (switchSong || digitalRead(SPEAKER_SWITCH_PIN) == LOW) {
            noTone(SPEAKER_PIN); // Stop tone when switching off
            break;
        }

         // Play the note
        tone(SPEAKER_PIN, melody[noteIndex], noteDuration);
        setRGBColor(currentSong, melody[noteIndex]);
        delay(noteDuration * 1.30);
        noTone(SPEAKER_PIN);

        Serial.print(songNames[currentSong]);
        Serial.print(": Playing note: ");
        Serial.print(melody[noteIndex]);
        Serial.print(" at duration: ");
        Serial.println(noteDuration);  
        Serial.print("Distance: ");
        Serial.print(distance);
        Serial.println(" cm");
    }
}

// Interrupt service routine for the button press
void buttonInterrupt() {
  switchSong = true;
  Serial.println("Button pressed - switching song...");
}
