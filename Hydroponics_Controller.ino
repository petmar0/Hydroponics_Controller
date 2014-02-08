int flowSensor = 2;  // Pin assignment for the flow sensor.
int levelSensor = A3;  // Pin assignment for the level sensor.
int lightSensor = A4;  // Pin assignment for the light sensor.
int tempSensor = A5;  // Pin assignment for the temperature sensor.
int pHSensor = A6;  // Pin assignment for the pH sensor.
volatile int flowPulser;  // A variable to measure the pulses from the flow sensor.
int flow;  // A variable for the flow sensor.
int level;  // A variable for the fluid level sensor.
int light;  // A variable for the light sensor.
int temp;  // A variable for the temperature sensor.
int pH;  // A variable for the pH sensor.
int Ipump;  // A variable for the pump current draw.
bool pump;  // Boolean for turning the pump on or off.
bool growLight;  // Boolean for turning the light on or off.
bool heater;  // Boolean for turning the heater on or off.

void pulse() {
  flowPulser++;
}

void setup() {
  // put your setup code here, to run once:
  pinMode(flowSensor, INPUT);
  attachInterrupt(0, pulse, RISING);

}

void loop() {
  // put your main code here, to run repeatedly:

}
