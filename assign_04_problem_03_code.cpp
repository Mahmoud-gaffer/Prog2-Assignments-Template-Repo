//mahmoud mohmmed ahmed
//2016496
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] a = new int[n];

        // read array A
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }

        int x = scanner.nextInt();
        int index = -1;

        // search for X in array A
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                index = i;
                break;
            }
        }

        // print the index of X
        System.out.println(index);
    }
}
