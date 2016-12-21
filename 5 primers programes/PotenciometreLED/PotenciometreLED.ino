int sensorValue = 0;
void setup( ) {
pinMode( 3, OUTPUT) ;
}
void loop( ) {
sensorValue = analogRead( A0) ;
analogWrite( 3, sensorValue/4) ;
}
