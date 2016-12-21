int ledPin = 8;


void setup() {                       // declaro un bloc de codi
 
  pinMode(ledPin, OUTPUT);              // Posa el pin8 com sortida

}                                //Finalitza el bloc de codi

void loop() {                  // Declaro un bloc de codi
 
  digitalWrite(ledPin, HIGH);     // Posa pin 8 a nivell alt
  delay(1000);              // Pusa 1 segon
  digitalWrite(ledPin, LOW);    // Posa pin 8 en nivell baix
  delay(1000);            // Pausa 1 segon

}                       //Finalitza el bloc de codi

