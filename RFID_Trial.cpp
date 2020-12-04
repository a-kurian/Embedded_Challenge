#include <SoftwareSerial.h>
SoftwareSerial RFID1(6, 3); // RX and TX # 6 -> 17 if in mega

int i;

void setup()
{
    RFID1.begin(9600);  // start serial to RFID reader
    Serial.begin(9600); // start serial to PC
    pinMode(13, OUTPUT);
}

void loop()
{
    if (RFID1.available() > 0)
    {
        On_Warning();
        
        if (ON == 1)
        {
            digitalWrite(signal1[1], HIGH);
            delay(5000);
        }

        else
        {
            On_1();
        }
    }
}

void On_Warning()
{
    for (i = 1; i < 14; i += 4)
    {
        digitalWrite(i, HIGH)
    }
}

/*
for (i = 1; i < 5; i++)
        {
            if (ON == 1)
                On_1();

            else if (ON == 2)
                On_2();

            else if (ON == 3)
                On_3();

            else if (ON == 4)
                On_4();
        }

*/