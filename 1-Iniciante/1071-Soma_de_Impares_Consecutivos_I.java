import java.util.Scanner;

public class 1071-Soma_de_Impares_Consecutivos_I
{
    static Scanner e = new Scanner(System.in);
    
    public static void main(String[] args) {
        int e1,e2;
        e1 = e.nextInt();
        e2 = e.nextInt();
        if(e1>e2) {
            System.out.println(soma(e2,e1));
        }else {
            System.out.println(soma(e1,e2));
        }
    }
    
    public static int soma(int menor,int maior) {
        int sum = 0;
        for(int i = menor+1 ;i < maior; i ++) {
            if(i%2 != 0) {
                sum = sum + i;
            }
        }
        return(sum);
    }
}
