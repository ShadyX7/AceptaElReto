package divisoresfactorial126;

import java.util.Scanner;

/**
 *
 * @author Victor
 */
public class DivisoresFactorial126 {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int numFactorial, divisor;

        divisor = entrada.nextInt();
        numFactorial = entrada.nextInt();

        while (divisor > -1 || numFactorial > -1) {
            if ((divisor == 1) || (divisor <= numFactorial)
                    && ((divisor >= 0) && (numFactorial >= 0))) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
            divisor = entrada.nextInt();
            numFactorial = entrada.nextInt();
        }

    }
}
