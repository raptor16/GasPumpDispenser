#define photopin 8
volatile byte interrupt;
int total;


void setup() {
  // put your setup code here, to run once:
pinMode (photopin, INPUT);

attachInterrupt(0, interruptcount, RISING);
interrupt = 0;

Serial.begin(9600);
}

void interruptcount() {
  interrupt++;
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(1000);
  
  detachInterrupt(0);
  total += interrupt;
  interrupt =0;
  
  attachInterrupt (0, interruptcount, RISING);

  Serial.print ("total count =");
  Serial.println (total);
  
  /*
   int photovalue = digitalRead (photopin);
  Serial.print ("status:  ");
  Serial.println(photovalue);

if (photovalue > 0)
  {
    interrupt++;
  }

Serial.print ("total interrupts: ");
Serial.print (interrupt);
  */
}
