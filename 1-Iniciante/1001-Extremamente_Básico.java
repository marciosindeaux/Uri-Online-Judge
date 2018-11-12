import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
    public static int a;
    public static int b;
    public static int soma;
    static Scanner entrada = new Scanner (System.in);
    public static void main(String[] args) throws IOException {
        a = entrada.nextInt();
        b = entrada.nextInt();
        soma = a + b;
        System.out.println("X = " + soma);        
    }
 
}
