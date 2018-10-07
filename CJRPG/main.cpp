#include"map.cpp"
#include"output.cpp"
#include"gameio.h"
#include"player.cpp"
#include<conio.h>
#include<stdlib.h>
using namespace std;
void onStart();
int main(){
    onStart();
    return 0;
}

void onStart(){
    levelMap level1;
    Renderer render;
    Player player;
    level1.setMap(readMap(),0,0);
    doMemoryFree(readMap(),10);
    render.setOutMap(level1.getMap());
    doMemoryFree(level1.getMap(),10);

    render.setPlrOut();
    render.Render();

    while(1){
        int movePlr = _getch();
        switch(movePlr){
            case 119:
                if((level1.getObject(player.getPlrX(),player.getPlrY()-1)) != '#')
                    player.plrMove(0,-1);
                break;
            case 115:
                if((level1.getObject(player.getPlrX(),player.getPlrY()+1)) != '#')
                    player.plrMove(0,1);
                break;
            case 100:
                if((level1.getObject(player.getPlrX()+1,player.getPlrY())) != '#')
                    player.plrMove(1,0);
                break;
            case 97:
                if((level1.getObject(player.getPlrX()-1,player.getPlrY())) != '#')
                    player.plrMove(-1,0);
                break;
            default:
                break;
            }
        system("cls");
        render.setPlrOut(player.getPlrX(),player.getPlrY());
        render.Render();
    }
}
