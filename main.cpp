#include <iostream>
#include "matrix.cpp"
using namespace std;

int main()
{
    int w,k;
    cout<<"Podaj wymiary macierzy:"<<endl;
    cout<<"Podaj ilosc wierszy:";
    cin>>w;
    cout<<"Podaj ilosc kolumn:";
    cin>>k;

    matrix macierz1(w,k);
    matrix macierz2(w);
    
    cout<<"Menu:"<<endl;
    cout<<"0. Koniec"<<endl;
    cout<<"1. Pokaz macierz na ekranie"<<endl;
    cout<<"2. Dodaj element macierzy"<<endl;
    cout<<"3. Pobierz element macierzy"<<endl;
    cout<<"4. Dodaj macierze"<<endl;
    cout<<"5. Odejmij macierze"<<endl;
    cout<<"6. Pomnoz macierze"<<endl;
    cout<<"7. Ilosc wierszy macierzy"<<endl;
    cout<<"8. Ilosc kolumn macierzy"<<endl;
    cout<<"Wybierz co chcesz zrobic"<<endl;

    int number;
    cin>>number;

    switch (number)
    {
    case 0:
        break;
    case 1:
        macierz1.print();
        macierz2.print();
        break;
    case 2:
        int n,m;
        double val;
        cout<<"W jakim miejscu macierzy chcesz dodac element?"<<endl;
        cout<<"Podaj wiersz:"<<endl;
        cin>>n;
        cout<<"Podaj kolumne:"<<endl;
        cin>>m;
        cout<<"Podaj wartosc tego elementu:"<<endl;
        cin>>val;
        macierz1.set(n,m,val);
        macierz2.set(n,m,val);
        break;
    case 3:
        int n,m;
        double pob1,pob2;
        cout<<"Ktory element macierzy chcesz pobrac?"<<endl;
        cout<<"Podaj wiersz:"<<endl;
        cin>>n;
        cout<<"Podaj kolumne:"<<endl;
        cin>>m;
        pob1=macierz1.get(n,m);
        pob2=macierz2.get(n,m);
        cout<<"Pobrano element obiektu macierz1: "<<pob1<<endl;
        cout<<"Pobrano element obiektu macierz2: "<<pob2<<endl;
        break;
    case 4:
        double wynik[5][4];
        cout<<"Dodamy teraz macierz1 oraz macierz stworzona z randomowych wartosci"<<endl;
        //**wynik=macierz1.add(**new_macierz);
    case 5:

    case 6:
    case 7:
    case 8:
    case 9:
    
    default:
        break;
    }
    

    int col1,col2,row1,row2;
    col1=macierz1.cols();
    row1=macierz1.rows();
    col2=macierz2.cols();
    row2=macierz2.rows();


    return 0;
}