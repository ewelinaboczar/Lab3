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
        }
    }
}

matrix::matrix (int r)
{
    row=r;
    column=r;
    mac=new double *[r];
    for(int i=0;i<r;i++)
    {
        mac[i]=new double [r];
        for(int j=0;j<r;j++)
        {
            mac[i][j]={0};
        }
    }
}

int matrix::cols()
{
    return column;
}

int matrix::rows()
{
    return row;
}

void matrix::print()
{
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
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
        n_mac[i]=new double [column];
        for(int j=0;j<column;j++)
        {
            n_mac[i][j]=mac[i][j]+nowa_macierz[i][j];
        } 
    }
    return n_mac;
}

double **matrix::subtract(double **nowa_macierz)
{
    double **n_mac;
    n_mac=new double *[row];
    
    for(int i=0;i<row;i++)
    {
        n_mac[i]=new double [column];
        for(int j=0;j<column;j++)
        {
            n_mac[i][j]=mac[i][j]-nowa_macierz[i][j];
        }
    }
    return n_mac;
}

double **matrix::multiply(double **nowa_macierz)
{
    double **n_mac;
    n_mac=new double *[row];
    
    for(int i=0;i<row;i++)
    {
        n_mac[i]=new double [column];
        for(int j=0;j<column;j++)
        {
            for(int k=0;k<row;k++)
            {
                n_mac[i][j]+=mac[i][k]*nowa_macierz[k][j];
            } 
        }
    }
    return n_mac;
}

