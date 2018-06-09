package sample;
import javafx.beans.property.SimpleStringProperty;

public class Libro
{
    private SimpleStringProperty id;
    private SimpleStringProperty isbn;
    private SimpleStringProperty titulo;
    private SimpleStringProperty autor;
    private SimpleStringProperty editorial;
    private SimpleStringProperty edicion;

    public Libro(String id, String isbn,String titulo, String autor, String editorial, String edicion)
    {
        this.id = new SimpleStringProperty(id);
        this.isbn = new SimpleStringProperty(isbn);
        this.titulo = new SimpleStringProperty(titulo);
        this.autor = new SimpleStringProperty(autor);
        this.editorial = new SimpleStringProperty(editorial);
        this.edicion = new SimpleStringProperty(edicion);
    }

    public void setId(String id)
    {
        this.id.set(id);
    }

    public String getId()
    {
        return this.id.get();
    }

    public void setIsbn(String isbn)
    {
        this.isbn.set(isbn);
    }

    public String getIsbn()
    {
        return this.isbn.get();
    }

    public void setTitulo(String titulo)
    {
        this.titulo.set(titulo);
    }

    public String getTitulo()
    {
        return this.titulo.get();
    }

    public void setEditorial(String editorial)
    {
        this.editorial.set(editorial);
    }

    public String getEditorial()
    {
        return this.editorial.get();
    }

    public void setAutor(String autor)
    {
        this.autor.set(autor);
    }

    public String getAutor()
    {
        return this.autor.get();
    }

    public void setEdicion(String edicion)
    {
        this.edicion.set(edicion);
    }

    public String getEdicion()
    {
        return this.edicion.get();
    }
}