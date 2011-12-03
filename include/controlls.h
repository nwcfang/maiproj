#include <human.h>
class Controlls
{
    public:
        Human hmn;
        int getDoors(char *drs, int countDrs); //get doors array
        int getMap(char **mp, int countMp1, int countMp2); //get map array
        int lookDoor(char door); //search next door
        int start(); //init XY
    private:
        char *pDoors;
        char **pMap;
        int countDrs; //count doors
        int countMp1; //count X
        int countMp2; //count Y
};
