//mahmoud mohmmed ahmed
//2016496
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        long l = sc.nextLong();
        char c = sc.next().charAt(0); // read a single character
        float f = sc.nextFloat();
        double d = sc.nextDouble();

        System.out.println(i);
        System.out.println(l);
        System.out.println(c);
        System.out.println(String.format("%.2f", f)); // format to 2 decimal places
        System.out.println(String.format("%.1f", d)); // format to 1 decimal place
    }
}

