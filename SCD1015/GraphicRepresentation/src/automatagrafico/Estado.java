/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package automatagrafico;

import java.awt.Color;
import java.awt.Graphics;
import java.util.ArrayList;

/**
 *
 * @author csxr
 */
public class Estado {
    
    private int x, y;
    public static final int d = 45;
    private String identificador;
    private boolean _inicial;
    private boolean _final;
    private Transicion transicion;
    private ArrayList<Transicion> transiciones = new ArrayList<Transicion>();
    

    public Estado(int x, int y, String identificador, boolean _inicial, boolean _final) {
        this.x = x;
        this.y = y;
        this.identificador = identificador;
        this._inicial = _inicial;
        this._final = _final;
    }
    
    public void pintar(Graphics g){
        //Graphics2D g2 = (Graphics2D) g;
        g.setColor(Color.YELLOW);
        g.drawOval(this.x - d/2, this.y - d/2, d, d);
        g.setColor(Color.YELLOW);
        g.drawString(identificador, x, y);
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public String getIdentificador() {
        return identificador;
    }

    public void setIdentificador(String identificador) {
        this.identificador = identificador;
    }

    public boolean isInicial() {
        return _inicial;
    }

    public void setInicial(boolean _inicial) {
        this._inicial = _inicial;
    }

    public boolean isFinal() {
        return _final;
    }

    public void setFinal(boolean _final) {
        this._final = _final;
    }

    public Transicion getTransicion() {
        return transicion;
    }

    public void setTransicion(Transicion transicion) {
        this.transicion = transicion;
    }

    public ArrayList<Transicion> getTransiciones() {
        return transiciones;
    }

    public void setTransiciones(ArrayList<Transicion> transiciones) {
        this.transiciones = transiciones;
    }
    
    public void añadeTransicion(Transicion e){
        transiciones.add(e);
    }
    
}
