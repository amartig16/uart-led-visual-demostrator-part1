// VISUAL UART TRANSMITTER
// Sends "Hello World" in a slow, visual UART protocol

const int ledPin = 8; //constant integer named: ledPin 8 (your digital pin 8 in your Arduino)
const int baudRate = 5; //lower number slower the LED speed becomes. Do not go below 2.
const int bitDuration = 1000 / baudRate; // Calculate how long each bit lasts

void setup() {
  pinMode(ledPin, OUTPUT);   // Set the LED pin as an output
  digitalWrite(ledPin, LOW); // Start with LED off
}

void loop() {
  char message[] = "Hello World\n"; // Message to send. ASCII values are set.
  sendString(message);              // Send message
  delay(4000);                      // Wait 4 seconds before repeating
}

// Function to send a single character

void sendChar(char data) {

  // Send first bit: OFF state
  digitalWrite(ledPin, LOW);
  delay(bitDuration);

  // Send 8 DATA BITS (LSB first)
  for (int i = 0; i < 8; i++) {

    //Shift the binary representation of the ASCII letter i positions to the right, then check if the rightmost bit is a 1
    bool bitState = (data >> i) & 0x01;

    // If rightmost bit is set, turn LED ON, else OFF
    digitalWrite(ledPin, bitState ? HIGH : LOW);
    delay(bitDuration);
  }

  // Send Stop bit (last bit) ON state
  digitalWrite(ledPin, HIGH);
  delay(bitDuration);
}

// This function sends a message, one character at a time.
void sendString(char* str) {
  int i = 0;               // i starts at value zero
  while (str[i] != '\0') { // while string i is not /0 
    sendChar(str[i]);      // Send the character at position i
    i++;                   // Continue to next character (i.e., 'H' then 'E'...)
  }
}

