Elaborar un programa que esencialmente funcione como un registro de alumnos. El programa deberá solicitar al usuario cuántos alumnos va a registrar, y por cada alumno, deberá registrar los siguientes datos:
-Número (si es el estudiante #1, #2, #3, etc. En la lista.)
-Nombre
-Apellido
-Cédula
-Edad
-Promedio

Al ejecutarse, una vez definida la cantidad de alumnos a registrar, deberá presentar un menú con las siguientes opciones:
1.Registrar a un alumno.

2.Consultar datos específicos de un alumno (seleccionar un alumno, y luego seleccionar qué dato en particular imprimir).

2.1.En caso de imprimir el Promedio de un alumno, indicar si se gradúa con honores, o sin honores, bajo las condiciones:

Promedio de 18.000 a 18.999 = Cum Laude
Promedio de 19.000 a 19.999 = Summa Cum Laude
Promedio de 20.000 = Magna Cum Laude


3.Modificar los datos de un alumno, ofreciendo dos maneras posibles de hacerlo:

3.1.Pedir todos los datos del alumno.

3.2.Modificar un dato en especifico.






4.Imprimir un resumen de todos los datos del estudiante, tipo informe; por ejemplo:

“El estudiante [nombre] [apellido], cursante de la carrera [carrera]…” y continuar desde ahí.

5.Una vez estén registrados todos los estudiantes, imprimir:

5.1.El promedio de edad de la sección.

5.2.El promedio de promedios (índices académicos) entre los alumnos.

6.Borrar a todos los estudiantes del registro.

7.Salir del programa.

Con la finalidad de compactar el código de la función main(), las opciones de registro y modificación de datos deberán manejarse con sus respectivas funciones; es decir:
Debe haber una función que maneje el ingreso de datos, y sea invocada cada vez que se selecciona la opción 1. La función debe modificar los arreglos correspondientes a los distintos datos registrados para cada estudiante.
Debe haber una función que, al indicarle el número del estudiante, y el dato a modificar, realice el ajuste correspondiente en los arreglos globales.
Además, deberá haber una función para determinar las condiciones de menciones honoríficas, y retornar el resultado, si es: Sin mención, Cum Laude, Summa Cum Laude, o Magna Cum Laude. 
Asimismo, el promedio de edades y el promedio de índices académicos (promedios de nota personales de cada alumno) deberán ser calculados por una función aparte del main.

Programación I - C611
Docente: Ing. Oscar Studeman
Asignado: 04/11/2022
Fecha tope de entrega: 17/11/
