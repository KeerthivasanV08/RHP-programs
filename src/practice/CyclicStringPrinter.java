import java.util.Scanner;

public class CyclicStringPrinter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int k = scanner.nextInt();

        for (int i = 0; i < k; i++) {
            System.out.print(s.charAt(i % (s.length())));
        }

        scanner.close();
    }
}
