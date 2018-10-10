#include<iostream>
#include"map.cpp"
#define OUTSIZE 10
class Renderer
{
private:
    levelMap *level;
public:

    void setOutMap(levelMap *getLevel)
    {
        level = getLevel;
    }
    void Render()
    {
        for(int y = 0; y < OUTSIZE; y++)
        {
            for(int x = 0; x < OUTSIZE; x++)
            {
                printf("%c ", level->getObject(x,y));
            }
            printf("\n");
        }
    }
};
