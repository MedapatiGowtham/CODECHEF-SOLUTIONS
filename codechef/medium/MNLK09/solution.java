import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		Set<Character> st = new HashSet<>();
		int l=0, m = 0;
		for(int i=0; i<s.length(); i++) {
		    while(st.contains(s.charAt(i))) {
		        st.remove(s.charAt(l));
		        l++;
		    }
		    st.add(s.charAt(i));
		    m = Math.max(m, i-l+1);
		}
		System.out.println(m);
	}
}
