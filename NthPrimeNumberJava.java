package com.app;
 
import java.util.Scanner;
 
public class NthPrimeNumberJava {
 
    public static void main(String args[]){
 
        Scanner in = new Scanner(System.in);
 
        //Input the value of 'n'
        System.out.println("Enter the value of n");
        int n= in.nextInt();
 
        int nthPrimeNumber = findNthPrimeNumber(n);
        System.out.println("Nth Prime Number is: "+nthPrimeNumber);
    }
 
    private static int findNthPrimeNumber(int n)
    {
        if(n==1)
        {
            return 2;
        }
 
        int i=1;
        int count=1;
        //While loop should run until we find nth prime number i.e (count != n)
        while(count != n){
            // increment number by 2 as even numbers are always not prime
            i+=2;
 
            if(isPrime(i))
                count++;  // increment the count when we get prime number
        }
        // return nth prime number
        return i;
    }
 
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
 
import java.util.Scanner;
 
public class NthPrimeNumberJava {
 
    public static void main(String args[]){
 
        Scanner in = new Scanner(System.in);
 
        //Input the value of 'n'
        System.out.println("Enter the value of n");
        int n= in.nextInt();
 
        int nthPrimeNumber = findNthPrimeNumber(n);
        System.out.println("Nth Prime Number is: "+nthPrimeNumber);
    }
 
    private static int findNthPrimeNumber(int n)
    {
        if(n==1)
        {
            return 2;
        }
 
        int i=1;
        int count=1;
        //While loop should run until we find nth prime number i.e (count != n)
        while(count != n){
            // increment number by 2 as even numbers are always not prime
            i+=2;
 
            if(isPrime(i))
                count++;  // increment the count when we get prime number
        }
        // return nth prime number
        return i;
    }
 
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}

/*Output:
Enter the value of n
24
Nth Prime Number is: 89
*/
