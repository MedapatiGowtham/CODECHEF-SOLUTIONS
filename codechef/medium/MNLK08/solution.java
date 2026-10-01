class Solution {

    public List<List<Integer>> primeFactorization(int[] numbers) {
        // write your code here 
        List<List<Integer>> li = new ArrayList<>();
        if(li == null) {
            return li;
        }
        for(int x : numbers) {
            List<Integer> find = new ArrayList<>();
            int t = x;
            while(t%2 == 0) {
                find.add(2);
                t = t/2;
            }
            for(int i=3; (long)i*i<=t;i=i+2) {
                while(t%i == 0) {
                    find.add(i);
                    t = t/i;
                }
        }
        if(t > 1) {
            find.add(t);
        }
        li.add(find);
    }
    return li;
}
}
