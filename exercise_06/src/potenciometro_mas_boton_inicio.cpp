#include <Servo.h> // Incluye la librería Servo
#include <Arduino.h>
#include <Servo.h>


Servo myServo; // Crea un objeto Servo
const int potPin = A0; // Potenciómetro conectado al pin analógico A0
const int buttonPin = 2; // Botón conectado al pin digital 2

void setup() {
  myServo.attach(8); // Conecta el servo al pin digital 8
  pinMode(buttonPin, INPUT_PULLUP); // Establece el pin del botón como entrada con pull-up interno
  Serial.begin(9600); // Inicia la comunicación serial
  Serial.println("¡Ejercicio de Potenciómetro y Botón de Inicio Iniciado!");
  myServo.write(90); // Inicia el servo en la posición central
}

void loop() {
  // Verifica si el botón está presionado (LOW debido a INPUT_PULLUP)
  if (digitalRead(buttonPin) == LOW) {
    delay(50); // Debounce simple
    if (digitalRead(buttonPin) == LOW) {
      myServo.write(90); // Mueve el servo a la posición de inicio (90 grados)
      Serial.println("Botón presionado: Servo a Inicio (90 grados)");
      // Añade un pequeño retardo después de moverse a inicio para evitar re-activaciones rápidas si se mantiene el botón
      delay(200);
    }
  } else {
    // Si el botón no está presionado, controla con el potenciómetro
    int potValue = analogRead(potPin); // Lee el valor del potenciómetro (0-1023)
    // Mapea el valor del potenciómetro al ángulo del servo (0-180 grados)
    int servoAngle = map(potValue, 0, 1023, 0, 180);
    myServo.write(servoAngle); // Mueve el servo al ángulo mapeado
    // Opcional: Imprime el ángulo actual en el Monitor Serial para depuración
    // Serial.print("Control por potenciómetro: ");
    // Serial.print(servoAngle);
    // Serial.println(" grados");
    delay(10); // Pequeño retardo para lecturas estables y movimiento más suave
  }
}