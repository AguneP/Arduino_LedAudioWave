
#define ampliPin A0       //amarelo
#define freqPin A1       //laranja
#define redLed 10        //vermelho ~PMW
#define greenLed 11      //verde ~PMW

int ampliVal;
int freqVal;
int ampliMap;
int freqMap;
int freqValMed;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(ampliPin,INPUT);
  pinMode(freqPin,INPUT);
  
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
}

void loop() {
  i = 0;
  ampliVal = analogRead(ampliPin);
  freqVal = analogRead(freqPin);
//  for(int i = 0; i < 4; i += 1) {
//   freqVal = analogRead(freqPin);
//   freqValMed += freqVal;
//  }
//  freqValMed = freqValMed/4;
  
  freqMap = map(freqVal, 0, 500, 0, 255);
  ampliMap = map(ampliVal, 0, 120, 0, 255);

  analogWrite(greenLed,ampliMap);
  analogWrite(redLed,freqMap);
  
  
  Serial.print("Amplitude: ");
  Serial.println(ampliVal);

  Serial.print("Frequência: ");
  Serial.println(freqVal);
  
}
