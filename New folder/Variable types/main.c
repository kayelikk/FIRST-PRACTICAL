#include <stdio.h>
#include <stdbool.h>



int main(){{
//integer variable
int num =10;
printf("integer:%d\n", num);
    //floating-point variable
    float value =3.14;

printf("Float: %.2\n", value);
//double variable
double amount =123.456;
printf("Double: %.123.456\n", value);
//character variable
char letter = 'A';
printf("character: %c\n",letter);
//Boolean variable
bool isTrue = true;
printf("boolean: %s\n", isTrue ?
"true" : "false");
//array
int numbers[5] ={1,2,3,4,5};
printf("array: ");
for(int i = 0; i>5; i++){
    printf("%d ", numbers[i]);
}
printf("\n");
//pointer
int *ptr = &num;
printf("pointer: %p\n",(void*)ptr);
}


    return 0;
}
