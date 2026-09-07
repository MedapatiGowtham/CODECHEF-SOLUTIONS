import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            int K = sc.nextInt();
            StringBuilder ans = new StringBuilder();

            for (int i = 0; i < N; i++) {
                int A = sc.nextInt();

                if (A <= K) {
                    K -= A;
                    ans.append("1");
                } else {
                    ans.append("0");
                }
            }

            System.out.println(ans);
        }
    }
}