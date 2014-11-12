int motorDirPin = 7;  // Pin assignment for motor direction. Pin 4 must be clipped under the Ethernet shield in order for the µSD card to work.
int motorSpeedPin = 6;  // Pin assignment for motor speed.
int flowSensor = 2;  // Pin assignment for the flow sensor.
int levelSensor = A3;  // Pin assignment for the level sensor.
int lightSensor = A4;  // Pin assignment for the light sensor.
int tempSensor = A5;  // Pin assignment for the temperature sensor.
int pHSensor = A6;  // Pin assignment for the pH sensor.
int IpumpSense = A0;  // Pin assignment for the motor current sensing.
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
int lightThreshold=200;

void pulse() {
  flowPulser++;
}

void setup() {
  pinMode(flowSensor, INPUT);
  attachInterrupt(0, pulse, RISING);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  level=analogRead(levelSensor);
  float levelDec=map(level,0,1023,0,5);
  light=analogRead(lightSensor);
  temp=analogRead(tempSensor);
  float tempDec=map(temp,0,1023,0,500);
  pH=analogRead(pHSensor);
  float pHDec=map(pH,0,85,7,1);
  Ipump=analogRead(IpumpSense);

  if(light<lightThreshold){
    growLight=TRUE;
  }
  
}
