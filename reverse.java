import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes 
			String a;
		int b;
		Scanner s = new Scanner(System.in);
		a = s.nextLine();
	//	a = a.revese();
		String[] c = a.split(" ");
		String k ="";
     	for(b=0;b<c.length;b++)
		{
			StringBuffer word = new StringBuffer(c[b]);
			String j= "";
			if((b+1)%2==0)
			{
				word =word.reverse();
			}
			for(int i = word.length()-1;i>=0;i--)
			{
			j=j+word.charAt(i);	
			}
		     k = k+j+" ";
		}
System.out.println(k);
	}
}
