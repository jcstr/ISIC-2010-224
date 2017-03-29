package ahorcado;

import java.awt.GridLayout;
import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.JLabel;
import javax.swing.JComboBox;
import javax.swing.ImageIcon;
import javax.swing.JTextField;
import javax.swing.border.TitledBorder;
import javax.swing.*; // LOOK and Feel

/**
 *
 * @author jesus
 */
public class View
{
    private final JFrame ventana;
    private JComboBox categorias;
    
    private JLabel jugador;
    private JLabel vidas;
    private JLabel palabra;
    
    private final String listaDeCategorias[] = {"Frutas", "Instrumentos", "Computacion"};
    
    public final void setDesign() {
	try {
         UIManager.setLookAndFeel("com.sun.java.swing.plaf.nimbus.NimbusLookAndFeel");
	} catch(Exception e) {  

	}
    }
    
    public View() 
    {
        ventana = new JFrame("Juego del Ahorcado");
       
        /* input_resultado = new JTextField("", 50);
        input_resultado.setSize(200,150);
        input_resultado.setEditable(true);
        */
      
        this.categorias = new JComboBox();
        this.palabra = new JLabel();
        this.vidas = new JLabel();
        this.jugador = new JLabel();
        
        // Controller comportamiento = new Controller(categorias, palabra, jugador, vidas); // FIX THIS
        
        JPanel panel_principal = new JPanel(new GridLayout(3, 1));
        panel_principal.setBorder(new TitledBorder("Menu"));
        

        this.categorias.addItem(listaDeCategorias); // TODO fix item stuff
        ventana.setSize(500, 500);
        ventana.setVisible(true); 	
        
        
    }
}