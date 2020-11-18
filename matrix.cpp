#include <iostream>
#include "matrix.h"

using namespace std;

matrix::matrix (int r, int c)
{
    row=r;
    column=c;
    m1=new double *[r];
    for(int i=0;i<r;i++)
    {
        m1[i]=new double [c];
        for(int j=0;j<c;j++)
        {
            m1[i][j]={0};
            cout<<m1[i][j];
        }
    cout<<endl;
    }
}

matrix::matrix (int s)
{
    square=s;
    m2=new double *[s];
    for(int i=0;i<s;i++)
    {
        m2[i]=new double [s];
        for(int j=0;j<s;j++)
        {
            m2[i][j]={0};
            cout<<m1[i][j];
        }
    cout<<endl;
    }
}