#include <Servo.h> // Incluye la librería Servo
#include <Arduino.h>
#include <Servo.h>


Servo myServo; // Crea un objeto Servo llamado 'myServo'

void setup() {
  myServo.attach(8); // Conecta el objeto servo al pin digital 8
  Serial.begin(9600); // Inicia la comunicación serial
  Serial.println("¡Ejercicio de Barrido del Servo Iniciado!");
}

void loop() {
  // Barrido de 0 a 180 grados
  for (int angle = 0; angle <= 180; angle += 1) { // Bucle de 0 a 180 grados, incrementando de 1 en 1
    myServo.write(angle); // Indica al servo que vaya a este ángulo
    delay(15); // Espera 15 milisegundos para que el servo se mueva (ajusta para un barrido más suave/rápido)
  }

  // Barrido de 180 a 0 grados
  for (int angle = 180; angle >= 0; angle -= 1) { // Bucle de 180 a 0 grados, decrementando de 1 en 1
    myServo.write(angle); // Indica al servo que vaya a este ángulo
    delay(15); // Espera 15 milisegundos
  }
}