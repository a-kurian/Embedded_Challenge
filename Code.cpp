/*
    IEEE Embedded Challenge
    Traffic signal using RFID [Emergency 112]

    signalx[4] = [warning, red, yellow, greeen]

*/

int signal1[4] = { 1, 2, 3, 4};
int signal2[4] = {5, 6, 7, 8};
int signal3[4] = {9, 10, 11, 12};
int signal4[4] = {13, 14, 15, 16};


void setup()
{

    for (int i = 0; i <= 4; i++)
    {
        pinMode(signal1[i], OUTPUT);
        pinMode(signal2[i], OUTPUT);
        pinMode(signal3[i], OUTPUT);
        pinMode(signal4[i], OUTPUT);
    }
}


void loop()
{

    Signals_Working();
}


void Signals_Working()
{
    On_1();     
    On_2();
    On_3();
    On_4();
}


void On_1()
{

    digitalWrite(signal2[1], HIGH);     
    digitalWrite(signal3[1], HIGH);
    digitalWrite(signal4[1], HIGH);
    delay(1000);
    digitalWrite(signal1[2], HIGH);
    delay(2000);
    digitalWrite(signal1[2], LOW);
    digitalWrite(signal1[3], HIGH);
    delay(5000);
    digitalWrite(signal1[3], LOW);
    digitalWrite(signal1[1], HIGH);
    
}


void On_2()
{

    digitalWrite(signal1[1], HIGH);
    digitalWrite(signal3[1], HIGH);
    digitalWrite(signal4[1], HIGH);
    delay(1000);
    digitalWrite(signal2[2], HIGH);
    delay(2000);
    digitalWrite(signal2[2], LOW);
    digitalWrite(signal2[3], HIGH);
    delay(5000);
    digitalWrite(signal2[3], LOW);
    digitalWrite(signal2[1], HIGH);

}


void On_3()
{

    digitalWrite(signal1[1], HIGH);
    digitalWrite(signal2[1], HIGH);
    digitalWrite(signal4[1], HIGH);
    delay(1000);
    digitalWrite(signal3[2], HIGH);
    delay(2000);
    digitalWrite(signal3[2], LOW);
    digitalWrite(signal3[3], HIGH);
    delay(5000);
    digitalWrite(signal3[3], LOW);
    digitalWrite(signal3[1], HIGH);

}


void On_4()
{

    digitalWrite(signal1[1], HIGH);
    digitalWrite(signal2[1], HIGH);
    digitalWrite(signal3[1], HIGH);
    delay(1000);
    digitalWrite(signal4[2], HIGH);
    delay(2000);
    digitalWrite(signal4[2], LOW);
    digitalWrite(signal4[3], HIGH);
    delay(5000);
    digitalWrite(signal4[3], LOW);
    digitalWrite(signal4[1], HIGH);

}

