int analog;
int digital;

void setup() {
  // put your setup code here, to run once:
  //pinMode (A0, INPUT);
  pinMode (8, INPUT);
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  digital = digitalRead (8);
  //analog = analogRead (A0);

  Serial.println (digital);
 
  
  //Serial.println ("analog");
  //Serial.println (analog);
  

}
