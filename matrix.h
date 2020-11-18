#include <iostream>

class matrix
{
    int row, column;
    int square;
    double **mac; 
    
    public:
    matrix(int,int);
    matrix(int);
    void set(int n,int m,double val);
    double get(int n,int m);
};