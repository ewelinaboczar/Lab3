#include <iostream>

class matrix
{
    int row=0, column=0;
    double **mac; 
    
    public:
    matrix(int,int);
    matrix(int);
    void set(int n,int m,double val);
    double get(int n,int m);
    double **add(double **nowa_macierz);
    double **subtract(double **nowa_macierz);
    double **multiply(double **nowa_macierz);
    int cols();
    int rows();
    void print();
};