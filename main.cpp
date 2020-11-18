#include <iostream>
#include "matrix.cpp"
using namespace std;

int main()
{
    matrix macierz1(4,5);
    matrix macierz2(5);

    macierz1.print();
    macierz2.print();

    macierz1.set(1,1,987.2);
    macierz1.set(2,2,67.21);
    macierz1.set(3,3,8.8);

    macierz2.set(2,3,-45.1);
    macierz1.print();
    macierz2.print();
    
    double pob1,pob2;
    pob1=macierz1.get(1,1);
    pob2=macierz2.get(2,3);

    double new_macierz[5][4];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            new_macierz[i][j]=rand()%100;
        }
    }

    int col1,col2,row1,row2;
    col1=macierz1.cols();
    row1=macierz1.rows();
    col2=macierz2.cols();
    row2=macierz2.rows();


    return 0;
}