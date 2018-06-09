package sample;

import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import javafx.fxml.FXMLLoader;

public class Window
{
    public void open(String name, String title)
    {
        try
        {
            Stage window = new Stage();
            Parent fxml = FXMLLoader.load(getClass().getResource(name)); // .openStream()
            window.setTitle(title);
            window.setScene(new Scene(fxml));
            window.show();
        }

        catch(Exception e){}
    }

    public void open(String name, String title, Object controller)
    {
        try
        {
            Stage window = new Stage();
            FXMLLoader loader = new FXMLLoader(getClass().getResource(name));
            loader.setController(controller);
            Parent fxml = loader.load();
            window.setTitle(title);
            window.setScene(new Scene(fxml));
            window.show();
        }

        catch(Exception e){}
    }

    public static void close(Scene frame)
    {
        try
        {
            Stage window = (Stage) frame.getWindow();
            window.close();
        }

        catch(Exception e){}
    }
}