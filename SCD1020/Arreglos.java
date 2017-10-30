/*
 * Created 05/09/2016.
 * # 2
 */

public class Arreglos {

        /* Atributos */
        public int renglones;
        public int columnas;
        public int[] vector;
        public int [][]matriz1;
        public int [][]matriz2;
        public int [][]mRes;

        /* Metodos */
        public int numeroMayor(int[]a){
            vector = a;
        }
        public int numneroMenor(int[]a){
            vector = a;
        }
        public void sumarMatriz(){

        }
        public void restarMatriz(int[][]m){

        }
        public int [][] multiplicarMatriz() {

        }
            /* Getter - Setter */
            public int getRenglones() {
                return renglones;
            }

            public void setRenglones(int renglones) {
               this.renglones = renglones;
            }

            public int getColumnas() {
                return columnas;
            }

            public void setColumnas(int columnas) {
                this.columnas = columnas;
            }

            public int[] getVector() {
                return vector;
            }

            public void setVector(int[] vector) {
                this.vector = vector;
            }

            public int[][] getMatriz1() {
                return matriz1;
            }

            public void setMatriz1(int[][] matriz1) {
                this.matriz1 = matriz1;
            }

            public int[][] getMatriz2() {
                return matriz2;
            }

            public void setMatriz2(int[][] matriz2) {
                this.matriz2 = matriz2;
            }

            public int[][] getmRes() {
                return mRes;
            }

            public void setmRes(int[][] mRes) {
                this.mRes = mRes;
            }

}
