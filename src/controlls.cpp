#include <controlls.h>
#ifndef VISIONAREA
#define VISIONAREA 5
#endif
int Controlls::getDoors( char *drs, int countDrs )
{
    this->pDoors = drs;
    this->countDrs = countDrs;
    return 0;
}

int Controlls::getMap( char **mp, int countMp1, int countMp2 )
{
    this->pMap = mp;
    this->countMp1 = countMp1;
    this->countMp2 = countMp2;
    return 0;
}

int Controlls::lookDoor(char door)
{
    //empty
    return 0;
}

int Controlls::start()
{
    for( int i = 0; i < countMp1; ++ i )
        for( int j = 0; j < countMp2; ++ j )
            if( pMap[i][j] == pDoors[0] )
            {
                hmn.getX( i );
                hmn.getY( j );
            }
    hmn.Init( VISIONAREA );
    return 0;
}

int Controlls::clear()
{
    hmn.Clear( VISIONAREA );
}

int Controlls::lookAround();
{
    
}
