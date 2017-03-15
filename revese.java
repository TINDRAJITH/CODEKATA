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
		int b;
		Scanner s = new Scanner(System.in);
		a = s.nextLine();
	//	a = a.revese();
		String[] c = a.split(" ");
		String k ="";
     	for(b=0;b<c.length;b++)
		{
			String word = c[b];
			String j= "";
			for(int i = word.length()-1;i>=0;i--)
			{
			j=j+word.charAt(i);	
			}
		     k = k+j+" ";
		}
			System.out.println(k);
	}
}
