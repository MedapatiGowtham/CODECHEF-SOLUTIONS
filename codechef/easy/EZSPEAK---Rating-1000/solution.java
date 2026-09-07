import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            String s = sc.next();

            int count = 0;
            boolean easy = true;

            for (int i = 0; i < N; i++) {
                char ch = s.charAt(i);

                if ("aeiou".indexOf(ch) != -1) {
                    count = 0;
                } else {
                    count++;

                    if (count >= 4) {
                        easy = false;
                        break;
                    }
                }
            }

            System.out.println(easy ? "YES" : "NO");
        }
    }
}