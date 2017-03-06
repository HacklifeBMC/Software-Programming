import java.util.*; 
//Christian BASUBI
//CSCI 2113
//Lab 5
/*Write a program that plays children's game of Fizz Buzz described: 
Fizz buzz is a group word game for children to teach them about division.
Players take turns to count incrementally, 
replacing any number divisible by three with the word "fizz", 
and any number divisible by five with the word "buzz"
*/

public class FizzBuzz {

    public static void main (String args [])
    {

        // We will be using a for loop
        for (int i = 1; i <= 20; i++)
        {
            boolean fizzOrBuzz = false; 

            if (i % 3 == 0){
                System.out.println("Fizz"); 
                fizzOrBuzz = true; 
            }

            if (i % 5 == 0){
                System.out.println("Buzz"); 
                fizzOrBuzz = true;  
            }

    if (fizzOrBuzz) {
                System.out.println(); 
            } else {
                System.out.println(String.valueOf(i)); 
            }
        } 
    }
}