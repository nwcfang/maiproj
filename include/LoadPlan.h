#ifndef PLAN_H
#define PLAN_H

//#include "qdebug.h"


#define PLANSIZE 30
#define INF 10000

class LoadPlan
{
public:
    char m[PLANSIZE][PLANSIZE];
    //char** M;
    LoadPlan(){}

    int LoadMap(const char* filename); // file
    char** getMap();
};



#endif // QDEBUG_H
