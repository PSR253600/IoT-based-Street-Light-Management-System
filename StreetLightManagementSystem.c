//IoT based Street Light Management System
int LDR_Value = 0; //To store output from the LDR sensor
int LED_Intensity = 0; //To store the LED’s brightness
int pir_sensor = 0; //To store output from the pIR sensor

void setup()
{
  pinMode(A0, INPUT); //Analog pin A0 is connected to the LDR sensor
  pinMode(2, INPUT); //Digital pin 2 is connected to the pIR sensor
  pinMode(10, OUTPUT); //Digital pin 10 is connected to the LED
  Serial.begin(9600);
}

void loop()
{
  
  
  pir_sensor = digitalRead(2); //Obtains data from pIR sensor
  Serial.print("IR sensor = ");
  Serial.println(pir_sensor);
  if(pir_sensor == HIGH){
    	LDR_Value = analogRead(A0); //Obtains data from LDR sensor
  	Serial.print("\tLDR value = ");
  	Serial.print(LDR_Value);
    	LED_Intensity = map(LDR_Value, 0, 1023, 255, 0); //Brightness of LED with PWM range
    	Serial.print("\tLED Intensity = ");
  	Serial.println(LED_Intensity);
    	analogWrite(10, LED_Intensity); //Changing the brightness of LED
  }
  else{
    	digitalWrite(10, LOW); //LED is off
  }
  delay(500); // Delay a little bit to improve simulation performance
}
