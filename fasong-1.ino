int comchar = 0;
char buf [100];
volatile byte pos;
volatile boolean process_it;
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial2.begin(9600);
  Serial3.begin(9600);

  while (Serial1.read() >= 0) {}//clear serialbuffer
  while (Serial2.read() >= 0) {}
  while (Serial3.read() >= 0) {}
}

void loop()
{
  /*Serial.print(Serial1.read());
    /* add main program code here */
  while (Serial2.available() > 0) {
    delay(100);
    {
      comchar = Serial2.read();
      Serial.println(comchar, 0);
    }
  }
}
