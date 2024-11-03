int pushButton = 2; // Pin for the push button
void setup() {
    // Initialize the push button pin
    pinMode(pushButton, INPUT); // No internal pull-up
    
    // Set RGB LED pins as outputs
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    
    // Set initial color to white
    analogWrite(9, 255);
    analogWrite(10, 255);
    analogWrite(11, 255);
}
void loop() {
    // Read the input pin
    int buttonState = digitalRead(pushButton);
    
    // Check button state
    if (buttonState == HIGH) {
        // Button pressed: Turn RGB off
        analogWrite(9, 0);
        analogWrite(10, 0);
        analogWrite(11, 0);
    } else {
        // Button not pressed: Set RGB to white
        analogWrite(9, 255);
        analogWrite(10, 255);
        analogWrite(11, 255);
    }
    
    delay(50);  // Small delay for stability
}
