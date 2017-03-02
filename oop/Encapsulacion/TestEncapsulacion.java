/*
	01/03/2017

	Encapsulación
		
		Puede:
		- Vincular los datos con el código que lo manipula
		- Mantener los datos y el código seguro de interferencias externas

	Por ejemplo, el mecanismo de direccion de un automovil, es un sistema
	complejo, que internamente tiene un monton de componentes fuertemente
	acoplados entre sí, que trabajan de forma síncrona para girar el coche
	en la dirección deseada. Incluso, controla la potencia suministrada por
	el motor del volante. Pero para nosotros, los conductores (usuarios), 
	sólo hay una interfaz disponible y el resto de la complejidad está 
	oculto. Además, la unidad de dirección en sí misma es completa e 
	independiente. No afecta el funcionamiento de ningún otro mecanismo.

	Del mismo modo, el mismo concepto de encapsulación se puede aplicar al
	código. El código encapsulado debe tener las siguientes características:
		
		- Todo el mundo sabe cómo acceder a ella
		- Se puede utilizar fácilmente, independientemente de los detalles
		  de la implementación
		- No debe haber efectos secundarios del código, para el resto de
		  la aplicación
	
	La idea de la encapsulación es mantener las clases separadas y evitar que 
	estén estrechamete unidas entre sí.

	Un ejemplo en vivo de encapsulación es la clase de java.util.Hashtable.
	El usuario sólo sabe que puede almacenar datos en forma de par clave/valor
	en un Hastable y que puede recuperar esos datos de varias maneras.
	Pero es la implementación real cómo y dónde se almacenan realmente
	estos datos, de manera que se ocultan al usuario.
	El usuario puede simplemente usar Hashtable donde quiera almacenar pares
	clave/valor sin molestarse en su implementación.

	La idea detrás de la encapsulación es esconder los detalles de la 
	implementación de los usuarios. 
	Si un miembro de datos es privado, significa que sólo puede se puede
	acceder dentro de la misma clase. Ninguna clase externa puede acceder
	al miembro privado de datos (variable) de otra clase.
	
	Sin embargo, si configuramos los métodos getter y setter públicos para
	actualizarlos (por ej. setSSN (int ssn)), y escaneo (por ej.getSSN()) 
	los campos de datos privados, entonces, la clase externa puede acceder
	a esos campos de datos privados a través de métodos públicos.
	
	De esta manera, los datos sólo pueden ser accesados por métodos públicos
	haciendo así que los campos privados y su implementación etén ocultos para
	las clases externas

	Es por eso que la encapsulación se utiliza para ocultar datos.
 */

public class TestEncapsulacion extends DemoEncapsulacion {
	public static void main(String args[]) {
		
		DemoEncapsulacion objeto = new DemoEncapsulacion();
		
		objeto.setNOMBREdelEmpleado("FooBar");
		objeto.setEDADdelEmpleado(666);
		objeto.setNUMEROdeSEGUROSOCIALdelEmpleado(555666777);

		System.out.println("Nombre del empleado: " + objeto.getNombreDelEmpleado());
		System.out.println("Número de Seguro Social: " + objeto.getNumeroDeSeguroSocial());
		System.out.println("Edad: " + objeto.getedadDelEmpleado());
	}
 }
