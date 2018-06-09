package sample;

import java.net.URL;

import java.util.ResourceBundle;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;

import javafx.scene.control.Button;
import javafx.scene.control.TableView;
import javafx.scene.control.TextField;

import javafx.collections.ObservableList;

public class EliminarController implements Initializable
{

    @FXML private TextField _isbn;
    @FXML private TextField _titulo;
    @FXML private TextField _autor;
    @FXML private TextField _editorial;
    @FXML private TextField _edicion;

    @FXML private TextField _nombre;
    @FXML private TextField _direccion;
    @FXML private TextField _telefono;
    @FXML private TextField _fecha_inicial;
    @FXML private TextField _fecha_final;
    @FXML private TextField _fecha_entrega;

    @FXML private Button _back;

    @FXML private TableView<Prestamo> tabla_prestamos;
    private ObservableList<Prestamo> tabla_prestamos_valores;

    @Override
    public void initialize(URL location, ResourceBundle resources)
    {
        Files archivo_prestamos = new Files("prestamos.txt");
        String []prestamos = archivo_prestamos.read().split("\n");
        String []prestamo;

        for (int i = 0; i < prestamos.length; i++)
        {
            prestamo = prestamos[i].split(",");
            if(prestamo.length != 12) continue;

            ObservableList<Prestamo> valores = this.tabla_prestamos.getItems();

            valores.add
                    (
                            new Prestamo
                                    (
                                            // Libro
                                            prestamo[0], // id
                                            prestamo[1], // isbn
                                            prestamo[2], // titulo
                                            prestamo[3], // autor
                                            prestamo[4], // editorial
                                            prestamo[5], // edicion

                                            // Prestamo
                                            prestamo[6],  // nombre
                                            prestamo[7],  // direccion
                                            prestamo[8],  // telefono
                                            prestamo[9],  // fecha_inicial
                                            prestamo[10], // fecha_final
                                            prestamo[11]  // fecha_entrega
                                    )
                    );
        }
        this.tabla_prestamos_valores = this.tabla_prestamos.getItems();
    }

    public void select()
    {
        String isbn = this.tabla_prestamos.getSelectionModel().getSelectedItem().getIsbn();
        String titulo = this.tabla_prestamos.getSelectionModel().getSelectedItem().getTitulo();
        String autor = this.tabla_prestamos.getSelectionModel().getSelectedItem().getAutor();
        String editorial = this.tabla_prestamos.getSelectionModel().getSelectedItem().getEditorial();
        String edicion = this.tabla_prestamos.getSelectionModel().getSelectedItem().getEdicion();

        String nombre = this.tabla_prestamos.getSelectionModel().getSelectedItem().getNombre();
        String direccion = this.tabla_prestamos.getSelectionModel().getSelectedItem().getDireccion();
        String telefono = this.tabla_prestamos.getSelectionModel().getSelectedItem().getTelefono();
        String fecha_inicial = this.tabla_prestamos.getSelectionModel().getSelectedItem().getFecha_inicial();
        String fecha_final = this.tabla_prestamos.getSelectionModel().getSelectedItem().getFecha_final();
        String fecha_entrega = this.tabla_prestamos.getSelectionModel().getSelectedItem().getFecha_entrega();

        this._isbn.setText(isbn);
        this._titulo.setText(titulo);
        this._autor.setText(autor);
        this._editorial.setText(editorial);
        this._edicion.setText(edicion);

        this._nombre.setText(nombre);
        this._direccion.setText(direccion);
        this._telefono.setText(telefono);
        this._fecha_inicial.setText(fecha_inicial);
        this._fecha_final.setText(fecha_final);
        this._fecha_entrega.setText(fecha_entrega);
    }

    public void save()
    {
        Files archivo_prestamos = new Files("prestamos.txt");
        String prestamos[] = archivo_prestamos.read().split("\n");
        String prestamos_editado[] = new String[prestamos.length - 1];

        String id_prestamo = this.tabla_prestamos.getSelectionModel().getSelectedItem().getId();
        int j = 0;

        for (int i = 0; i < prestamos.length; ++i)
        {
            if(prestamos[i].split(",")[0].equals(id_prestamo))
            {
                prestamos_editado[j++] = prestamos[i];
            }
        }

        archivo_prestamos.override(String.join("\n", prestamos_editado));

        update();
    }

    private void update()
    {
        this.tabla_prestamos.getItems().remove(this.tabla_prestamos.getSelectionModel().getSelectedItem());
        this.tabla_prestamos.refresh();
    }

    public void back()
    {
        Window window = new Window();
        window.open("menu.fxml", "Inicio");
        window.close(this._back.getScene());
    }
}