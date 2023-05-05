//mahmoud mohmmed ahmed
//2016496
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] <= 10) {
                System.out.println("A[" + i + "] = " + arr[i]);
            }
        }
    }
}
