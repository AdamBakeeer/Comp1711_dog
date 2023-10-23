#include <stdio.h>
int main() {
    int a;
    printf("Select one option 0 or 1 or 2 or 3 or 4\n");
    scanf("%d", &a);

    switch (a)
    {
        case 0:    printf("Option 0 was chosen\n");
        break;

        case 1:    printf("Option 1 was chosen\n");
        break;

        case 2:    printf("Option 2 was chosen\n");
        break;

        case 3:    printf("Option 3 was chosen\n");
        break;

        case 4:    printf("Option 4 was chosen\n");
        break;

        default:   printf("Error an invalid choice\n");
    }
}