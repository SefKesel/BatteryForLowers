No llegamos a publicar esto en el paso 2, pero lo dejo aqui por su utilidad

Integrantes del grupo:
Mauricio Adan Miño 27937
Orian Maccari 30441
Lautaro Muñoz Ruiz 29839
Mariano López 24885

Tipo de proyecto: Sistema de gestión de archivos
Nombre: Battery For Lowers

Tema: Proveedora de baterias
Una proveedora de BATERIAS lleva el registro de las empresas a las que provee; los componentes que fabrica y las entregas de autopartes que realiza.

Descripción: Por cada una de las empresas registra el CUIT, el nombre y apellido del responsable de la empresa, un número de teléfono, un email y la dirección.

Para cada bateria se registra el número de bateria, el nombre, el tipo de bateria y la cantidad de unidades en stock. El número de bateria es un código numérico que identifica de forma única a cada bateria.
El tipo define a qué clase de batería pertenece (1: auto; 2: moto; 3: camion; 4: lancha). 

En cuanto a cada una de las entregas, a la empresa le interesa saber cuál es el componente que se entregó, cuál fue la empresa a la que se le entregó, cuál fue la fecha de la entrega, la cantidad de unidades, y el importe.

Archivos a utilizar: Acordes a las clases.

Clases a desarrollar:
Ventas (Fecha de la venta, precio de la venta, bateria vendida, cantidad de baterias vendidas, id de empresa)
Clientes (Id de empresa, nombre, apellido de responsable, numero de teléfono, dirección de email)
Baterías (Modelo[Auto, Moto, Camión, Lancha], voltaje, amperaje, capacidad, tamaño)
