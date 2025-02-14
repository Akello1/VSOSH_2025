const int lineTr1 = A11;
const int lineTr2 = A12;
int lTrState1 = 0;
int lTrState2 = 0;

void setup() {
    pinMode(lineTr1, INPUT);
    pinMode(lineTr2, INPUT);
    Serial.begin(9600);
}

void loop() {
    lTrState1 = digitalRead(lineTr1);
    lTrState2 = digitalRead(lineTr2);
    if (lTrState1 == HIGH)
    {
        Sreial.println("White 1")
    }
    else
        Serial.println("Black 1")
        if (lTrState2 == HIGH)
        {
            Sreial.println("White 2")
        }
        else
            Serial.println("Black 1")
}
