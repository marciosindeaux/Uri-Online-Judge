import java.util.Scanner;

public class Intervalo_2
{
    static Scanner e = new Scanner(System.in);
    public static void main(String[] args) {
        int in = 0;
        int out = 0;
        int value = 0;
        int aux;
        value = e.nextInt();
        for(int i = 0; i < value;i++) {
            aux = e.nextInt();
            if((aux>=10)&&(aux<=20)) {
                in++;
            }else {
                out++;
            }
        }
        System.out.println(in + " in");
        System.out.println(out + " out");
    }
}
