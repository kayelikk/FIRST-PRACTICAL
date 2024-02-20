#include <stdio.h>


int main(void)
{float pounds, kilograms;

int start, end , step;

printf("Enter the starting pounds weight:");
scanf("%d", &start);
printf("Enter the ending pounds weight:");
scanf("%d", &end);
printf("Enter the increment weight:");
scanf("%d", &step);
//print headline
printf("converting pounds to kilograms\n");
printf("\nPounds\tKilograms\n");
for (pounds = start; pounds<= end; pounds += step)
 {
    kilograms = pounds * 0.453592;
    printf("%6.2f\t\t%6.2f\n", pounds , kilograms);

 }

    return 0;
}
