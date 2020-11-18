#include <iostream>
#include "matrix.cpp"
using namespace std;

int main()
{
    matrix macierz1(4,5);
    matrix macierz2(5);

    macierz1.set(1,1,987.2);
    macierz1.set(2,2,67.21);
    macierz1.set(3,3,8.8);

    macierz2.set(2,3,-45.1);

    double pob1,pob2;
    pob1=macierz1.get(1,1);
    pob2=macierz2.get(2,3);

    double new_macierz[4][5];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            new_macierz[i][j]=rand()%100;
        }
    }

    

    return 0;
}