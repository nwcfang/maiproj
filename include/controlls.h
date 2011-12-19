#ifndef CONTROLLS_H
#define CONTROLLS_H
#include "human.h"
class Controlls
{
    public:
        int initCnt();
        int lookAround();
        int clearCnt();
        Human hmn;
        //int x, y;
        /*int getDoors(char *drs, int countDrs); //get doors array*/
        /*int getMap(char **mp, int countMp1, int countMp2); //get map array*/
        /*int start(); //init XY*/
    private:
        char **pMap;
        char **visArea;
        int countMp1; //count X
        int countMp2; //count Y
        /*int countDrs; //count doors*/
        /*char *pDoors;*/
};
#endif
