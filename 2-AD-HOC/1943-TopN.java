import java.util.Scanner;

public class 1943-TopN
{
    static Scanner e = new Scanner(System.in);
    public static void main(String[] args) {
        int col = e.nextInt();
        if(col ==1) {
            System.out.println("Top 1");
        }else if((col ==2)||(col == 3)) {
            System.out.println("Top 3");
        }else if((col == 4)||(col == 5)) {
            System.out.println("Top 5");
        }else if(col <= 10) {
            System.out.println("Top 10");
        }else if(col <=25) {
            System.out.println("Top 25");
        }else if(col <=50) {
            System.out.println("Top 50");
        }else if(col <=100) {
            System.out.println("Top 100");
        }
    }
}
