import java.util.Scanner;

public class 1132-Multiplos_de_13.java{
    static Scanner entrada = new Scanner(System.in);
    public static void main(String[] args) {
        int e1,e2;
        e1 = entrada.nextInt();
        e2 = entrada.nextInt();
        if(e1 > e2) {
            System.out.println(somaNumeros(e2,e1));
        }else {
            System.out.println(somaNumeros(e1,e2));
        }
    }
    
    public static int somaNumeros(int numMenor, int numMaior) {
        int sum = 0;
        for(int i = numMenor;i<=numMaior;i++) {
            if(i%13 != 0) {
                sum = sum + i;
            }
        }
        return(sum);
    }
}
