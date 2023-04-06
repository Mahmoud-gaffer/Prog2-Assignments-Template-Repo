//mahmoud mohmmed ahmed
//2016496
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            int sum = 0;
            int cnt = 0;

            while (cnt < y) {
                if (x % 2 != 0) {
                    sum += x;
                    cnt++;
                }
                x++;
            }

            System.out.println(sum);
        }
    }
}
