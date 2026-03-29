#include <Arduino.h>

const int inputPin = A0;
int counts = 0;
bool signalstate = 0;
long startTime = 0;
long endTime = 0;
// Déclaration anticipée
void ISR_impulse();

void setup() {
    pinMode(inputPin, INPUT);
    attachInterrupt(digitalPinToInterrupt(inputPin), ISR_impulse, FALLING);
    //attachInterrupt(digitalPinToInterrupt(inputPin), ISR_impulse2, RISING);
    Serial.begin(115200);
    Serial.println("Irq installed");
}

void loop() {
}

// Définition de la fonction d'interruption
void ISR_impulse() {
    if (signalstate==0){
        startTime = micros();
        counts++;
        signalstate=1;
        Serial.print("impulsion ");
        Serial.println(counts);
        attachInterrupt(digitalPinToInterrupt(inputPin), ISR_impulse, RISING); 
    }
    else{
        endTime = micros();
        signalstate=0;
        long duration = endTime - startTime;
        long CPM = (60000 * 1) / (duration*1000) ;\\microsecondes en milisecondes
        long MSH = CPM/151;\\Micro Sievert per hour
        Serial.println("durée impulsion: ");
        Serial.print(duration);
        Serial.println("valer en micro Sievert par heur: ");
        Serial.print(MSH);
        Serial.println(" microsecondes");
        attachInterrupt(digitalPinToInterrupt(inputPin), ISR_impulse, FALLING); 
    }

}

