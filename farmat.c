import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args)
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		int count=0,sum=0,sum1=1,sum2=0;
		char b[]=str.toCharArray();
		int a[]=new int[10];
		for(int i=0;i<b.length;i++)
		{
			
			if(b[i]>='0'&&b[i]<='9')
			{
				a[count]=b[i]-'0';
			//	System.out.println(a[count]);
				count++;
			}
		}
	//	System.out.println(count);
	//	System.out.println(a.length);
		int max = a[0];
		int min = a[0];
		for(int i=0;i<count;i++)
		{
			if(a[i]>max)
			max=a[i];
			if(a[i]<min)
			min=a[i];
		}
		//System.out.println(max+" "+min);
		for(int i=0;i<count;i++)
		{
			sum=sum+(a[i]*max);
			sum1=sum1*(a[i]+min);
		}
		do
		{
			while(sum>0)
			{
				sum2=sum2+(sum%10);
				sum=sum/10;
			}
			sum=sum2;
			sum2=0;
			while(sum1>0)
			{
				sum2=sum2+(sum1%10);
				sum1=sum1/10;
		}
		sum1=sum2;
		sum2=0;
		}while((sum>9)||(sum1>9));
	if(sum>sum1)
	System.out.println("Sum:"+sum1*sum1);
	else
	System.out.println("Sum:"+sum*sum);
	
}
}
