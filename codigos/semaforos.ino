int VREDLED = 13;
int VGREENLED = 12;
int VYELLED = 11;
int PREDLED = 10;
int PGREENLED = 9;

int ford = 1;

void setup(){
    pinMode(VREDLED, OUTPUT);
    pinMode(VGREENLED, OUTPUT); 
    pinMode(VYELLED, OUTPUT); 
    pinMode(PREDLED, OUTPUT);
    pinMode(PGREENLED, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
  digitalWrite(VREDLED, HIGH);
  digitalWrite(PGREENLED, HIGH);
  
  delay(10000);     // ms
  
  digitalWrite(VREDLED, 0);
  digitalWrite(VGREENLED, HIGH);
  
  digitalWrite(PGREENLED, 0);
  digitalWrite(PREDLED, HIGH);

  delay(5000);      // ms
  
  digitalWrite(VGREENLED, 0);
  
  digitalWrite(VYELLED, HIGH);
  delay(2000);      // ms
  digitalWrite(VYELLED, 0);
  digitalWrite(PREDLED, 0);
}