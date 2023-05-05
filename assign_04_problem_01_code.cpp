//mahmoud mohmmed ahmed
//2016496
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = input.nextInt();
            if (a[i] > 0) {
                System.out.print("1 ");
            } else if (a[i] < 0) {
                System.out.print("2 ");
            } else {
                System.out.print("0 ");
            }
        }
    }
}
