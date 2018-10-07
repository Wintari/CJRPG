#include<iostream>
#define MAPSIZE 10

class levelMap
{
private:

    char worldMap[MAPSIZE][MAPSIZE];

public:

    char **getMap()
    {
        char **Map = new char*[MAPSIZE];
        for(int i = 0; i < MAPSIZE;i++){
            Map[i] = new char[MAPSIZE];
        }

        for(int y = 0; y < MAPSIZE; y++)
        {
            for(int x = 0; x < MAPSIZE; x++)
            {
                Map[y][x] = worldMap[y][x];
            }
        }
        return Map;
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

    char getObject(int x, int y){
        return worldMap[y][x];
    }
};


