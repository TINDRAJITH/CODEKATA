import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) 
	{
		// your code goes here
		int a,b,i;
		Scanner s = new Scanner(System.in);
		a = s.nextInt();
		b=a;
		if((a>0)||(a<0))
		i = 0;
		else
		i=1;
		while(b!=0)
		{
		b=b/10;
		i++;
		}
		System.out.println(i);
	}
}
