const int greenPin =  18;  
const int redPin   =  19; 
const int bluePin  =  23; 
         
void setup() {
  pinMode(redPin,   OUTPUT);  
  pinMode(greenPin, OUTPUT); 
  pinMode(bluePin,  OUTPUT); 
}

void loop() { 
    // Red
    digitalWrite(redPin, HIGH); 
    digitalWrite(greenPin, LOW); 
    digitalWrite(bluePin, LOW);
    delay(1000);
    
    // Green
    digitalWrite(redPin, LOW); 
    digitalWrite(greenPin, HIGH); 
    digitalWrite(bluePin, LOW);
    delay(1000);
     
    //Blue
    digitalWrite(redPin, LOW); 
    digitalWrite(greenPin, LOW); 
    digitalWrite(bluePin, HIGH);
    delay(1000);

    digitalWrite(redPin, LOW); 
    digitalWrite(greenPin, LOW); 
    digitalWrite(bluePin, LOW);
    delay(1000);
}                                                         
