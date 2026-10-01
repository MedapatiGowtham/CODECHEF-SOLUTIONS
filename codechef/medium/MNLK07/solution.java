import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a = 0;
		int b = 1;
		if(n == 1) {
		    System.out.println(a);
		} else {
		    for(int i=2; i<=n; i++) {
		        int c = a+b;
		        a = b;
		        b = c;
		    }
		    System.out.println(a);
		}
	}
}
