import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args) 
	{
		// your code goes here
		int a,b,c;
		Scanner s = new Scanner(System.in);
		a = s.nextInt();
		b = s.nextInt();
		c = s.nextInt();
	if(a!=0||b!=0||c!=0)
	{
		if((a>b)&&(a>c))
		System.out.println(a);
		else if(b>c)
		System.out.println(b);
		else
		System.out.println(c);
	}
	else
		System.out.println("all the numbers are zero");
	}
}
