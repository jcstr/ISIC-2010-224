/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package automatagrafico;

import java.awt.Graphics;
import java.awt.Point;
import java.awt.Rectangle;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.util.ArrayList;
import javax.swing.JOptionPane;
import javax.swing.JPanel;


/**
 *
 * @author csxr
 */
public class Grafico extends JPanel implements MouseListener {
    
    private final ArrayList<Estado> vectorNodos;
    private final ArrayList<Transicion> vectorEnlaces;
    private Point p1,p2;
    private String[] recibido;
    private Estado nodoMover,aux1,aux2;
    private int iNodo;
    private int a;
    private Ventana win2;
    
    public Grafico(){
        this.vectorNodos = new ArrayList<>();
        this.vectorEnlaces = new ArrayList<>();
        this.addMouseListener(this);
    }

    @Override
    public void mouseClicked(MouseEvent e) {
        aux1 = null;
        aux2 = null;
        boolean ei = false, ef = false;
        String s1 = "", s2 = "";
        char transition = 0;
        if (e.getButton() == MouseEvent.BUTTON1) {
            String name = JOptionPane.showInputDialog("Ingresa el identificador del estado");
            if (ei != true && a == 0) {
                s1 = JOptionPane.showInputDialog("Es un estado inicial?" + "\n\nSi" + "\nNo"); 
                s2 = JOptionPane.showInputDialog(this, "Es un estado final?" + "\n\nSi" + "\nNo"); 
                if (s1.equalsIgnoreCase("si") || s1.equals("si")) {
                    ei = true;
                    ef = false;
                    if (s2.equalsIgnoreCase("si") || s2.equals("si")) {
                        ef = true;
                    } else {
                        ef = false;
                    }
                    a =+ 1;
                } else if (ef == false) {
                    s2 = JOptionPane.showInputDialog("Es un estado final?" + "\n\nSi" + "\nNo");
                    if (s2.equals("si") || s2.equalsIgnoreCase("si")) {
                        ei = false;
                        ef = true;
                    } else {
                        ei = false;
                        ef = false;
                    }
                }
                }else{
                    s2 = JOptionPane.showInputDialog("Es un estado final?" + "\n\nSi" + "\nNo");
                    if (s2.equals("si") || s2.equalsIgnoreCase("si")) {
                        ei = false;
                        ef = true;
                    } else {
                        ei = false;
                        ef = false;
                    }
            }  
            this.vectorNodos.add(new Estado(e.getX(), e.getY(), name,ei,ef));
            win2 = new Ventana();
            win2.recuperarCadena(vectorNodos);
            repaint();
        }
        
        if (e.getButton() == MouseEvent.BUTTON3) {
            for(Estado nodo : vectorNodos){
                //Checamos si estamos sobre un objeto  
                //contains nos retorna un booleano si hemos echo click en un nodo
                if(new Rectangle(nodo.getX() - Estado.d/2, nodo.getY() - Estado.d/2, Estado.d, Estado.d).contains(e.getPoint())){
                    if (p1 == null) 
                        p1 = new Point(nodo.getX(), nodo.getY());
                    else{
                        p2 = new Point(nodo.getX(), nodo.getY());
                        try {
                            String name = JOptionPane.showInputDialog(s2, "Ingresa el caracter: ");
                            transition = name.charAt(0);
                            aux1 = EncuentraNodo(p1);
                            aux2 = EncuentraNodo(p2);
                            //Agregamos la transicion al nodo
                            this.vectorEnlaces.add(new Transicion(p1.x, p1.y, p2.x, p2.y,transition,aux1,aux2));
                            aux1.añadeTransicion(new Transicion(p1.x, p1.y, p2.x, p2.y,transition,aux1,aux2));
                        } catch (Exception err) {
                            JOptionPane.showMessageDialog(this, "Debes ingresar el alfabeto...");
                        }
                        repaint();
                        p1 = null;
                        p2 = null;
                    }
                }
            }//Fin del for
        }//Fin del segundo if   
    }
    @Override
    public void mousePressed(MouseEvent arg0) {
        
    }
    @Override
    public void mouseReleased(MouseEvent arg0) {
       
    }

    @Override
    public void mouseEntered(MouseEvent arg0) {
        
    }
    @Override
    public void mouseExited(MouseEvent arg0) {
        
    
    }
    
    public Estado EncuentraNodo(Point p){
        Estado retorno=null;
        
        for (Estado node : vectorNodos) {
            if (node.getX() == p.x && node.getY()==p.y){
                retorno=node;
            }
        }
        return retorno;
    }
    
    @Override
    public void paint(Graphics g){
        super.paint(g);
        /*  
        Se recorren los vectores y se pintan
        */
        try {
            vectorNodos.forEach((nodos) -> {
                nodos.pintar(g);
            });
            vectorEnlaces.forEach((enlaces) -> {
                enlaces.pintar(g);
            });
        } catch (Exception e) {
            System.out.println("No hay nodo o transiciones...");
        }

    }
 
}
