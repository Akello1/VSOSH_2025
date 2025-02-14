const int lineTr1 = A11; //Line Pin
const int lineTr2 = A12; //Line Pin
int lTrState1 = 0; //Line State
int lTrState2 = 0; //Line State

void setup() {
    pinMode(lineTr1, INPUT); //Line
    pinMode(lineTr2, INPUT); //Line
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


    delay(50);
           
}
