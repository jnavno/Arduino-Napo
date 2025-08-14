// Librerías necesarias para usar el sensor DHT
#include <DHT.h>
#include <Arduino.h>

// Definir el pin donde está conectado el sensor
#define DHTPIN 4  // Pin digital 4

// Definir el tipo de sensor:
// Si estás usando un DHT11, cambia DHT22 por DHT11 aquí
#define DHTTYPE DHT11

// Crear el objeto del sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Iniciar la comunicación serial para ver los datos en la pantalla
  Serial.begin(9600);

  // Iniciar el sensor DHT
  dht.begin();
}

void loop() {
  // Esperar 2 segundos entre lecturas
  delay(2000);

  // Leer temperatura en grados Celsius
  float temperatura = dht.readTemperature();

  // Leer humedad en porcentaje
  float humedad = dht.readHumidity();

  // Verificar si la lectura falló
  if (isnan(temperatura) || isnan(humedad)) {
    Serial.println("¡Error al leer el sensor!");
    return; // Salir de la función loop para intentar de nuevo después
  }

  // Mostrar los datos en la pantalla serial
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.println(" %");
}
