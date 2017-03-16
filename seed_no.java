import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int a;
		Scanner s = new Scanner(System.in);
		a = s.nextInt();
		for(int i=0;i<=a;i++)
		{
			int b = i;
			int c = b;
			while(b!=0)
			{
				int d = b%10;
				c=c*d;
				b=b/10;
			}
			if(c==a)
			{
				System.out.println(i);
			}
		}
	}
}
