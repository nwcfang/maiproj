#include <nwchuman.h>
int nwcHuman::Init( int vision )
{
    visArea = new char *[vision];
    for( int i = 0; i < vision; ++ i )
        visArea[i] = new char [vision];
}

int nwcHuman::Clear( int vision )
{
    for (int i=0; i < vision; ++i)
        delete [] visArea[i];

    delete [] visArea;
}
int nwcHuman::getX(int x)
{
    this->x = x;
}

int nwcHuman::getY(int y)
{
    this->y = y;
}
