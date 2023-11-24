#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void intializearray(int a[3][4]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
        a[i][j] = rand() % 10;
        }
    }
}

void transposearray(int a[3][4], int b[4][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
                b[i][j] = a[j][i];
        }
    }
}

void printarr(int a[3][4]) {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void printArray(int a[4][3]) {
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t" , a[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int a[3][4];
    int b[4][3];

    srand(time(NULL));

    intializearray(a);

    transposearray(a, b);

    printf("before\n");
    printarr(a);

    printf("after\n");
    printArray(b);

    return 0;
}