//mahmoud mohmmed ahmed
//2016496
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();

        int difference = (a * b) - (c * d);

        // printing the result
        System.out.println("Difference = " + difference);
    }
}
