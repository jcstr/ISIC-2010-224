public class DemoEncapsulacion {
	private int numeroDeSeguroSocial;
	private String nombreDelEmpleado;
	private int edadDelEmpleado;

	/* get y set */
	public int getNumeroDeSeguroSocial() {
		return numeroDeSeguroSocial;
	}

	public String getNombreDelEmpleado() {
		return nombreDelEmpleado;
	}

	public int getedadDelEmpleado() {
		return edadDelEmpleado;
	}
	
	public void setEDADdelEmpleado(int nuevoValor) {
		edadDelEmpleado = nuevoValor;
	}

	public void setNOMBREdelEmpleado(String nuevoValor) {
		nombreDelEmpleado = nuevoValor;
	}

	public void setNUMEROdeSEGUROSOCIALdelEmpleado(int nuevoValor) {
		numeroDeSeguroSocial = nuevoValor;
	}
 }
