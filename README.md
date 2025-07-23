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

# Cómo compilar un ejercicio desde este repositorio PlatformIO en tu computador

Este repositorio está organizado por semanas, y cada semana contiene varios ejercicios prácticos.  
Para compilar un ejercicio específico en PlatformIO, se utiliza un enlace simbólico (`src`) que apunta al ejercicio activo.

Aquí vamos a compilar, por ejemplo, el **Ejercicio 2 de la Semana 3 (servo con potenciómetro y botón de inicio)**.

---

## 🧭 Pasos para compilar un ejercicio

### 1. Abre la terminal en la raíz del proyecto

```bash
cd ~/Documents/repositorios/arduino_projects/Arduino-Napo
```
### 2. Cambia el ejercicio activo
Utiliza este comando para que PlatformIO compile el ejercicio que quieras. En este caso, apuntamos al ejercicio 2 de la semana 3:

```bash
ln -snf week_03_servo_motor/exercise_2_potenciometro_boton_inicio/src src
```

Puedes cambiar la ruta por cualquier otro ejercicio, por ejemplo:

```bash
ln -snf week_03_servo_motor/exercise_1_barrido_simple/src src
```

3. Verifica que el archivo fuente esté presente

```bash
ls src
```

Deberías ver algo como:

```bash
potenciometro_mas_boton_inicio.cpp
```