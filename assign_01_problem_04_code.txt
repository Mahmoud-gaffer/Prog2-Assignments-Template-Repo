//mahmoud mohmmed ahmed
//2016496
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        int[] arr = {a, b, c};
        // sorting the array in ascending order using bubble sort
        for (int i = 0; i < arr.length-1; i++) {
            for (int j = 0; j < arr.length-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        // printing the numbers in ascending order
        for (int num : arr) {
            System.out.println(num);
        }
        // printing a blank line
        System.out.println();

        // printing the numbers as they were read
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}
