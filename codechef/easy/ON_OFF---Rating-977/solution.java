import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            String s = scanner.next();
            String r = scanner.next();
            int toggles = 0;
            for (int i = 0; i < n; i++) {
                if (s.charAt(i) != r.charAt(i)) {
                    toggles++;
                }
            }
            if (toggles % 2 == 0) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
    }
}