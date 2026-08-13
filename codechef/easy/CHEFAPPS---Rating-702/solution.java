import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the number of test cases
        if (!scanner.hasNextInt()) return;
        int t = scanner.nextInt();

        while (t-- > 0) {
            int s = scanner.nextInt();
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int z = scanner.nextInt();

            // Calculate free memory currently available
            int freeMemory = s - (x + y);

            // Check how much additional memory is needed
            int neededMemory = z - freeMemory;

            if (neededMemory <= 0) {
                // No apps need to be deleted
                System.out.println(0);
            } else if (neededMemory <= Math.max(x, y)) {
                // Deleting the app that takes up more space (or the other one) is sufficient
                System.out.println(1);
            } else {
                // Both apps must be deleted
                System.out.println(2);
            }
        }
        
        scanner.close();
    }
}