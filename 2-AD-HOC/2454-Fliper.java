import java.util.Scanner;

public class 2454-Fliper
{
    static Scanner e = new Scanner(System.in);
    public static void main(String[] args) {
        int e1,e2;
        e1 = e.nextInt();
        e2 = e.nextInt();
        if(e1 == 0) {
            System.out.println("C");
        }else {
            if(e2 == 0) {
                System.out.println("B");
            }else {
                System.out.println("A");
            }
        }
    }
}
