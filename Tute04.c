/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
    int minimum(int no 1,int no 2);
    int maximum(int no 1,int no 2);
    int multiply(int no 1,int no 2);
int main()
{
    int no 1 , no 2;
    printf("Enter a value for no 1 :");
    scanf("%d", &no 1);
    printf("Enter a value for no 2 :");
    scanf("%d", &no 2);
    printf("%d", minimum(no 1, no 2));
    printf("%d", maximum(no 1, no 2));
    printf("%d", multiply(no 1, no 2));
    
    
    return 0;
}
minimum(int no 1, int no 2)
{
    if (no 1> no 2)
    {
        return no 2;
    }
    else
    {
        return no 1;
    }
}
maximum(in no 1, int no 2)
{
    if(no 1 > no 2)
    {
        return no 1;
    }
    else
    {
        return no 2;
    }    
    }
    multiply( int no 1, int no 2)
    {
        return no 1* no 2;
    }
}

