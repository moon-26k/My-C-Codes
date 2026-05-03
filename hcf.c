#include <stdio.h>
int main() {
    int num1, num2, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int a = num1, b = num2;
    while (b != 0) {
        int i = b;
        b = a % b;
        a = i;
    }
    hcf = a;
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
