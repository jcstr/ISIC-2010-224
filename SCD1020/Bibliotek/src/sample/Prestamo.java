package sample;
import javafx.beans.property.SimpleStringProperty;

public class Prestamo extends Libro
{
    private SimpleStringProperty nombre;
    private SimpleStringProperty direccion;
    private SimpleStringProperty telefono;
    private SimpleStringProperty fecha_inicial;
    private SimpleStringProperty fecha_final;
    private SimpleStringProperty fecha_entrega;

    public Prestamo(String id, String isbn,String titulo, String autor, String editorial, String edicion, String nombre, String direccion, String telefono, String fecha_inicial, String fecha_final, String fecha_entrega)
    {
        super(id, isbn,titulo, autor, editorial, edicion);
        this.nombre = new SimpleStringProperty(nombre);
        this.direccion = new SimpleStringProperty(direccion);
        this.telefono = new SimpleStringProperty(telefono);
        this.fecha_inicial = new SimpleStringProperty(fecha_inicial);
        this.fecha_final = new SimpleStringProperty(fecha_final);
        this.fecha_entrega = new SimpleStringProperty(fecha_entrega);
    }

    public void setNombre(String nombre)
    {
        this.nombre.set(nombre);
    }

    public String getNombre()
    {
        return this.nombre.get();
    }

    public void setDireccion(String direccion)
    {
        this.direccion.set(direccion);
    }

    public String getDireccion()
    {
        return this.direccion.get();
    }

    public void setTelefono(String telefono)
    {
        this.telefono.set(telefono);
    }

    public String getTelefono()
    {
        return this.telefono.get();
    }

    public void setFecha_inicial(String fecha_inicial)
    {
        this.fecha_inicial.set(fecha_inicial);
    }

    public String getFecha_inicial()
    {
        return this.fecha_inicial.get();
    }

    public void setFecha_final(String fecha_final)
    {
        this.fecha_final.set(fecha_final);
    }

    public String getFecha_final()
    {
        return this.fecha_final.get();
    }

    public void setFecha_entrega(String fecha_entrega)
    {
        this.fecha_entrega.set(fecha_entrega);
    }

    public String getFecha_entrega()
    {
        return this.fecha_entrega.get();
    }
}