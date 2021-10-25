package com.app;

import java.util.Scanner;
 
public class NthPrimeNumberJava {
 
    public static void main(String args[]){
 
        Scanner in = new Scanner(System.in);
 
        System.out.println("Enter the value of n");
        int n= in.nextInt();
 
        int nthPrimeNumber = findNthPrimeNumber(n);
        System.out.println("Nth Prime Number is: "+nthPrimeNumber);
    }
 
    private static int findNthPrimeNumber(int n)
    {
        int count = 0, p_count = 0;
		     
	     	while (n != 0) {
		     	if (isPrime(count))
				       p_count++;
		
        if (p_count == n)
			       	break;

		     	count++;
		   }
	   	return count;
    	}
  
    public static boolean isPrime(int num) {
       if (num < 2)
		       	return false;

	     	for (int i = 2; i < num; i++) {
		         	if (num % i == 0) {
			        	return false;
			      }
        }
        return true;
    }
}

/*Output
Enter the value of n
8
Nth Prime Number is: 19
*/
