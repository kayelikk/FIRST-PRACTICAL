#include <stdio.h>



int main(void)

{   float fahr, celsius;
int start, end , step;

printf("Enter the stating Fahrenheit value:");
scanf("%d", &start);
printf("Enter the ending Fahrenheit value:");
scanf("%d", &end);
printf("Enter the increment value:");
scanf("%d", &step);
printf("converting Fahrenheit to celsius\n");
printf("Fahrenheit\tCelsius\n");
 fahr = start;
 while (fahr<= end) {
    celsius= (5.0/9.0) * (fahr - 32.0);
    printf("%3f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
 }

    return 0;
}
