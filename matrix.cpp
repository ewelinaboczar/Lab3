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

matrix::matrix (int r)
{
    row=r;
    mac=new double *[r];
    for(int i=0;i<r;i++)
    {
        mac[i]=new double [r];
        for(int j=0;j<r;j++)
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
    cout<<"Pobrano wartosc: "<<mac[n][m]<<endl;
    return mac[n][m];
}

double **matrix::add(double **nowa_macierz)
{
    double **n_mac;
    n_mac=new double *[row];
    
    for(int i=0;i<row;i++)
    {
        if(column!=0)
        {
            n_mac[i]=new double [column];
            for(int j=0;j<column;j++)
            {
                n_mac[i][j]=mac[i][j]+nowa_macierz[i][j];
            }
        }
        else
        {
            n_mac[i]=new double [row];
            for(int j=0;j<row;j++)
            {
                n_mac[i][j]=mac[i][j]+nowa_macierz[i][j];
            }
        }
        
    }
    return n_mac;
}