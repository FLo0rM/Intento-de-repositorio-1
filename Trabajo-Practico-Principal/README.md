Explicación sobre: Ingreso al sistema con usuario y clave
                 
Explicación sobre: Carga y admisión de nuevo paciente
Esta parte del problema fue desarrollada implementado una "cola" en la cual le cargamos cada uno de los elementos que se ingresaron en el formulario que se diseño a través de los widgets que nos ofrece el software "Qt". Se decidió realizar la carga de datos en una nueva pestaña para que haya una menor contaminación visual a la hora de completar esta tarea. Los widgets utilizados en esta nueva pestaña son: QlineEdit, Qlabel, QcomboBox, QpushButton, Qlist.
Con respecto a la lógica, guardamos todos los campos en sus variables correspondientes y, luego, verificamos que todos los campos hayan sido cargados para que le permita al usuario seguir después de haber presionado el botón aceptar. Para verificar los mismos utilizamos una estructura de decisión en el código y, dentro de la misma, cargamos cada uno de los nombres en una "cola" la cual fue declarada en la pestaña principal del programa (mainWindows.h y mainWindows.cpp). Esta misma "cola", será utilizada en los otros problemas que realizamos a lo largo de todo el desarrollo.

Explicación sobre: Mostrar la lista de pacientes sin atender ordenados por llegada
Para la resolución de este problema se decidió mostrar la lista de todos los elementos de la "cola" en donde cargamos cada uno de los nombres de los pacientes cada que se ingresara uno nuevo. Es decir, cada vez que se ingrese un nuevo paciente a través del formulario, se mostrara cada uno de ellos en la Qlist de la izquierda del menú principal.
Para la lógica, creamos una copia de la "cola" la cual guarda los nombres de los pacientes y, con un ciclo while fuimos despleagando los nombres de cada uno de los paciente sobre la Qlist. 

Explicación sobre: Mostrar próxima a ser atendido
El problema fue resuelto implementado un QpushButton denominado "Siguiente" que, al presionarlo, despliega por en la Qlist de la izquierda el nombre del paciente que se encuentra en la parte de arriba de la "cola" que fue codificada. 
Para su codificación, primero vericamos si la "cola" posee algún elemento. En caso de que contenga algún elemento, este se guardara en una variable del tipo "QString" que luego su contenido será mostrado por pantalla en la Qlist. Si la "cola" no contiene ningún elemento, se mostrara un mensaje en la Qlist indicando de que la misma no posee ninguno.

Explicación sobre: Atención del paciente
Al igual que el problema anterior, primero verificamos que la "cola" contiene algún elemento. Caso afirmativo, guardaremos en una variable del tipo QString el primer elemento de la "cola" y, además, lo sacaremos de la misma guardandolo en una nueva "cola2" que conendra aquellos pacientes que ya fueron atendidos. Caso contrario, si la "cola" no posée elementos, se mostrara un mensaje en en la Qlist indicando que la misma ya no tiene ninguno.

Explicación sobre: Mostrar la lista de pacientes que ya fueron atendidos en orden de atención
Para la resolución del problema se creo una copia 


Herramientas utilizadas
En nuestro trabajo utilizamos 
