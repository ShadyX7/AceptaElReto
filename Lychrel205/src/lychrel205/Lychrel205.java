package lychrel205;

import java.util.Scanner;
import java.lang.String;

/**
 *
 * @author Victor
 */
public class Lychrel205 {

    static Scanner datos = new Scanner(System.in);

    public static void main(String[] args) {

        datos = new Scanner(System.in);
        int numCasos = Integer.parseInt(datos.nextLine());

        for (int i = 1; i <= numCasos; i++) {
            CasoPrueba();
        }

    }

    static void CasoPrueba() {

        String entrada = datos.nextLine();
        int a = Integer.parseInt(entrada);
        int resultado = 0;

        if (a < 1 || a > 100000) { //Limite de casos
            System.out.println("ERROR");
        } else {

			//Hacemos calculos:
            //1) Sumamos los numeros girados
            //2) Cogemos el resultado y repetimos el proceso hasta 1.000.000.000
            resultado = suma(entrada, (invertir(entrada)));
            boolean lychrel = false;
            int iteraciones = 1;

            while (resultado < 1000000000 && !lychrel) {

                if (numCapicua(pasarString(resultado))) {
                    System.out.println(iteraciones + " " + resultado);
                    lychrel = true;
                } else {
                    lychrel = false;
                }

                resultado = suma(pasarString(resultado), invertir(pasarString(resultado)));
                iteraciones++;

            }
            if (!lychrel) {
                System.out.println("Lychrel?");
            }

        }
    }

    static String invertir(String nombre) {
        String darVuelta = "";

        for (char c : nombre.toCharArray()) {
            darVuelta = c + darVuelta;
        }
        return darVuelta;
    }

    static int suma(String a, String b) {
        return Integer.parseInt(a) + Integer.parseInt(b);
    }

    static String pasarString(int numConvertirCapicua) {
        return Integer.toString(numConvertirCapicua);
    }

    static boolean numCapicua(String numero) {

        if (numero.compareTo(invertir(numero)) == 0) {
            return true;
        } else {
            return false;
        }

    }
}
