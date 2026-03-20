// Sum of first n numbers using Recursion

#include <stdio.h>
int sum(int n) 
{
    if (n==0)
        return 0;           
    else
        return n + sum(n-1); 
}
int main() {
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    if (n<0) 
    {
        printf("Sum is not defined.\n");
    } else {
        int result=sum(n);
        printf("Sum of first %d natural numbers is: %d\n", n, result);
    }
    return 0;
}
