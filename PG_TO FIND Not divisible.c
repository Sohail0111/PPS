#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", & a);

    if (a % 9 == 0)
        printf("Divisible by 9");
    else
        printf("Not divisible by 9");

    return 0;
}
