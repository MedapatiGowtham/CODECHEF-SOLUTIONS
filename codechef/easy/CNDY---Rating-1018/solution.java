import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            HashMap<Integer, Integer> map = new HashMap<>();

            boolean possible = true;

            for (int i = 0; i < 2 * N; i++) {
                int x = sc.nextInt();
                map.put(x, map.getOrDefault(x, 0) + 1);

                if (map.get(x) > 2) {
                    possible = false;
                }
            }

            System.out.println(possible ? "Yes" : "No");
        }
    }
}