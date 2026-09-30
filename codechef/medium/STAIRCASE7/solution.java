import java.util.*;
class Main {
    public static int stairCase(int arr[], int n) {
        HashMap<Integer, Integer> hm = new HashMap<>();
        int freq = 0;
        for(int i=0; i<n; i++) {
            int value = arr[i] - i;
            int count = hm.getOrDefault(value, 0)+1;
            hm.put(value, count);
            freq = Math.max(freq, count);
        }
        return n-freq;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i=0; i<n; i++) {
                arr[i] = sc.nextInt();
            }
            System.out.println(stairCase(arr, n));
        }
    }
}