class Controlls
{
    public:
        /*int getDoors(char *drs, int countDrs); //get doors array*/
        /*int getMap(char **mp, int countMp1, int countMp2); //get map array*/
        int initCnt();
        int lookAround();
        /*int start(); //init XY*/
        int clearCnt();
        int x, y;
    private:
        /*char *pDoors;*/
        char **pMap;
        char **visArea;
        /*int countDrs; //count doors*/
        int countMp1; //count X
        int countMp2; //count Y
};
