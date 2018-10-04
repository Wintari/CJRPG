#include<iostream>
#define OUTSIZE 10

void Render(char **lvlmap){
    char outArr[OUTSIZE][OUTSIZE];
    for(int y = 0; y < OUTSIZE; y++)
        {
            for(int x = 0; x < OUTSIZE; x++)
            {
                outArr[y][x] = lvlmap[y][x];
            }
        }
     for(int y = 0; y < OUTSIZE; y++)
        {
            for(int x = 0; x < OUTSIZE; x++)
            {
                printf("%c", outArr[y][x]);
            }
            printf("\n");
        }

}
