// Reverse String using Recursion

#include <stdio.h>
#include <string.h>
void reverse(char *str, int i) {
    int len = strlen(str);

    if (i >= len/2)
        return;
    // swapping the characters
    char temp = str[i];
    str[i] = str[len-1-i];
    str[len-1-i] = temp;

    reverse(str, i+1);
}
int main() {
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    reverse(str, 0);
    printf("Reversed string is: %s\n", str);
    return 0;
}
