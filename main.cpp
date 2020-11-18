#include <iostream>
#include "matrix.cpp"
using namespace std;

int main()
{
    matrix macierz1(4,5);
    cout<<endl;
    matrix macierz2(5);
    macierz1.set(1,1,987.2);
    macierz2.set(2,3,-45.1);
    
    return 0;
}