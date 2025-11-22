#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter num1");
    scanf("%d",& num1);

    printf("Enter num2");
    scanf("%d",& num2);

    int sum = num1 + num2;
    printf("Sum is %d\n",sum);

    int difference = num1 - num2;
    printf("Difference is %d\n",difference);

    int product = num1 * num2;
    printf("Product is %d\n",product);

    return 0;

}