#include <stdio.h>
int foo (void *pmp);

int main()
{
    int i, j;
    int mp[3][3] = {1,2,3,4,5,6,7,8,9};
    void *pmp;
    //printf("%d ", mp[2][1]);
    foo( pmp );
    return 0;
}

int foo( void *pmp )
{
    int **mp;
    mp = (int **) pmp;
    printf("%d", mp[2][2]);
}
