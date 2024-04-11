#include <stdio.h>
int main()
{ //Declare an array of integers
    int numbers [5];
  // initialize the array
      numbers[0] = 10;
      numbers[1] = 20;
      numbers[2] = 30;
      numbers[3] = 40;
      numbers[4] = 50;
   //Print the elements  of the array
    printf ("Elements of the array:");
    for (int i=0; i < 5; i++) {
        printf ("%d", numbers[i]);
    }

    return 0;

}
