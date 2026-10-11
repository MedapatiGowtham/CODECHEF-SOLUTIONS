import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String S = br.readLine();
        if (S == null) return;
        
        int[] freq = new int[26];
        for (int i = 0; i < S.length(); i++) {
            char c = S.charAt(i);
            if (c >= 'a' && c <= 'z') {
                freq[c - 'a']++;
            } else if (c >= 'A' && c <= 'Z') {
                freq[c - 'A']++;
            }
        }
        
        int maxFreq = 0;
        char bestLetter = 'a';
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                bestLetter = (char) ('a' + i);
            }
        }
        System.out.println(bestLetter);
    }
}