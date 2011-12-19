#include "LoadPlan.h"
#include <stdio.h>

// ������� ��������� ���� ���������� ���� ��������
// ������ ��������� filename ���� � ����� � ��� �����
// ������������ ��������:
//  0 - �������� ����������
// -1 - ������
int LoadPlan::LoadMap(const char* filename)
{
    FILE* f;

    for(int i = 0 ; i<PLANSIZE ;i++)
        for(int j = 0 ; j<PLANSIZE ;j++)
        { m[i][j] = 0;}
    if((f = fopen(filename,"r"))== NULL) return -1;
    for(int i = 0 ;i<PLANSIZE;i++)
        fgets(m[i],30,f);

    fclose(f);

    return 0;
}


char** LoadPlan::getMap()
{

   char ** F ;
    F = new char*[PLANSIZE];
    for(int i =0; i<PLANSIZE;i++)
        F[i]= new char[PLANSIZE];
    for(int i =0; i<PLANSIZE;i++)
        for(int j =0; j<PLANSIZE;j++)
            F[i][j] = m[i][j];

    return F;

}

