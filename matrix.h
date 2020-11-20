#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

class matrix
{
    int row=0, column=0;
    double **mac; 
    
    public:
    matrix(string path);
    matrix(int,int);
    matrix(int);
    
    void set(int n,int m,double val);
    double get(int n,int m);
    void add(matrix m2);
    void subtract(matrix m2);
    void multiply(matrix m2);
    int cols();
    int rows();
    void print();
    void store(string ,string );
    
    
};

