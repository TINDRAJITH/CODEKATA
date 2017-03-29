import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		 Scanner input = new Scanner (System.in);
        String word = input.nextLine();
        String reverse = "";
        for(int i=word.length()-1; i>=0; i--)
            reverse += word.charAt(i);
        System.out.println(reverse); 
	}
}
