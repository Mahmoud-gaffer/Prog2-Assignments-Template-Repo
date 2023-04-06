//mahmoud mohmmed ahmed
//2016496
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int counter = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(counter);
                if (j < 2) {
                    System.out.print(" ");
                } else {
                    System.out.println(" PUM");
                }
                counter++;
            }
            counter++;
        }
    }
}
