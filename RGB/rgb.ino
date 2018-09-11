#include <IRremote.h>
 
#define first_key  48703 
#define second_key  58359 
#define third_key  539 
#define fourth_key  25979 
int receiver_pin = 4;   

IRrecv receiver(receiver_pin); 
decode_results output;

int ON = 49215;
int OFF = 33405;

int LED_PIN = 2;

void setup() {
  Serial.begin(9600);

  receiver.enableIRIn();
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (receiver.decode(&output)) {
    unsigned int value = output.value;

    if (value == ON) {
      digitalWrite(LED_PIN, HIGH);
    } else if (value == OFF) {
      digitalWrite(LED_PIN, LOW);
    }

    Serial.println(value); 
    receiver.resume(); 
  }
}
