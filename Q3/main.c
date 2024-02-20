#include <stdio.h>

int main(void)
{ int fahr, celsius;

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
    celsius= 5 * (fahr - 32) / 9;
    printf("%3d\t\t%6d\n", fahr, celsius);
    fahr = fahr + step;
 }
   return 0;
}












