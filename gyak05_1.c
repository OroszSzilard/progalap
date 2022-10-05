#include <stdio.h>
#include <stdlib.h>

#define MERET 5

int main() {

    int tomb[5];
    int tomb2[] = {0, 1, 2, 3, 4, 5, 6};

    for(int i = 0; i < MERET; i++) 
    {
        tomb[i] = 2*1;
    }

    int meret2 = sizeof(tomb2) / sizeof(int);

    for (int i = 0; i < meret2; i++){

        printf("A %d. elem: %d\n", i+1 , tomb[i]);

    }

    return 0;


}