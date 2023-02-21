n##m#
/*
 This code is to test the valves on an oxygen concentrator
*/

int LeftBed = 4;
int RightBed = 5;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LeftBed, OUTPUT);
  pinMode(RightBed, OUTPUT);
  digitalWrite(RightBed, LOW);
  digitalWrite(LeftBed, LOW);
  delay(15000);

}

// the loop repeats every 8 seconds
void loop() {
  digitalWrite(RightBed, LOW);
  digitalWrite(LeftBed, HIGH);
  delay(4000);
  digitalWrite(LeftBed, LOW);
  digitalWrite(RightBed, HIGH);
  delay(4000);
}
