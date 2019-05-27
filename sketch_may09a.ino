#define freqPin A0
int freqVal;
int freqValMap;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(freqPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  freqVal = analogRead(freqPin);

  // Serial.print("Frequência: ");
  Serial.println(freqVal);
}
