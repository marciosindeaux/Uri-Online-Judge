import java.io.IOException;
import java.util.Scanner;
public class Main {
    
    private static Scanner entrada;

    public static void main(String[] args) throws IOException {
        entrada = new Scanner (System.in);
        int cont = 0;
        float p = 0;
        float soma = 0;
        do {
            p = entrada.nextFloat();
            if((p > 0)&&( p <= 10)){
                cont = cont +1;
                soma = soma + p;
            }else {
                System.out.println("nota invalida");
            }
        }while(cont != 2);
        System.out.println("media = " + (soma/2));
    }
}
