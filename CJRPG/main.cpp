#include"map.cpp"
#include"gameio.h"
using namespace std;

int main(){
    levelMap level1;
    level1.setMap(readMap(),0,0);
    doMemoryFree(readMap(),10);
    Render(level1.getVisMap());
    doMemoryFree(level1.getVisMap(),10);
    return 0;
}
