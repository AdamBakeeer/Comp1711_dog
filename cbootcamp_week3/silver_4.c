#include <stdio.h>
int main() {
    int temp;
    printf("Enter temperature in celsius:\n");
    scanf("%d", &temp);

    if (temp >= -10 && temp <= 40)
    {
        printf("Temperature is withn range\n");
    }
    else
    {
        printf("Temperature is not within range\n");
    }
    
}