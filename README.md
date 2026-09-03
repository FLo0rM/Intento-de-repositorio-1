Explicación sobre: Ingreso al sistema con usuario y clave
Para esta consigna se utilizaron como nombre y contraseña, grupo4 y utnfrh respectivamente como se pidió en el enunciado. En el caso de introducir algún dato erróneo se mostrara por pantalla los mensajes de error tanto para el usuario como la contraseña. Decidimos colocar una imagen en el login que representa a un usuario anónimo y seleccionamos un color de fondo para el login celeste porque lo encontramos lo más asociado a una guardia clínica.
En la lógica de esta consigna, se guardaron la contraseña y usuario en variables del tipo QString. Luego se implemento una estructura de decisión en donde primero verifica la existencia del usuario, si este contiene un usuario correcto lo valida con la contraseña asociada a este mismo.
                 
Explicación sobre: Carga y admisión de nuevo paciente
Esta parte del problema fue desarrollada implementado una "cola" en la cual le cargamos cada uno de los elementos que se ingresaron en el formulario que se diseño a través de los widgets que nos ofrece el software "Qt". Se decidió realizar la carga de datos en una nueva pestaña para que haya una menor contaminación visual a la hora de completar esta tarea. Los widgets utilizados en esta nueva pestaña son: QlineEdit, Qlabel, QcomboBox, QpushButton, Qlist.
Con respecto a la lógica, primeramente presionaremos el botón "Añadir" para ingresar al paciente. El mismo nos llevara a una nueva pestaña que se ve según "ingresopacientes.ui", guardamos todos los campos en sus variables correspondientes y, luego, verificamos que los mismos hayan sido cargados para que le permita al usuario seguir después de haber presionado el botón aceptar. Para verificar los mismos utilizamos una estructura de decisión en donde revisamos que todos hayan sido completados para que nos permita continuar.
Cuando toques el botón añadir se agrega la lista con los géneros a la comboBox del formulario, después, limpia la lista para que no aparezcan los datos del paciente anterior. Por último, cuando llenas todos los campos y tocas el botón "aceptar" se agregaran a la "listMovimientos_1" todos los pacientes con su nombre, dni y edad que se encuentren en la "cola". 

Explicación sobre: Mostrar la lista de pacientes sin atender ordenados por llegada
Al presionar botón "Siguiente", se muestra en la "listMovimientos_1" el primer paciente en llegar con su nombre y dni.
Para la resolución de este problema se decidió mostrar en la lista el primer elemento de la cola "pacientes" en donde cargamos cada uno de los pacientes en orden de llegada cuando se ingresaron. Luego de mostrar el próximo paciente a atender, se seguiría viendo la lista en espera con los elementos cargados, incluyendo al que debe ser atendido después.

Explicación sobre: Mostrar próxima a ser atendido
El problema fue resuelto implementado un botón denominado "Atender" que, al presionarlo, despliega en la "listMovimientos_1" el paciente a atender según orden de llegada.
Para su codificación, primero verificamos si la "cola" posee algún elemento. En caso de que contenga alguno, este se guardara en una variable del tipo "QString" que luego será mostrado con el nombres y dni de cada uno de los pacientes en la "listMovimientos_1". Además, también se podrá observar a los pacientes de la lista de espera, excluyendo al paciente que ya se encuentra en consulta.
Si la "cola" no contiene ningún paciente, se mostrara un mensaje en la "listMovimientos_1" indicando de que la misma no posee ninguno.

Explicación sobre: Mostrar la lista de pacientes que ya fueron atendidos en orden de atención
Para la resolución del problema se colocó botón con el nombre de "Atendidos" que cuando presionamos en él, aparecerán en la "listMovimientos_2" todos los pacientes que ya fueron atendidos con su nombre, dni y género.

Herramientas utilizadas
En nuestro trabajo utilizamos QtCreator, GitHub, Draw.io y como lenguaje se utilizo C++ en en Qt.
