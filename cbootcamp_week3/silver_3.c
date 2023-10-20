#include <stdio.h>

int main() {

int mark;

printf("Enter your mark:\n");
scanf ("%d", &mark);

if (mark<50)
{
    printf("You have failed");
}
else if (mark>=50 && mark<70)
{
    printf("You have passed");
}
else 
{
    printf("You have acheived a disctinction");
}
return 0;
}