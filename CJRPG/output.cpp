#include<iostream>
#define OUTSIZE 10
class Renderer{
    private:
    char outArr[OUTSIZE][OUTSIZE];
    char outMap[10][10];
    int plrX, plrY;
    public:
    void setPlrOut(int x=1, int y=1){
        plrX = x;
        plrY = y;
    }
    void setOutMap(char **lvlmap){
        for(int y = 0; y < OUTSIZE; y++)
        {
            for(int x = 0; x < OUTSIZE; x++)
            {
                outMap[y][x] = lvlmap[y][x];
            }
        }
    }
    void Render(){
        for(int y = 0; y < OUTSIZE; y++)
        {
            for(int x = 0; x < OUTSIZE; x++)
            {
                outArr[y][x] = outMap[y][x];
            }
        }
        outArr[plrY][plrX] = 64;
        for(int y = 0; y < OUTSIZE; y++)
        {
            for(int x = 0; x < OUTSIZE; x++)
            {
                printf("%c ", outArr[y][x]);
            }
        printf("\n");
        }
    }
};
