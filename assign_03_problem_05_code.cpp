import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); // number of test cases

        while (t-- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int sum = 0;

            // swap x and y if x is greater than y
            if (x > y) {
                int temp = x;
                x = y;
                y = temp;
            }

            // add odd numbers between x and y (excluding x and y)
            for (int i = x + 1; i < y; i++) {
                if (i % 2 != 0) {
                    sum += i;
                }
            }

            System.out.println(sum);
        }

        sc.close();
    }
}
