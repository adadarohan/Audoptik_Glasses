void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for( int i = 100 ; i < 900 ; i+= 10) {
     tone(5, i );
     delay(50);
  }
  noTone(5);
  
  for( int i = 100 ; i < 900 ; i+= 10) {
     tone(3, i );
     delay(50);
  }
  noTone(3);
}
