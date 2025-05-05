int REDLED = 13;
int BLUELED = 12;
int GRELED = 11;
int YELLED = 10;
int BTN = 9;

int val = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(REDLED, OUTPUT);
  pinMode(BLUELED, OUTPUT);
  pinMode(GRELED, OUTPUT);
  pinMode(YELLED, OUTPUT);
  pinMode(BTN, INPUT);
}

void loop()
{
  Serial.println(val);
  delay(200);
  digitalWrite(val, 0);
  if (digitalRead(BTN) == 0){
  	Serial.println("is");
    val = val + 1;
  } else{
  	Serial.println("not");
    val = val - 1;
  }
  if(val > 13){
  	val = 10;
  } else if(val < 10){
  	val = 13;
  }
  digitalWrite(val, HIGH);
}