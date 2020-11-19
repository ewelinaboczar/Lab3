#include "matrix.h"

using namespace std;

matrix::matrix (int r, int c)
{
    if(r<=0 && c<=0)
    {
        cout<<"Podales zle wymiary macierzy"<<endl;
        exit(0);
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
        exit(0);
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
}

void matrix::set(int n,int m,double val)
{
    mac[n][m]={val};
}

double matrix::get(int n,int m)
{
    return mac[n][m];
}

matrix matrix::add(matrix m2)
{
    if(row != m2.rows() && column != m2.cols())
    {
        cout<<"Nie mozna dodac tych macierzy, maja inne wymiary!"<<endl;
        return 0;
    }
    matrix add(column,row);
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<row;j++)
        {
            double sum=0;

            sum= mac[i][j]+m2.get(i,j);
            add.matrix::set(i,j,sum);
        } 
    }
    return add;
}

matrix matrix::subtract(matrix m2)
{
    if(row != m2.rows() && column != m2.cols())
    {
        cout<<"Nie mozna odjac tych macierzy, maja inne wymiary!"<<endl;
        return 0;
    }
    
    matrix new_mac(column,row);
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<row;j++)
        {
            double wynik_odejm=0;

            wynik_odejm=mac[i][j]-m2.get(i,j);
            new_mac.matrix::set(i,j,wynik_odejm);
        }
    }
    return new_mac;
}

matrix matrix::multiply(matrix m2)
{
    if(m2.rows() != column)
    {
        cout<<"Nie mozna pomnozyc tych macierzy!"<<endl;
        return 0;
    }

    matrix new_mac(column,m2.rows());
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<m2.rows();j++)
        {
            double multiplication=1;
            for(int k=0;k<row;k++)
            {
                multiplication+=mac[i][j]*m2.matrix::get(k,j);
            }
            new_mac.matrix::set(i,j,multiplication);
        }
    }
    return new_mac;
}

void matrix::store(string filename, string path)
{
    ofstream  file;

    path += "\\" + filename;
    file.open(path, ios_base::out);
    if( !file.good() )
    {
        cout << "Blad otwarcia pliku" << endl;
        exit(0);
    }

    file << row << "\t" << column << endl;
    for(int i=0; i<column; i++)
    {
        for(int j=0; j<row; j++ )
            file <<mac[i][j] << "\t";
        file << endl;
    }

    file.close();
}

matrix::matrix(string path)
{
    ifstream file;
    file.open(path);
    if(file.good()!=0)
    {
        cout << "Blad otwarcia pliku" << endl;
        exit(0);
    }

    file >> column;
    file >> row;

    for(int i =0; i<column; i++)
    {
        for(int j=0; j<row; j++)
        {
            file >> mac[i][j];
        }
    }
    file.close();
}