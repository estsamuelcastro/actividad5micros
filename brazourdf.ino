
const int JOY_X = 34;
const int JOY_Y = 35;
const int JOY_SW = 27;

const int CENTRO = 2048;

const int DEADZONE = 180;

bool botonAnterior = HIGH;

unsigned long ultimoBoton = 0;
const unsigned long DEBOUNCE = 250;



void setup() {

  Serial.begin(115200);

  analogReadResolution(12);

  pinMode(JOY_SW, INPUT_PULLUP);

  delay(1000);

  Serial.println("ESP32_BRAZO_READY");
}



void loop() {

  int x = analogRead(JOY_X);
  int y = analogRead(JOY_Y);

  bool boton = digitalRead(JOY_SW);


  if (abs(x - CENTRO) < DEADZONE) {
    x = CENTRO;
  }

  if (abs(y - CENTRO) < DEADZONE) {
    y = CENTRO;
  }



  int buttonEvent = 0;

  if (boton == LOW && botonAnterior == HIGH) {

    if (millis() - ultimoBoton > DEBOUNCE) {

      buttonEvent = 1;

      ultimoBoton = millis();
    }
  }

  botonAnterior = boton;




  Serial.print("X=");
  Serial.print(x);

  Serial.print(",Y=");
  Serial.print(y);

  Serial.print(",B=");
  Serial.println(buttonEvent);


  delay(20);
}