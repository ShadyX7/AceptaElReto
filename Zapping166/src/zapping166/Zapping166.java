/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package zapping166;

/**
 *
 * @author Victor
 */
public class Zapping166 {

    static java.util.Scanner in;

    public static int menor(int a, int b) {
        if (a < b) {
            return a;
        } else {
            return b;
        }
    }

    public static int Mayor(int a, int b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    public static boolean casosdeprueba() {
        Integer n1 = in.nextInt();
        Integer n2 = in.nextInt();
        int menor = menor(n1, n2);
        int Mayor = Mayor(n1, n2);
        if ((n1 == 0) && (n2 == 0)) {
            return false;
        } else {
            int dif1 = n2 - n1;
            if (dif1 < 0) {
                dif1 = dif1 * -1;
            }
            int dif2 = menor + (99 - Mayor);
            if (dif2 < 0) {
                dif2 = dif2 * -1;
            }
            System.out.println(menor(dif1, dif2));
            return true;
        }
    }

    public static void main(String[] args) {

        in = new java.util.Scanner(System.in);
        while (casosdeprueba()){
            
        }

    }

}
