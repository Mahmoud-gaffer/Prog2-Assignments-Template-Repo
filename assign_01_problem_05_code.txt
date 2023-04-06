//mahmoud mohmmed ahmed
//2016496
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        int sum = x + y;
        int product = x * y;
        int diff = x - y;

        // printing the results
        System.out.println(x + " + " + y + " = " + sum);
        System.out.println(x + " * " + y + " = " + product);
        System.out.println(x + " - " + y + " = " + diff);
    }
}
