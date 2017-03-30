package ahorcado;

import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;

public class Ahorcado {

    public static void main(String[] args) { 
        
        try {
             UIManager.setLookAndFeel("com.sun.java.swing.plaf.nimbus.NimbusLookAndFeel");
	} catch(ClassNotFoundException | IllegalAccessException | InstantiationException | UnsupportedLookAndFeelException ex) {  
              // LOL NULL
        } finally {
            ControllerUI juego = new ControllerUI();
            juego.setVisible(true);
        }
    
    }   

}
