#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <string.h>


class matrix
{
    int row=0, column=0;
    double **mac; 
    
    public:
    matrix(std::string path);
    matrix(int r,int c);
    matrix(int r);
    
    void set(int n,int m,double val);
    double get(int n,int m);
    void add(matrix m2);
    void subtract(matrix m2);
    void multiply(matrix m2);
    int cols();
    int rows();
    void print();
    void store(std::string ,std::string );
  
};

