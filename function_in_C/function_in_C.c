/*Object
In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements grouped together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something. 

Before going forward towards the Question and the solution let me explain to you briefly “ What are functions in C programming language ? ” and about syntax of functions in C that will make you learn “ how to build and use functions in C programming ”

So, let’s get started.

FUNCTIONS IN C PROGRAMMING  
Functions are collections of many statements that are defined in a same block of code to perform any specific task.

SYNTAX OF FUNCTIONS IN C
return_type function_name (argument_type1 first, argument_type2 second,…..arg_tn n)

{
 . . . . . . . . . . 
 . . . . . . . . . .
B l o c k   o f   c o d e
. . . . . . . . . . .
. . . . . . . . . . .
return statement ; 

}

For example, Consider this following addition function :

int sum (int a, int b, int c, int d)
{

 int sum = 0;
 sum = a + b + c + d;
 return sum;

}
Now, let’s proceed to the question :

Task
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note: There is no built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

Input Format
Input will contain four integers – a,b,c,d, one on each line.

Output Format
Print the greatest of the four integers.

Note: I/O will be automatically handled.*/

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}