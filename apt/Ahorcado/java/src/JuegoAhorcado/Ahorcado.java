package JuegoAhorcado;

import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class Ahorcado {
    JTextField jt;
    JLabel lb;
    JLabel lb2;
    private boolean play =false;
        private String[] diccionario = {"ABEJA", "AEROPUERTO", "COMPUTADOR", "OSO",
        "JAVA", "NEVERA", "PROGRAMA", "INFORMATICA", "COMPUTACION", "COMPUTADOR","CORAZON","BANANO","PLATANO",
        "AUTOMOVIL", "PERRO", "COLOMBIA", "LONDRES", "CEPILLO", "BRAZO", "CABEZA", "CUERPO","DEPORTE","SALUD",
        "ANONYMOUS", "CUADERNO", "PANTALLA", "UBUNTU", "SEMAFORO", "LINUX", "LOBO","AMOR","MOSCA","ZANAHORIA",
        "PINGUINO", "HACKER", "SISTEMA", "ELEFANTE", "CASCADA", "JUEGOS","LARGO","BONITO","IMPOSIBLE","UNIDOS","ZOMBIE",
        "MATEMATICAS", "CALCULO", "ALGEBRA", "DICCIONARIO", "BIBLIOTECA", "COCINA","PELICULA","COMERCIAL","GRANDE","PEQUEÑO",
        "GATO", "SAPO", "JIRAFA", "FERROCARRIL", "FACEBOOK", "PERSONA","BICICLETA","CONTROL","PANTALON","AEROSOL",
        "ERROR", "COPA", "COPA", "PROGRAMADOR", "LICENCIA", "NUEVE", "PROCESADOR","GARAJE","MODERNO","TABLA","DISCOTECA",
        "LENGUAJE", "PROGRAMACION", "HERRAMIENTAS", "INTERNET", "EJECUTAR", "PROYECTO","PERIODICO","COCODRILO","TORTUGA","CABALLO",
        "APLICACION", "PERA", "SOFTWARE", "ADMINISTRACION", "VENTANA", "MANTENIMIENTO","INFORMACION","PRESIDENTE","PERSONA","GENTE",
        "NARANJA", "PRUEBA", "MANZANA", "JARRA", "CELULAR", "TELEFONO","CONTAMINACION","COLOR","ROMANO","ADIVINAR","MARCADOR",
        "INSTRUCCION", "CUADERNO", "CASA", "PALA", "ARBOL", "PUENTE", "PAPEL", "HOJA","HELICOPTERO","BARCO","GOLF","CARRERA",
        "TUBERIA", "PLOMERO", "FUTBOL", "BALONCESTO", "ESTADIO", "JEAN", "FUENTE", "LEOPARDO","REGLA","PRIMERO","SEGUNDO",
        "BLUSA", "CAMISA", "AGUA", "FUEGO", "INDUSTRIA", "AIRE","TIERRA","NATURALEZA","MIERCOLES","FOTOGRAFIA","LEON",
        "TIGRE"}; //90
    
    private char[] palabra_secreta;
    private char[] palabra;
    
    int intentos = 0;
    boolean cambios=false;
    
    public Ahorcado(){}
    
    public Ahorcado(JTextField texto, JLabel loser, JLabel ahorcado){     
        this.palabra_secreta = Random().toCharArray();        
        String var="";
        //llena un string con "_" 
        for(int i=0;i<=this.palabra_secreta.length-1;i++){
          var = var + "_";
          
        }      
        
        
        //convierte este en un array
        this.palabra = var.toCharArray();                
        this.jt=texto;
        this.lb= loser;
        this.lb2= ahorcado;
        
        jt.setText(var);
        lb.setIcon(new javax.swing.ImageIcon(getClass().getResource("/loser/loser.jpg"))); 
        lb2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/ahorcado/0.jpg"))); 
        JOptionPane.showMessageDialog(null,"La Palabra  Tienes " + this.palabra_secreta.length + " letras ");
        this.play=true;
    }

    //evalua el juego de acuerdo a los caracteres que se le pase
    public void evaluar(char word){
        if(play){
        String p="";
        //controla que aun se pueda jugar
        if(this.intentos==7){ 
           lb2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/ahorcado/8.jpg")));
           
            String RESPT="";
            for(int i=0;i<=this.palabra_secreta.length-1;i++){
            RESPT = RESPT + this.palabra_secreta[i];
        }      
           JOptionPane.showMessageDialog(null,"¡PERDISTE, !  La palabra oculta era: " + RESPT);
        }  
        else{     
           //evalua caracter por caracter
           for(int j=0;j<=this.palabra_secreta.length-1;j++){
             //si el caracter se encuentra en la palabra secreta            
             if(this.palabra_secreta[j]==word){                
                this.palabra[j]= word;//se asigna para que se pueda ver en pantalla
                this.cambios=true;
             }          
             p = p + this.palabra[j];
           }//fin for
           //si no se produjo ningun cambio, quiere decir que el jugador se equivoco
           if(this.cambios==false){
             this.intentos+=1; //se incrementa            
             lb.setIcon(new javax.swing.ImageIcon(getClass().getResource("/loser/loser"+this.intentos+".jpg"))); 
             lb2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/ahorcado/"+this.intentos+".jpg")));              
             if(this.intentos<8){
                JOptionPane.showMessageDialog(null,"¡Has Fallado! \n\n\t Te quedan " + ((8)-this.intentos) + " intentos más");
             }             
           }else{
               this.cambios=false;               
           }
           this.jt.setText(p);
           //comprobamos el estado del juego
           gano();           
         }        
       }
    }
    
    private void gano(){
        boolean win=false;
        for(int i=0;i<=this.palabra_secreta.length-1;i++){
            if(this.palabra[i]==this.palabra_secreta[i]){            
                win=true;
            }else{
                win=false;
                break;
            }
        }
        if(win){                 
             JOptionPane.showMessageDialog(null,"Tuviste "+(this.intentos)+" error."+"\n"+"Pero has ganado !!   Felicidades !!","Winner...",0,new javax.swing.ImageIcon(getClass().getResource("/ahorcado/goals.png")));           
        }       
    }
    
    private String Random(){   
        int num = (int)(Math.random()*(diccionario.length));   
        return diccionario[num];
    }
}
