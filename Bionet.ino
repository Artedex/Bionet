const int soilPin = A0; 
const int ledD2 = 2;    
const int ledD3 = 3;    

int esikDegeri = 400;

void setup() {
  pinMode(ledD2, OUTPUT);
  pinMode(ledD3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int nemDegeri = analogRead(soilPin);
  Serial.print("Soil Sensor Degeri: ");
  Serial.println(nemDegeri);


  if (nemDegeri > esikDegeri) {

    digitalWrite(ledD3, HIGH);
    digitalWrite(ledD2, LOW);
  } else {

    digitalWrite(ledD2, HIGH);
    digitalWrite(ledD3, LOW);
  }

  delay(200);
}