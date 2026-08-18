class Solution {
    public String maximumFrequency(String s) {

        HashMap<String, Integer> map = new HashMap<>();
        String[] words = s.split(" ");
        for (String word : words) 
        {
            map.put(word, map.getOrDefault(word, 0) + 1);
        }

        String ans = words[0];
        int maxFreq = map.get(words[0]);
        for (String word : words)
        {
            if (map.get(word) > maxFreq) 
            {
                maxFreq = map.get(word);
                ans = word;
            }
        }

        return ans + " " + maxFreq;
    }
}