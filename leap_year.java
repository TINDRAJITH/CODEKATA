import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) 
	{
		// your code goes here
		int a;
		Scanner s = new Scanner(System.in);
		a = s.nextInt();
		if(a%400 == 0)
		System.out.println("leap year");
		else if((a%4==0)&&(a%100!=0))
		System.out.println("leap year");
		else
		System.out.println("not leap year");
	}
}
