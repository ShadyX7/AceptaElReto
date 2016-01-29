package numerosafortunados146;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Victor
 */
public class NumerosAfortunados146 {
 
    public static ArrayList<Integer> lista(int num) {
        ArrayList<Integer> salida = new ArrayList<Integer>();
        for (int i = 1; i <= num; i++) {
            salida.add(i);
        }
        return salida;
    }

    public static ArrayList<Integer> eliminacionNumeros(int num) {
        ArrayList<Integer> listaNumeros = lista(num);
        int accion = 1;
        while (accion < listaNumeros.size()) {
            for (int b = 0; b < listaNumeros.size(); b++) {
                if (b % accion == 0) {
                    listaNumeros.remove(b);
                }
            }
            accion++;
        }
        return listaNumeros;
    }

    public static void salidaPantalla(int entrada, ArrayList<Integer> ListaDeNumeros) {
        System.out.print(entrada + ": ");
        for (int i = (ListaDeNumeros.size() - 1); i >= 0; i--) {
            if (i != 0) {
                System.out.print(ListaDeNumeros.get(i) + " ");
            } else {
                System.out.println(ListaDeNumeros.get(i));
            }
        }
    }

    public static void proceso(int entrada) {
        ArrayList<Integer> ListaDeNumeros = eliminacionNumeros(entrada);
        salidaPantalla(entrada, ListaDeNumeros);
    }
   public static boolean casosdeprueba() {
        Scanner teclado = new Scanner(System.in);
        Integer entrada = teclado.nextInt();
        boolean salida;
        if (entrada != 0) {
            proceso(entrada);
            salida = true;
        } else {
            salida = false;
        }
        return salida;
    }
   
    public static void main(String[] args) {

        while (casosdeprueba()) {

        }

    }
}
