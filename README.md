# Lista de Materiales para el Curso de Arduino

Esta es una lista de materiales esenciales diseñada para principiantes con un presupuesto limitado, cubriendo las etapas de un curso de 7 sesiones que incluyen lectura de sensores, control de servomotores, LEDs y pantallas, y electrónica básica.

## Lista de Materiales Esenciales (por estudiante):

* **Placa de Desarrollo Arduino Nano R3 (clon u original):** 1 unidad
* **Cables Jumper Dupond:** 1 paquete variado (aprox. 120 unidades)
* **Protoboards (400 o 830 puntos):** 1-2 unidades
* **Resistencias (Kit Surtido):** 1 kit pequeño
* **Potenciómetro (10k Ohm):** 1 unidad
* **Fotorresistencia (LDR):** 1 unidad
* **Sensor de Temperatura LM35:** 1 unidad
* **Servomotor SG90:** 1 unidad
* **LEDs (varios colores):** 5-10 unidades
* **Zumbador (Buzzer) Activo:** 1 unidad
* **Pantalla LCD 16x2 con Módulo I2C:** 1 unidad
* **Módulo de Relé de 1 Canal (5V):** 1 unidad

---

# Proyecto Arduino-Napo

Este repositorio contiene una colecciÃ³n de ejercicios prÃ¡cticos para aprender Arduino utilizando PlatformIO. Cada ejercicio estÃ¡ ubicado en su propia carpeta (`exercise_01`, `exercise_02`, ..., `exercise_13`) y contiene un Ãºnico archivo `.cpp` dentro de `src/`, mÃ¡s cualquier recurso adicional necesario para su funcionamiento.

## Requisitos previos

- Visual Studio Code
- ExtensiÃ³n de PlatformIO instalada en VS Code
- Placa Arduino Nano (ATmega328P)

---

## CÃ³mo utilizar este proyecto

### 1. Conectar el mÃ³dulo

Conecta tu placa Arduino Nano al ordenador usando un cable USB.

### 2. Seleccionar el entorno correcto

En la parte inferior izquierda de VS Code, haz clic en el botÃ³n que muestra el entorno PlatformIO (por ejemplo, `env:exercise_03`) y selecciona el ejercicio que deseas compilar y subir.

### 3. Compilar y subir el cÃ³digo

Una vez seleccionado el entorno:

- Abre la paleta de comandos (`Ctrl+Shift+P` o `Cmd+Shift+P`) y escribe `PlatformIO: Build` para compilar el cÃ³digo.
- Luego ejecuta `PlatformIO: Upload` para subirlo a tu placa Arduino.
- TambiÃ©n puedes usar los Ã­conos de check y flecha hacia la derecha en la barra de PlatformIO para compilar y subir respectivamente.

### 4. Monitorizar la salida serial

Si el ejercicio lo requiere, abre el monitor serial con `PlatformIO: Monitor` o haciendo clic en el icono de enchufe. Revisa en `platformio.ini` la velocidad del monitor (`monitor_speed`) para asegurarte de que coincide con el cÃ³digo del ejercicio (por ejemplo, 9600 o 115200).

---

## Estructura del repositorio

```text
Arduino-Napo/
â”‚
â”œâ”€â”€ exercise_01/
â”‚   â””â”€â”€ src/
â”‚       â””â”€â”€ ejercicio.cpp
â”‚
â”œâ”€â”€ exercise_02/
â”‚   â””â”€â”€ src/
â”‚       â””â”€â”€ ejercicio.cpp
â”‚
â”œâ”€â”€ ...
â”‚
â””â”€â”€ platformio.ini  <-- configuraciÃ³n de PlatformIO para todos los ejercicios
```

Cada entorno `env:exercise_NN` en `platformio.ini` apunta directamente a su carpeta correspondiente y compila Ãºnicamente ese ejercicio.

---

## InstalaciÃ³n de librerÃ­as

Las dependencias como `DHT sensor library` o `Servo` ya estÃ¡n especificadas por entorno en `platformio.ini`. PlatformIO se encargarÃ¡ automÃ¡ticamente de descargarlas al compilar.

---

## Notas adicionales

- Evita mover archivos manualmente entre carpetas para no romper las rutas del proyecto.
- Puedes modificar cualquier ejercicio de manera independiente sin afectar los demÃ¡s.
- Recomendamos usar solo un archivo `.cpp` por carpeta para mantener la estructura limpia y coherente.

Â¡Feliz aprendizaje con Arduino y PlatformIO!