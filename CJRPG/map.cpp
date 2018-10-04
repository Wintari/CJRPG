#include<iostream>
#define MAPSIZE 10

class levelMap
{
private:

    char worldMap[MAPSIZE][MAPSIZE];

public:

    char **getVisMap()
    {
        char **visMap = new char*[MAPSIZE];
        for(int i = 0; i < MAPSIZE;i++){
            visMap[i] = new char[MAPSIZE];
        }

        for(int y = 0; y < MAPSIZE; y++)
        {
            for(int x = 0; x < MAPSIZE; x++)
            {
                visMap[y][x] = worldMap[y][x];
            }
        }
        return visMap;
    }


    void setMap(char **arr, int party, int partx)
    {
        for(int y = (party*10); y < (party*10 + 10); y++)
        {
            for(int x = (partx*10); x < (partx*10 + 10); x++)
            {
                worldMap[y][x] = arr[y][x];
            }
        }
    }
};


