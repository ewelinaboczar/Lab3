#include "matrix.h"

using namespace std;

matrix::matrix (int r, int c)
{
    if(r<=0 && c<=0)
    {
        cout<<"Podales zle wymiary macierzy"<<endl;
    }
    else
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
}

matrix::matrix (int r)
{
    if(r<=0)
    {
        cout<<"Podales zle wymiary macierzy"<<endl;
    }
    else
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
    cout<<"\n";
}

void matrix::set(int n,int m,double val)
{
    if(n<1 && n>row && m<1 && m>column)
    {
        cout<<"Podana wspolrzedna macierzy nie istnieje";
    }
    else
    {
        mac[n-1][m-1]=val;
    }
}

double matrix::get(int n,int m)
{
    if(n<1 && n>row && m<1 && m>column)
    {
        cout<<"Podana wspolrzedna macierzy nie istnieje";
        return 0;
    }
    else
    {
        return mac[n-1][m-1];
    }
    
}

void matrix::add(matrix m2)
{
    matrix add(rows(),cols());
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            add.mac[i][j]=mac[i][j]+m2.mac[i][j];
        } 
    }
    add.print();
}

void matrix::subtract(matrix m2)
{
    matrix new_mac(rows(),cols());
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            new_mac.mac[i][j]=mac[i][j]-m2.mac[i][j];
        }
    }
    new_mac.print();
}

void matrix::multiply(matrix m2)
{
    
    matrix mull(rows(),m2.cols());

    for(int i=0;i<rows();i++)
    {
        for(int j=0;j<m2.cols();j++)
         {
            double multiplication=0;
            for(int k=0;k<cols();k++)
            {
                multiplication+=mac[i][k]*m2.mac[k][j];
            }
            mull.mac[i][j]=multiplication;
        }
    }
    mull.print();
    
}

void matrix::store(string filename, string path)
{
    path += "\\" + filename;
    ofstream  file(path);

    file << row << "\t" << column << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++ )
        {
            int wart=mac[i][j];
            file <<wart<< "\t";
        }
        file << endl;
    }
    file.close();
}

matrix::matrix(string path)
{
    ifstream file(path,ios::in);
    if(file.good()!=0)
    {
        cout << "Blad otwarcia pliku" << endl;
    }

    file >> row;
    file >> column;

    for(int i =0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            file >> mac[i][j];
        }
    }
    file.close();
}