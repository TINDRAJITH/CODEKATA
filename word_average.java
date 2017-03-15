import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) 
	{
		// your code goes here
		String a;
		int b,i=0;
		Scanner s = new Scanner(System.in);
		a = s.next();
		char[] c = a.toCharArray();
		for(b=0;b<c.length;b++)
		{
		i=i+c[b];
		}
		i=i/c.length;
		char j = (char)i;
		System.out.println(j);
	}
}
