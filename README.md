# actividad5micros

En esta actividad se solicitaba complementar el código del brazo urdf proporcionado en el github del profesor.
En este caso se necesitaba controlar el brazo por medio de un joystick y una esp32 
La ESP32 lee los movimientos del joystick y envía los datos por comunicación serial UART al computador. Luego, un programa en Python recibe estos datos y controla el robot en PyBullet.

Eje X: controla la articulación joint_1.
Eje Y: controla la articulación joint_2.
Botón del joystick: abre y cierra la pinza.
La comunicación se realiza en tiempo real mediante el puerto serial.

A continuación se adjunta un video donde se evidencia el funcionamiento del montaje y además se adjunta el codigo implementado en la esp.
https://drive.google.com/file/d/15vGvZGUvjRkzPMCLb5Q42huEnL8f1OXQ/view?usp=sharing
