import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        sc.nextLine();

        while (T-- > 0) {
            String s = sc.nextLine();
            String[] words = s.split(" ");

            for (int i = 0; i < words.length; i++) {
                String word = words[i];

                if (!word.equals(word.toUpperCase())) {
                    words[i] = Character.toUpperCase(word.charAt(0))
                            + word.substring(1).toLowerCase();
                }
            }

            System.out.println(String.join(" ", words));
        }
    }
}