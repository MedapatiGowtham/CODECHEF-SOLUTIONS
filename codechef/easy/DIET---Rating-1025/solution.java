import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            int K = sc.nextInt();

            int protein = 0;
            int day = -1;

            for (int i = 1; i <= N; i++) {
                int A = sc.nextInt();
                protein += A;
                protein -= K;

                if (protein < 0 && day == -1) {
                    day = i;
                }
            }

            if (day == -1) {
                System.out.println("YES");
            } else {
                System.out.println("NO " + day);
            }
        }

        sc.close();
    }
}