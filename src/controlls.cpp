#include "controlls.h"

#ifndef VISIONAREA
#define VISIONAREA 5
#endif

int Controlls::initCnt()
{
    visArea = new char *[VISIONAREA];
    for( int i = 0; i < VISIONAREA; ++ i )
        visArea[i] = new char [VISIONAREA];
    return 0;
}

//int Controlls::getDoors( char *drs, int countDrs )
//{
    //this->pDoors = drs;
    //this->countDrs = countDrs;
    //return 0;
//}

//int Controlls::getMap( char **mp, int countMp1, int countMp2 )
//{
    //this->pMap = mp;
    //this->countMp1 = countMp1;
    //this->countMp2 = countMp2;
    //return 0;
//}

//int Controlls::start()
//{
    //for( int i = 0; i < countMp1; ++ i )
        //for( int j = 0; j < countMp2; ++ j )
            //if( pMap[i][j] == pDoors[0] )
            //{
                //hmn.getX( i );
                //hmn.getY( j );
            //}
    //hmn.Init( VISIONAREA );
    //return 0;
//}

int Controlls::clearCnt()
{
    for (int i=0; i < VISIONAREA; ++i)
        delete [] visArea[i];
    delete [] visArea;
    return 0;
}

int Controlls::lookAround()
{
    int area = VISIONAREA / 2;
    int k1 = area, k2 = area;
    for( int i = 0; i < VISIONAREA; ++ i )
    {
        for( int j = 0; j < VISIONAREA; ++ j )
        {
            if( (hmn.y - k2 >= 0) && (hmn.x - k1 >= 0) )
            {
                visArea[i][j] = pMap[i - k1][j - k2];
            }
            else
            {
                visArea[i][j] = '*';
            }
            -- k2;
        }
        -- k1;
        k2 = area;
    }
    return 0;
}
