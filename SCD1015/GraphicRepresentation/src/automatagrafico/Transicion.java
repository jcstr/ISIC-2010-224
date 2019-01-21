/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package automatagrafico;

import java.awt.Graphics;

/**
 *
 * @author csxr
 */
public class Transicion {
 
    //Variables para controlar las coordenadas
    private int x1, y1, x2, y2;
    private char Transicion;
    private Estado stateI;
    private Estado stateF;

    public Transicion(int x1, int y1, int x2, int y2, char Transicion, Estado stateI, Estado stateF) {
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
        this.Transicion=Transicion;
        this.stateI=stateI;
        this.stateF=stateF;
    }

    public int getX1() {
        return x1;
    }

    public void setX1(int x1) {
        this.x1 = x1;
    }

    public int getY1() {
        return y1;
    }

    public void setY1(int y1) {
        this.y1 = y1;
    }

    public int getX2() {
        return x2;
    }

    public void setX2(int x2) {
        this.x2 = x2;
    }

    public int getY2() {
        return y2;
    }

    public void setY2(int y2) {
        this.y2 = y2;
    }

    public char getTransicion() {
        return Transicion;
    }

    public void setTransicion(char Transicion) {
        this.Transicion = Transicion;
    }

    public Estado getStateI() {
        return stateI;
    }

    public void setStateI(Estado stateI) {
        this.stateI = stateI;
    }

    public Estado getStateF() {
        return stateF;
    }

    public void setStateF(Estado stateF) {
        this.stateF = stateF;
    }
    
    public void pintar(Graphics g){
        g.drawLine(x1, y1, x2, y2);
        if(x1 > x2 && y1 > y2){
            g.drawString(Character.toString(Transicion), x1 - Math.abs((x1 - x2)/2), y1 - Math.abs((y1 - y2)/2));
        }
        if(x1 < x2 && y1 < y2){
            g.drawString(Character.toString(Transicion), x2 - Math.abs((x1 - x2)/2), y2 - Math.abs((y1 - y2)/2));
        }
        if(x1 > x2 && y1 < y2){
            g.drawString(Character.toString(Transicion), x1 - Math.abs((x1 - x2)/2), y2 - Math.abs((y1 - y2)/2));
        }
        if(x1 < x2 && y1 > y2){
            g.drawString(Character.toString(Transicion), x2 - Math.abs((x1 - x2)/2), y1 - Math.abs((y1 - y2)/2));
        }
    }
}
