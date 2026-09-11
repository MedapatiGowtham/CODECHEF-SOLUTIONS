import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the number of test cases
        if (!scanner.hasNextInt()) return;
        int t = scanner.nextInt();

        while (t-- > 0) {
            // Read X (prize pool multiplier)
            int x = scanner.nextInt();
            
            // Read the match results string
            String s = scanner.next();
            
            int carlsenPoints = 0;
            int chefPoints = 0;
            
            // Calculate points for each game
            for (int i = 0; i < s.length(); i++) {
                char outcome = s.charAt(i);
                if (outcome == 'C') {
                    carlsenPoints += 2;
                } else if (outcome == 'N') {
                    chefPoints += 2;
                } else {
                    // Draw: both get 1 point
                    carlsenPoints += 1;
                    chefPoints += 1;
                }
            }
            
            // Determine the prize money based on points
            if (carlsenPoints > chefPoints) {
                System.out.println(60 * x);
            } else if (carlsenPoints == chefPoints) {
                System.out.println(55 * x);
            } else {
                System.out.println(40 * x);
            }
        }
        
        scanner.close();
    }
}