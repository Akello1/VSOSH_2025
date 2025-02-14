# include <Vex5.h> //Motor

Vex5_Motor motor_right;//Motor R
Vex5_Motor motor_left;//Motor L

const int lineTr1 = A11; //Line Pin
const int lineTr2 = A12; //Line Pin

const int DistSend = 33; //UZ Sensor Pin
const int DistGet = 34; //UZ Sensor Pin

int lTrState1 = 0; //Line State
int lTrState2 = 0; //Line State

unsigned int DistTime = 0; //Line State
unsigned int Distance = 0; //Line State

int leftSpeed = 200; //Motor R speed
int rightSpeed = -200; //Motor L speed
float kp = 4.5; //Motor

void setup() {
    pinMode(lineTr1, INPUT); //Line
    pinMode(lineTr2, INPUT); //Line

    pinMode(DistSend, OUTPUT); //UZ Sensor
    pinMode(DistGet, OUTPUT); //UZ Sensor

    Vex5.begin(); //Motor
    motor.begin(VEX5_PORT_1) //Motor

    Serial.begin(9600);
}

void loop() {
    lTrState1 = digitalRead(lineTr1); //Line
    lTrState2 = digitalRead(lineTr2); //Line
    if (lTrState1 == HIGH) //Line
    {
        Sreial.println("White 1") //Line
    }  //Line
    else
    {
        Serial.println("Black 1") //Line
    } //Line
    if (lTrState2 == HIGH) //Line
    {
        Sreial.println("White 2") //Line
    } //Line
    else
    {
        Serial.println("Black 2") //Line
    } //Line

    digitalWrite(DistSend, 1); //UZ Sensor Send
    delayMicroseconds(10);//UZ Sensor Send
    digitalWrite(DistSend, LOW);//UZ Sensor Send
    DistTime = pulseln(DistGet, HIGH); //UZ Sensor Time
    Distance = DistTime / 58; //UZ Sensor Len
    Serial.println($"Distance {Distance}");

    delay(100);
           
}
