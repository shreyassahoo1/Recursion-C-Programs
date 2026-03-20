// Power of a number using Recursion.

#include <stdio.h>
int power(int a, int b) {
    if (b==0)
        return 1;               
    else
        return a*power(a, b-1); 
}
int main() {
    int a, b;
    printf("Enter the base number: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);

    if (b<0) {
        printf("The power must be a positive value.\n");
    } else {
        int result = power(a, b);
        printf("%d raised to the power of %d is: %d\n", a, b, result);
    }
    return 0;
}
