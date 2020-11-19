#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>

class matrix
{
    int row=0, column=0;
    double **mac; 
    
    public:
    matrix(int,int);
    matrix(int);
    void set(int n,int m,double val);
    double get(int n,int m);
    matrix add(matrix m2);
    matrix subtract(matrix m2);
    matrix multiply(matrix m2);
    int cols();
    int rows();
    void print();
    void store(string filename, string path);
    matrix(string path);
};