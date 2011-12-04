#include <human.h>
int Human::Init( int vision )
{
    visArea = new int *[vision];
    for( int i = 0; i < vision; ++ i )
        visArea[i] = new int [vision];
}

int Human::Clear( int vision )
{
    for (int i=0; i < vision; ++i)
        delete [] visArea[i];

    delete [] visArea;
}
int Human::getX(int x)
{
    this->x = x;
}

int Human::getY(int y)
{
    this->y = y;
}
