#include <stdio.h>

int main() 
{
     long a = 1;

     while (a > 0 ) {
          printf("a = %ld\n", a);
          a += 1;
     }

printf("After exiting the loop: a =%ld\n", a);

}