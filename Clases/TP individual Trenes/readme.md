# Enunciado
Tenemos que constituir la plataforma para atender los requerimientos acerca de los viajes de pasajeros y cargas de la **línea AyED**.

En principio, constituiremos disponibilidades de recursos para las demandas máximas de carga y pasajeros, diseñando las estructuras de datos para generar los soportes que permitan registrar las existencias de recursos y administrar la demanda.

## Parámetros Operativos y Demanda

* **Servicio de Cargas:**
  * **Recorrido completo entre cabeceras (sin descansos):** 4 horas.
  * **Tiempo de carga y descarga para despachar un servicio:** 3 horas.
  * **Demanda máxima diaria estimada:** 6 servicios diarios.
* **Servicio de Pasajeros:**
  * **Tiempo de recorrido entre cabeceras:** 1 hora y media (1,5 horas).
  * **Tiempo adicional por agregar o quitar vagones:** 30 minutos.
  * **Demanda máxima diaria estimada:** 1 servicio cada 15 minutos.
* **Infraestructura:**
  * Para simplificar los cálculos, asumiremos que hay **un par de vías** para cada uno de los distintos tipos de servicio.

## Consigna

Se solicita declarar las variables necesarias para satisfacer la demanda máxima de cada uno de los recursos necesarios para armar los servicios, optimizando su uso y sabiendo que:

* No hay formaciones armadas aún.
* Las formaciones se ensamblan en la cabecera de partida.

### Relevamiento
*(Se entiende por recursos: **locomotoras** y **vagones**)*

1. Cantidad y detalle de servicios de carga, y recursos para satisfacer la demanda.
2. Cantidad y detalle de servicios de pasajeros, y recursos para satisfacer la demanda.

### Bonus Tracks

* **Bonus track 1:** Indicar, si lo hay, qué requisito de demanda no se cumple en el servicio de cargas.
* **Bonus track 2:** Indicar ,si lo hay, que requisito de demanda no se cumple en el servicio de pasajeros.

* **Bonus tracks 3 (planteados en clase):** ¿Para reducir los requisitos de formaciones a la mitad qué tengo que hacer?




## Respuestas

Las estructuras las armé en trenes_Individual.cpp

* **Relevamiento:**
1. Para la demanda de 6 servicios diarios de carga se precisan 4 formaciones. Cada tren tiene un ciclo de 14 horas  (3h carga + 4h  ida + 3h descarga + 4h vuelta).

A: Inicio Carga (3h)
B: Inicio Ida (4h)
C: Inicio Descarga (3h)
D:Inicio Vuelta (4h)
E:Disponible nuevamente	
                        A       B       C                   D                   E       
Demanda1	Servicio 1	00:00	03:00	07:00	            10:00	            14:00
Demanda2	Servicio 2	03:00	06:00	10:00	            13:00	            17:00
Demanda3	Servicio 3	06:00	09:00	13:00	            16:00	            20:00
Demanda4	Servicio 4	09:00	12:00	16:00	            19:00	            23:00
Demanda5	Servicio 1	14:00	17:00	21:00	            00:00 (dia sgte)	04:00 (dia sgte)
Demanda6	Servicio 2	17:00	20:00	00:00 (dia sgte)    03:00 (dia sgte)	07:00 (dia sgte)

2. Para la demanda de servicio de pasajeros, de 1 servicio cada 15 minutos, se precisan 14 formaciones. El planteo está realizado en la captura adjunta "Servicio pasajeros.png", que lo hicimos en clase entre todos. Por una cuestión de comodidad no puse la tabla acá.

* **Bonus track 1:** Por lo calculado no veo requisitos que queden sin cumplir. En teoría si sale un tres cada 3 horas y debo satisfacer la demanda de 6 servicios, serían 18h y en un día entran. En la realidad podría fallar si por ejemplo hay una demora.

* **Bonus track 2:** No se satisface siempre la demanda cada 15 minutos por el echo de que las vías estan ocupadas 30 minutos armando la formación. Por eso en el inicio de recorrido cuando comienzan a salir los trenes es a los 30 minutos, a la hora y así.

* **Bonus track 3:** Alcanza con tener 7 formaciones. Quedan como sncronizados los servicios porque por ejemplo el Servicio 1 vuelve a los 225 minutos, descansa 15, se hace el minuto 240 en que debe salir una formación y es justamente esta.