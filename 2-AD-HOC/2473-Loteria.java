
import java.util.Scanner;

public class Loteria
{
    static Integer[] l = new Integer[6];
    static Scanner e = new Scanner(System.in);
    
    public static void main(String[] args) {
        int arg;
        for(int i = 0; i < 6; i++) {
            l[i] = e.nextInt();
        }
        for(int i = 0; i < 6; i++) {
            arg = e.nextInt();
            for(int j = 0 ; j < 6;j++) {
                if(arg == l[j]) {
                    l[j] = -1;
                }
            }
        }
        arg =0;
        for(int i = 0; i < 6; i++) {
            if(l[i] == -1) {
               arg++; 
            }
        }
        if(arg == 3) {
            System.out.println("terno");
        }else if(arg == 4) {
            System.out.println("quadra");
        }else if(arg == 5) {
            System.out.println("quina");
        }else if(arg == 6) {
            System.out.println("sena");
        }else {
            System.out.println("azar");
        }
    }
}
