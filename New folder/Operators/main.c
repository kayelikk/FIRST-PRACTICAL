#include <stdio.h>


int main()
{
    int a = 20, b = 5;
    int result;
    //arithmetic operator
    result = a + b;
    printf("addition: %d\n", result);

    result  = a  - b;
    printf("subtraction: %d\n" ,result);

    result = a * b;
    printf("multiplication: %d\n" ,result);

    result = a / b;
    printf("division: %d\n" ,result);

    result = a % b;
    printf("modulus: %d\n" ,result);

    //increment and decrement operators
    int x = 5;
    printf("original value of x: %d\n", x);
    x++;
    printf("after increment: %d\n" , x);
    x--;
    printf("after decrement: %d\n" , x);
    return 0;
}
