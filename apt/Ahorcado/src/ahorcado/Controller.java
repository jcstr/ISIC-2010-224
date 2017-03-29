package ahorcado;

import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;
import java.awt.*;

import java.util.Random;

public class Controller implements ActionListener, KeyListener {
    
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

    Controller(JComboBox categorias, JLabel palabra, JLabel jugador, JLabel vidas) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
    
    public void PessStart(){
        Random azar = new Random();
    }
    
    @Override
    public void actionPerformed(ActionEvent actionevent)
    {
        
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
}