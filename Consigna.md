# TP
La municipalidad de Maranello nos ha encargado el desarrollo de un sistema para el traslado vehicular de su población. Se trata de un sistema que deberá decirnos el mejor trayecto de un punto a otro en algún vehículo con la particularidad de que se desea estacionar en el destino. Es decir, una combinación de los trayectos que brinda _Google Maps_ para moverse, pero prestando atención que se debe estacionar en destino. Por ejemplo, quizás el trayecto directo de un punto a otro no sea el mejor porque es más difícil estacionar en la cuadra destino, por lo que un camino alternativo que te deja a 3 cuadras pero en una cuadra con más estacionamientos disponibles es una mejor opción. <br>
Para ir de un lugar a otro se puede interactuar con la API de _Google Maps_, quien devolverá el mejor trayecto de un lugar a otro (a veces puede incluir varias opciones). Para saber dónde es mejor estacionar se contará también con la interacción de otras APIs ya provistas por la Municipalidad. Por un lado, dada una ubicación nos provee de Estacionamientos privados y municipales cerca. Por otro, se cuenta con un sistema de parquímetros. El mismo sabe, para cada cuadra o ubicación, la cantidad de lugares disponibles para estacionar en todo momento. Nuestro sistema, interactuando con estos 3 servicios externos deberá proveernos un camino para ir de un punto A a un punto B, teniendo en cuenta que se debe estacionar en destino. <br> <br>

Se deberá diseñar y codificar el funcionamiento del sistema. __Lo fundamental es ver qué objetos encuentran, qué responsabilidades y comportamientos tienen, y como interactúan entre ellos. La parte algorítmica o interacción con APIs y sistemas externos puede estar completamente simulada. Por ejemplo, un objeto que pida un recorrido a Google Maps. No es necesario interactuar realmente con la API. Alcanza con que haya métodos y objetos a cargo de esa responsabilidad, aunque simplemente luego en su ejecución muestren textos por pantalla. ENCONTRAR OBJETOS Y MODELAS SUS INTERACCIONES es lo desafiante, luego la ejecución simple se puede cambiar por una más tecnológica en otro momento. TENIENDO UN BUEN DISEÑO todo es más fácil.__


# Entregas
## Entrega inicial
__Jueves 7 de Octubre a las 23:59__
- Mostrar 3 diagramas de secuencia y diagrama de clases inicial.

## Entrega parcial
__Jueves 4 de Noviembre a las 23:59__
- Entregar el diagrama de clases y al menos 3 diagramas de secuencia, profundizando lo realizado en la entrega inicial.
## Entrega final
__Jueves 18 de Noviembre a las 23:59__
- Se debe entregar el diagrama de clases completo, 5 diagramas de secuencia junto a un texto en lenguaje natural que describa el comportamiento a modelar, el código completo del sistema, y los casos de test desarrollados.

<br>
La entrega es grupal. Cada integrante del grupo lo sube de manera individual la misma solución de todo el grupo.