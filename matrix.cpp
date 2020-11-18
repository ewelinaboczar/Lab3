#include <iostream>
#include "matrix.h"

using namespace std;

matrix::matrix (int r, int c)
{
    row=r;
    column=c;
    mac=new double *[r];
    for(int i=0;i<r;i++)
    {
        mac[i]=new double [c];
        for(int j=0;j<c;j++)
        {
            mac[i][j]={0};
            cout<<mac[i][j]<<"\t";
        }
    cout<<endl;
    }
}

matrix::matrix (int s)
{
    square=s;
    mac=new double *[s];
    for(int i=0;i<s;i++)
    {
        mac[i]=new double [s];
        for(int j=0;j<s;j++)
        {
            mac[i][j]={0};
            cout<<mac[i][j]<<"\t";
        }
    cout<<endl;
    }
}

void matrix::set(int n,int m,double val)
{
    mac[n][m]={val};
    cout<<mac[n][m]<<endl;
}

double matrix::get(int n,int m)
{
    double pobrana_wartosc;
    pobrana_wartosc=mac[n][m];
    cout<<pobrana_wartosc<<endl;
}

