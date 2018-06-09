package sample;

import java.net.URL;

import java.util.ResourceBundle;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;

import javafx.scene.control.Button;
import javafx.scene.control.TableView;
import javafx.scene.control.TextField;

import javafx.collections.ObservableList;
import javafx.collections.FXCollections;

public class MenuController implements Initializable
{
    @FXML private TableView<Prestamo> tabla_prestamos;
    @FXML private Button _crear;
    @FXML private Button _editar;
    @FXML private Button _eliminar;
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

    public void crear()
    {
        Window window = new Window();
        window.open("crear.fxml", "Crear");
        window.close(this._crear.getScene());
    }

    public void editar()
    {
        Window window = new Window();
        window.open("editar.fxml", "Editar");
        window.close(this._editar.getScene());
    }

    public void eliminar()
    {
        Window window = new Window();
        window.open("eliminar.fxml", "Eliminar");
        window.close(this._eliminar.getScene());
    }
}