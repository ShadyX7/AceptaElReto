package constantemagica120;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 *
 * @author Victor
 */
public class ConstanteMagica120 {

    public static void main(String[] args) throws IOException {
        BufferedReader entrada = new BufferedReader(new InputStreamReader(System.in));
        
        String[] numeros = entrada.readLine().split(" ");
        int a = Integer.valueOf(numeros[0]);
        int num = Integer.valueOf(numeros[1]);

        while (a != 0 || num != 0) {
            
            System.out.println(((a * a) / 2 + num) * a);
            numeros = entrada.readLine().split(" ");
            a = Integer.valueOf(numeros[0]);
            num = Integer.valueOf(numeros[1]);
        }
        
    }
}
