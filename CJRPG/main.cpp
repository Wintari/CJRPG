#include"output.cpp"
#include"gameio.h"
#include"player.cpp"
#include<conio.h>
#include<stdlib.h>

using namespace std;
void onStart();
void onUpdate(levelMap *level, Player *player, Renderer *render);
int main()
{
    onStart();
    return 0;
}

void onStart()
{
    levelMap level1;
    Renderer render;
    Player player;

    level1.setMap(readMap(),0,0);
    doMemoryFree(readMap(),10);

    render.setOutMap(&level1);
    level1.setObject(1,1,'@');
    render.Render();
    onUpdate(&level1, &player, &render);
}

void onUpdate(levelMap *level, Player *player, Renderer *render){
    while(1)
    {
        level->setObject(player->getPlrX(),player->getPlrY(),' ');
        int movePlr = _getch();
        switch(movePlr)
        {
        case 119:
            if((level->getObject(player->getPlrX(),player->getPlrY()-1)) != '#')
                player->plrMove(0,-1);
            break;
        case 115:
            if((level->getObject(player->getPlrX(),player->getPlrY()+1)) != '#')
                player->plrMove(0,1);
            break;
        case 100:
            if((level->getObject(player->getPlrX()+1,player->getPlrY())) != '#')
                player->plrMove(1,0);
            break;
        case 97:
            if((level->getObject(player->getPlrX()-1,player->getPlrY())) != '#')
                player->plrMove(-1,0);
            break;
        default:
            break;
        }
        level->setObject(player->getPlrX(),player->getPlrY(),'@');
        system("cls");
        render->Render();
    }
}
