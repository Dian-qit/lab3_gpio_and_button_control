
const int buttonPin = 9;   
const int ledPin1 = 2;     
const int ledPin2 = 4;     

void setup() {
  Serial.begin(9600);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  
  Serial.println("--- Button and Dual LED Lab Initialized ---");
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin1, HIGH); 
    digitalWrite(ledPin2, LOW);  
    Serial.println("Button Pressed -> LED1: ON, LED2: OFF");
  } else {
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, HIGH); 
    Serial.println("Button Released -> LED1: OFF, LED2: ON");
  }

  delay(100);
}