#include "thingProperties.h"

void setup() {
  // Iniciar el monitor serie y esperar un poco para que se abra correctamente
  Serial.begin(9600);
  delay(1500);  // Espera para que se abra el monitor serie antes de continuar

  //analogReadResolution(12); // activa esto si estás en esp32. Es para configurar la resolución del ADC a 12 bits (valores de 0 a 4095)

  pinMode(32, OUTPUT);      // Configura el pin GPIO 32 como salida para el LED
  digitalWrite(32, LOW);    // Asegura que el LED esté apagado al inicio

  // Inicializa las propiedades definidas en la nube (se genera automáticamente)
  initProperties();

  // Inicia la conexión con Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  // Nivel de detalle en los mensajes de depuración (0 = solo errores, 4 = máximo detalle)
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  // Actualiza la comunicación con la nube (necesario en cada ciclo)
  ArduinoCloud.update();

  // Leer valor analógico desde el pin 34 (cámbialo si usas otro pin analógico)
  float valorAnalogico = analogRead(34); 

  // Convertir el valor del ADC a voltaje real (escala de 0 a 3.3V con 12 bits de resolución)
  voltaje = valorAnalogico * 3.3 / 4095.0; 
}

/*
  Como la variable "led" está marcada como READ_WRITE, esta función
  se ejecuta cada vez que se cambia su valor desde el dashboard de Arduino Cloud.
*/
void onLedChange() {
  // Cambia el estado del pin GPIO 32 según el valor recibido (true o false)
  digitalWrite(32, led);
}
