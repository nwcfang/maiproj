#include <nwchuman.h>
class Controlls
{
    public:
        nwcHuman hmn;
        int getDoors(char *drs, int countDrs); //get doors array
        int getMap(char **mp, int countMp1, int countMp2); //get map array
        void* lookAround();
        int lookDoor(char door); //search next door
        int start(); //init XY
        int clear();
    private:
        char *pDoors;
        char **pMap;
        int countDrs; //count doors
        int countMp1; //count X
        int countMp2; //count Y
};
