import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;
import java.awt.*;

import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JComboBox;
import javax.swing.ImageIcon;
import javax.swing.JOptionPane;

import java.util.Random;

public class Controller implements ActionListener, KeyListener {
    
	addKeyListener(this);
    
	JButton[] teclado = new JButton[26]; /* se omite 'ñ' */
    String[] teclas = {"a","b","c","d",
                       "e","f","g","h",
                       "i","j","k","l",
                       "m","n","o","p",
                       "q","r","s","t",
                       "w","v","x","y",
                       "z"}; 
    
    private final String[] [] palabras = {
                                            {"manzana","mango","pera","sandia", // frutas
                                             "guitarra","bateria","violin","microfono", // Instrumentos
                                             "java","linux","gnu","gcc"} // Software
                                         };
	private String palabraDelJugador;

    Controller(JComboBox categorias, JLabel palabra, JLabel jugador, JLabel vidas) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

	public ControladorPrincipal(JComboBox listaDeCategorias, JLabel palabra, JLabel persona, JLabel vidas)
	{
		this.listaDeCategorias = listaDeCategorias;
		this.palabra = palabra;
		this.persona = persona;
		this.vidas = vidas;
		this.pressStartGame = false;
		this.intents = 5;
	}
    
    
    public void PessStart(){
        Random azar = new Random();
	
		int seleccionarAlAzar = ((View)listaDeCategorias.getSelectedItem()).getKey();
		int seleccionado = (int)(listaDeCategorias[seleccionarAlAzar].length * random.nextDouble());

		this.pressStartGame = true;
		 
    }
    
    @Override
    public void keyTyped(KeyEvent evento) 
    {
        System.out.println(evento.getKeyChar());
        if (evento.getKeyChar() == 'a') {
            teclado[0].doClick();
        }
        
        if (evento.getKeyChar() == 'b') {
            teclado[1].doClick();
        }
        
        if (evento.getKeyChar() == 'c') {
            teclado[2].doClick();
        }
        
        if (evento.getKeyChar() == 'd') {
            teclado[3].doClick();
        }
        
        if (evento.getKeyChar() == 'e') {
            teclado[4].doClick();
        }
        
        if (evento.getKeyChar() == 'f') {
            teclado[5].doClick();
        }
        
        if (evento.getKeyChar() == 'g') {
            teclado[6].doClick();
        }
        
        if (evento.getKeyChar() == 'h') {
            teclado[7].doClick();
        }
        
        if (evento.getKeyChar() == 'i') {
            teclado[8].doClick();
        }
        
        if (evento.getKeyChar() == 'j') {
            teclado[9].doClick();
        }
        
        if (evento.getKeyChar() == 'k') {
            teclado[10].doClick();
        }
        
        if (evento.getKeyChar() == 'l') {
            teclado[11].doClick();
        }
        
        if (evento.getKeyChar() == 'm') {
            teclado[12].doClick();
        }
        
        if (evento.getKeyChar() == 'n') {
            teclado[13].doClick();
        }
        
        if (evento.getKeyChar() == 'o') {
            teclado[14].doClick();
        }
        
        if (evento.getKeyChar() == 'p') {
            teclado[15].doClick();
        }
        
        if (evento.getKeyChar() == 'q') {
            teclado[16].doClick();
        }
        
        if (evento.getKeyChar() == 'r') {
            teclado[17].doClick();
        }
        
        if (evento.getKeyChar() == 's') {
            teclado[18].doClick();
        }
        
        if (evento.getKeyChar() == 't') {
            teclado[19].doClick();
        }
        
        if (evento.getKeyChar() == 'u') {
            teclado[20].doClick();
        }
        
        if (evento.getKeyChar() == 'v') {
            teclado[21].doClick();
        }
        
        if (evento.getKeyChar() == 'w') {
            teclado[22].doClick();
        }
        
        if (evento.getKeyChar() == 'x') {
            teclado[23].doClick();
        }
        
        if (evento.getKeyChar() == 'y') {
            teclado[24].doClick();
        }
        
        if (evento.getKeyChar() == 'z') {
            teclado[25].doClick();
        }
    }
   
    @Override
    public void keyPressed(KeyEvent event) 
    {
        
    }
    
    @Override
    public void keyReleased(KeyEvent event) 
    {
        
    }

	@Override
    public void actionPerformed(ActionEvent actionevent)
    {
		try {
			if (event.getSource() instanceof JButton) {
				JButton boton = (JButton)event.getSource();
				String valorDeBoton = boton.getText();
				if (valorDeBoton.equalsIgnoreCase("S T A R T") && !this.is_start)) {
					PressStart();
				} else if (valorDeBoton.equalsIgnoreCase("Resolver") && this.is_start) {
					solve();						
				} else if (isAlpha(valorDeBoton) && this.is_start) {
					evalue(boton);
				}				
			}
		}
		catch (Exception e) {
        
		}
    }
     
}
