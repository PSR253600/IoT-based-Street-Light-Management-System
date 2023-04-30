# IoT based Street Light Management System
A power saving mechanism to include with the street lights.

**Requirements:**
1. Arduino UNO board and USB port
2. Arduino IDE
3. LDR sensor
4. pIR sensor
5. LED
6. Connecting wires
7. 330 Ohm resistor
8. 10k Ohm resistor

**Summary:**

If pIR sensor detects any motion within its range, LED turns on whereas LED remains off during the rest situations. LED glows with the brightness that is determined in accordance with the PWM (Pulse Width Modulation) values computed from the LDR values. LDR values depend on the amount of light incident on LDR sensor. As the intensity of light incident on the LDR sensor increases, resistance decreases and current decreases and vice-versa. PWM values for an LED range from 0 to 255 which are mappings of LDR values that range from 0 to 1024. Mapping is done in such a way ensuring high brightness during low sunlight and low brightness during high sunlight.

It consumes less power since the light will only gets turned on when anyone passes by the street light and also its brightness is set according to that weather conditions. Hence, it can be considered as power-efficient and energy saver.

Go through the video for detailed explanation of the project.