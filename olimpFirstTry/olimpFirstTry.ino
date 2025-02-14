const int lineTr1 = A11; //Line Pin
const int lineTr2 = A12; //Line Pin

const int DistSend = 33; //UZ Sensor Pin
const int DistGet = 34; //UZ Sensor Pin

int lTrState1 = 0; //Line State
int lTrState2 = 0; //Line State

unsigned int DistTime = 0; //Line State
unsigned int Distance = 0; //Line State


void setup() {
    pinMode(lineTr1, INPUT); //Line
    pinMode(lineTr2, INPUT); //Line

    pinMode(DistSend, OUTPUT); //UZ Sensor
    pinMode(DistGet, OUTPUT); //UZ Sensor



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
