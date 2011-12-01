class Controlls()
{
    public:
        int putDoors(int *drs, int countDrs);
        int putMap(char **mp, int countMp);
    private:
        int *pDoors;
        char **pMap;

        int countDrs;
        int countMp;
};
