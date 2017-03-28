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

public class View
{
    private final JFrame ventana;
    private JComboBox categorias;
    private JLabel jugador;
    private JLabel vidas;
    private JLabel palabra;

	private JTextArea display = new JTextArea();
    
    private final String listaDeCategorias[] = {"frutas", "instrumentos", "software"};
    
public final void setDesign() {
	try {
         UIManager.setLookAndFeel("com.sun.java.swing.plaf.nimbus.NimbusLookAndFeel");
	} catch(Exception e) {  

	}
}
    
	public View() 	
	{	
        this.ventana = new JFrame("Juego del Ahorcado");
		this.ventana.setDesign();
		this.ventana.setResizable(false);
		this.ventana.setSize(650, 650);
        this.ventana.setVisible(true); 
     	this.ventana.add()
        this.ventana.setFocusable(true); // for the fucking keylistener
        this.palabra = new JLabel();
        this.vidas = new JLabel();
        this.jugador = new JLabel();
		this.categorias.addItem(listaDeCategorias);
		this.categorias = new JComboBox();  

		ControladorPrincipal controlador = new ControladorPrincipal(listaDeCategorias, palabra, persona, vidas);
         
        JPanel panel_principal = new JPanel(new GridLayout(3, 1));
        panel_principal.setBorder(new TitledBorder("Menu"));
             	        
    }
}
