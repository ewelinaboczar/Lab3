#include <iostream>
#include "matrix.cpp"
#include <cstdlib>
#include <windows.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    system("cls");
    bool p=true;

    while(p)
    {
        cout<<"Wybierz:"<<endl;
        cout<<"0. Koniec"<<endl;
        cout<<"1. Stworz macierz kwadratowa n x n"<<endl;
        cout<<"2. Stworz macierz n x m"<<endl;
        cout<<"3. Wczytaj macierz z pliku"<<endl;
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 0:
            {
                p=false;
                break;
            }
            case 1:
            {
                system("cls");
                cout<<"Nasz obiekt na ktorym bedziemy pracowac to 'macierz2'"<<endl;
                int w;
                bool gen_m2=true;
                cout<<"Jaki wymiar ma miec twoja macierz kwadratowa"<<endl;
                cin>>w;
                matrix macierz2(w);
                matrix m2(w);
                
                while(gen_m2)
                {
                    system("cls");
                    int wybor_m2;
                    cout<<"Najpierw wygenerujemy macierz m2"<<endl;
                    cout<<"0. Koniec"<<endl;
                    cout<<"1. Dodaj element macierzy m2"<<endl;
                    cout<<"2. Wyswietl macierz m2"<<endl;
                    cout<<"Wybierz:"<<endl;
                    cin>>wybor_m2;
                    switch(wybor_m2)
                    {
                        case 0:
                            {
                                gen_m2=false;
                                break;
                            } 
                            case 1:
                            {
                                system("cls");
                                int n,m,val;
                                cout<<"Podaj wiersz, kolumne i wartosc dla m2:"<<endl;
                                cin>>n>>m>>val;
                                m2.set(n,m,val);
                                break;
                            } 
                            case 2:
                            {
                                system("cls");
                                cout<<"Macierz m2:"<<endl;
                                m2.print();
                                break;
                            }
                    }
                }
                cout<<endl;
                

                bool program=true;
                while(program)
                {
                    cout<<"Wybierz co chcesz zrobic"<<endl;
                    cout<<"0. Koniec"<<endl;
                    cout<<"1. Pokaz macierz na ekranie"<<endl;
                    cout<<"2. Dodaj element macierzy"<<endl;
                    cout<<"3. Pobierz element macierzy"<<endl;
                    cout<<"4. Dodaj macierze"<<endl;
                    cout<<"5. Odejmij macierze"<<endl;
                    cout<<"6. Pomnoz macierze"<<endl;
                    cout<<"7. Ilosc wierszy macierzy"<<endl;
                    cout<<"8. Ilosc kolumn macierzy"<<endl;
                    cout<<"9. Zapisz macierz w pliku"<<endl;
                    
                    int number;
                    cin>>number;
                    switch (number)
                    {
                    case 0:
                    {
                        cout<<"Zakonczono program"<<endl;
                        program=false;
                        break;    
                    }   
                    case 1:
                    {
                        
                        macierz2.print();
                        break;
                    }
                    case 2:
                    {
                        
                        int n1,m1;
                        double val;
                        cout<<"W jakim miejscu macierzy chcesz dodac element?"<<endl;
                        cout<<"Podaj wiersz, kolumne i wartosc"<<endl;
                        cin>>n1>>m1>>val;
                        macierz2.set(n1,m1,val);
                        break;
                    }
                    case 3:
                    {
                        
                        int n4,m4;
                        double pob2;
                        cout<<"Ktory element macierzy chcesz pobrac?"<<endl;
                        cout<<"Podaj wiersz i kolumne"<<endl;
                        cin>>n4>>m4;
                        pob2=macierz2.get(n4,m4);
                        cout<<"Pobrano element: "<<pob2<<endl;
                        break;
                    }
                    case 4:
                    {
                        matrix dodawanie(w);
                        cout<<"Wynik dodawania m2 i macierz2:"<<endl;
                        dodawanie=macierz2.add(m2);
                        dodawanie.print();
                        break;
                    }
                    case 5:
                    {
                        matrix odejmowanie(w);
                        cout<<"Wynik odejmowania m2 od macierz2:"<<endl;
                        odejmowanie=macierz2.subtract(m2);
                        break;
                    }        
                    case 6:
                    {
                        matrix mnozenie(w);
                        cout<<"Mnozenie macierzy m2 i macierz2"<<endl;
                        mnozenie=macierz2.multiply(m2); 
                        mnozenie.print();
                        break;
                    }    
                    case 7:
                    {
                        
                        cout<<"Macierz2 ma "<<macierz2.rows()<< " wierszy"<<endl;
                        break;
                    }
                    case 8:
                    {
                        
                        cout<<"Macierz2 ma "<<macierz2.cols()<< " kolumn"<<endl;
                        break;
                    }
                    case 9:
                    {
                        
                        string a, b, path;
                        path=b+"\\"+a;
                        cout<<"Zapisywanie macierzy do pliku"<<endl;
                        cout<<"Wybierz:"<<endl;
                        bool x=true;
                        while(x)
                        {
                           
                            cout<<"0. Koniec"<<endl;
                            cout<<"1. Zapisz macierz2 do pliku"<<endl;
                            cout<<"2. Zapisz m2 do pliku"<<endl;
                            
                            int podaj;
                            cin>>podaj;
                            switch(podaj)
                            {
                            case 0:
                                x=false;
                                break;
                            case 1:
                                cout<<"Podaj nazwe pliku docelowego:"<<endl;
                                cin>>a;
                                cout<<"Podaj sciezke dostepu do tego pliku:"<<endl;
                                cin>>b;
                                macierz2.store(a,b);
                                break;
                            case 2:
                                cout<<"Podaj nazwe pliku docelowego:"<<endl;
                                cin>>a;
                                cout<<"Podaj sciezke dostepu do tego pliku:"<<endl;
                                cin>>b;
                                m2.store(a,b);
                                break;
                            } 
                        }
                        break;
                    }   
                    default:
                        system("cls");
                        cout<<"Wybrano bledny numer, wybierz ponownie"<<endl;
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                system("cls");
                cout<<"Nasz obiekt na ktorym bedziemy pracowac to 'macierz1'"<<endl;
                int w,k;
                bool gen_m2=true;
                cout<<"Jakie wymiary ma miec twoja macierz:\nPodaj ilosc wierszy i kolumn:"<<endl;
                cin>>w>>k;
                matrix macierz1(w,k);
                matrix m2(w,k);
                cout<<"Najpierw wygenerujemy macierz m2"<<endl;
                while(gen_m2)
                {
                    int wybor_m2;
                    cout<<"0. Koniec"<<endl;
                    cout<<"1. Dodaj element macierzy m2"<<endl;
                    cout<<"2. Wyswietl macierz m2"<<endl;
                    cout<<"Wybierz:"<<endl;
                    cin>>wybor_m2;
                    switch(wybor_m2)
                    {
                        case 0:
                            {
                                gen_m2=false;
                                break;
                            } 
                            case 1:
                            {
                                int n,m,val;
                                cout<<"Podaj wiersz, kolumne i wartosc dla m2:"<<endl;
                                cin>>n>>m>>val;
                                m2.set(n,m,val);
                                break;
                            } 
                            case 2:
                            {
                                cout<<"Macierz m2:"<<endl;
                                m2.print();
                                break;
                            }
                    }
                }
                
                bool program=true;
                while(program)
                {
                    cout<<"Wybierz co chcesz zrobic"<<endl;
                    cout<<"0. Koniec"<<endl;
                    cout<<"1. Pokaz macierz na ekranie"<<endl;
                    cout<<"2. Dodaj element macierzy"<<endl;
                    cout<<"3. Pobierz element macierzy"<<endl;
                    cout<<"4. Dodaj macierze"<<endl;
                    cout<<"5. Odejmij macierze"<<endl;
                    cout<<"6. Pomnoz macierze"<<endl;
                    cout<<"7. Ilosc wierszy macierzy"<<endl;
                    cout<<"8. Ilosc kolumn macierzy"<<endl;
                    cout<<"9. Zapisz macierz w pliku"<<endl;

                    int number;
                    cin>>number;
                    switch (number)
                    {
                    case 0:
                    {
                        cout<<"Zakonczono program"<<endl;
                        program=false;
                        break;    
                    }   
                    case 1:
                    {
                        
                        macierz1.print();
                        break;
                    }
                    case 2:
                    {
                        
                        int n,m;
                        double val;
                        cout<<"W jakim miejscu macierzy chcesz dodac element?"<<endl;
                        cout<<"Podaj wiersz, kolumne i wartosc"<<endl;
                        cin>>n>>m>>val;
                        macierz1.set(n,m,val);
                        break;
                    }
                    case 3:
                    {
                        
                        int n,m;
                        double pob;
                        cout<<"Ktory element macierzy chcesz pobrac?"<<endl;
                        cout<<"Podaj wiersz i kolumne"<<endl;
                        cin>>n>>m;
                        pob=macierz1.get(n,m);
                        cout<<"Pobrano element: "<<pob<<endl;
                        break;
                    }
                    case 4:
                    {
                        matrix dodawanie(w,k);
                        cout<<"Wynik dodawania m2 i macierz1:"<<endl;
                        dodawanie=macierz1.add(m2);
                        dodawanie.print();
                        break;
                    }
                    case 5:
                    {
                        matrix odejmowanie(w,k);
                        cout<<"Wynik odejmowania m2 od macierz1:"<<endl;
                        odejmowanie=macierz1.subtract(m2);
                        odejmowanie.print();
                        break;
                    }        
                    case 6:
                    {
                        
                        cout<<"Mnozenie macierzy m2 i macierz1 jest niemozliwe (maja te same wymiary)"<<endl;
                        cout<<"Chcesz stworzyc inna macierz m3, aby mozna bylo pomnozyc macierz1 i m3?(t/n)"<<endl;
                        char odpowiedz;
                        cin>>odpowiedz;
                        switch(odpowiedz)
                        {
                            case 't':
                            {
                                bool gen_m3=true;
                                matrix m3(macierz1.cols(),macierz1.rows());
                                while(gen_m3)
                                {
                                    
                                    int wybor_m3;
                                    cout<<"0. Koniec"<<endl;
                                    cout<<"1. Dodaj element macierzy m3"<<endl;
                                    cout<<"2. Wyswietl macierz m3"<<endl;
                                    cout<<"Wybierz:"<<endl;
                                    cin>>wybor_m3;
                                    switch(wybor_m3)
                                    {
                                        case 0:
                                            {
                                                break;
                                            } 
                                            case 1:
                                            {
                                                int n,m,val;
                                                cout<<"Podaj wiersz, kolumne i wartosc dla m3:"<<endl;
                                                cin>>n>>m>>val;
                                                m3.set(n,m,val);
                                                break;
                                            }
                                            case 2:
                                            {
                                                cout<<"Macierz m3:"<<endl;
                                                m3.print();
                                                break;
                                            }
                                    }
                                    cout<<"Wynik mnozenia:"<<endl;
                                    matrix mnozenie(macierz1.cols(),m3.rows());
                                    mnozenie=macierz1.multiply(m3);
                                    mnozenie.print();
                                    gen_m3=false;
                                }
                                
                            }
                            case 'n':
                            {
                                break;
                            }
                        }
                        break;
                    }    
                    case 7:
                    {
                        
                        cout<<"Macierz1 ma "<<macierz1.rows()<< " wierszy"<<endl;
                        break;
                    }
                    case 8:
                    {
                        
                        cout<<"Macierz1 ma "<<macierz1.cols()<< " kolumn"<<endl;
                        break;
                    }
                    case 9:
                    {
                        
                        string a, b, path;
                        path=b+"\\"+a;
                        cout<<"Zapisywanie macierzy do pliku"<<endl;
                        cout<<"Wybierz:"<<endl;
                        bool x=true;
                        while(x)
                        {
                            
                            cout<<"0. Koniec"<<endl;
                            cout<<"1. Zapisz macierz1 do pliku"<<endl;
                            cout<<"2. Zapisz m2 do pliku"<<endl;
                            
                            int podaj;
                            cin>>podaj;
                            switch(podaj)
                            {
                            case 0:
                                x=false;
                                break;
                            case 1:
                                cout<<"Podaj nazwe pliku docelowego:"<<endl;
                                cin>>a;
                                cout<<"Podaj sciezke dostepu do tego pliku:"<<endl;
                                cin>>b;
                                macierz1.store(a,b);
                                break;
                            case 2:
                                cout<<"Podaj nazwe pliku docelowego:"<<endl;
                                cin>>a;
                                cout<<"Podaj sciezke dostepu do tego pliku:"<<endl;
                                cin>>b;
                                m2.store(a,b);
                                break;
                            } 
                        }
                        break;
                    }    
                    default:
                        system("cls");
                        cout<<"Wybrano bledny numer, wybierz ponownie"<<endl;
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                system("cls");
                bool gen_m2=true;
                cout<<"Nasz obiekt na ktorym bedziemy pracowac to 'macierz3'"<<endl;
                string a;
                string b;

                cout<<"Podaj nazwe pliku z ktorego chcesz wczytac macierz:"<<endl;
                cin>>a;
                cout<<"Podaj sciezke dostepu do tego pliku:"<<endl;
                cin>>b;
                string path=b+"\\\\"+a;
                cout<<"Sciezka dostepu do pliku: "<<path<<endl;

                matrix macierz3(path);
                macierz3.print();
                matrix m2(macierz3.rows(),macierz3.cols());
                cout<<"Najpierw wygenerujemy macierz m2"<<endl;
                while(gen_m2)
                {
                    
                    int wybor_m2;
                    cout<<"0. Koniec"<<endl;
                    cout<<"1. Dodaj element macierzy m2"<<endl;
                    cout<<"2. Wyswietl macierz m2"<<endl;
                    cout<<"Wybierz:"<<endl;
                    cin>>wybor_m2;
                    switch(wybor_m2)
                    {
                        case 0:
                            {
                                gen_m2=false;
                                break;
                            } 
                            case 1:
                            {
                                
                                int n,m,val;
                                cout<<"Podaj wiersz, kolumne i wartosc dla m2:"<<endl;
                                cin>>n>>m>>val;
                                m2.set(n,m,val);
                                break;
                            } 
                            case 2:
                            {
                                
                                cout<<"Macierz m2:"<<endl;
                                m2.print();
                                break;
                            }
                    }
                }
                
                bool program=true;
                while(program)
                {

                    cout<<"Wybierz co chcesz zrobic"<<endl;
                    cout<<"0. Koniec"<<endl;
                    cout<<"1. Pokaz macierz na ekranie"<<endl;
                    cout<<"2. Dodaj element macierzy"<<endl;
                    cout<<"3. Pobierz element macierzy"<<endl;
                    cout<<"4. Dodaj macierze"<<endl;
                    cout<<"5. Odejmij macierze"<<endl;
                    cout<<"6. Pomnoz macierze"<<endl;
                    cout<<"7. Ilosc wierszy macierzy"<<endl;
                    cout<<"8. Ilosc kolumn macierzy"<<endl;
                    cout<<"9. Zapisz macierz w pliku"<<endl;
                    int number;
                    cin>>number;
                    switch (number)
                    {
                    case 0:
                    {
                        cout<<"Zakonczono program"<<endl;
                        program=false;
                        break;    
                    }   
                    case 1:
                    {
                        macierz3.print();
                        break;
                    }
                    case 2:
                    {
                        int n,m;
                        double val;
                        cout<<"W jakim miejscu macierzy chcesz dodac element?"<<endl;
                        cout<<"Podaj wiersz, kolumne i wartosc"<<endl;
                        cin>>n>>m>>val;
                        macierz3.set(n,m,val);
                        break;
                    }
                    case 3:
                    {
                        int n,m;
                        double pob;
                        cout<<"Ktory element macierzy chcesz pobrac?"<<endl;
                        cout<<"Podaj wiersz i kolumne"<<endl;
                        cin>>n>>m;
                        pob=macierz3.get(n,m);
                        cout<<"Pobrano element: "<<pob<<endl;
                        break;
                    }
                    case 4:
                    {
                        cout<<"Wynik dodawania m2 i macierz3:"<<endl;
                        macierz3.add(m2);
                        break;
                    }
                    case 5:
                    {
                        cout<<"Wynik odejmowania m2 od macierz3:"<<endl;
                        macierz3.subtract(m2);
                        break;
                    }        
                    case 6:
                    {
                        if(macierz3.cols()!=macierz3.rows())
                        {
                            cout<<"Mnozenie macierzy m2 i macierz3 jest niemozliwe (maja te same wymiary)"<<endl;
                            cout<<"Chcesz stworzyc inna macierz m3, aby mozna bylo pomnozyc macierz3 i m3?(t/n)"<<endl;
                            char odpowiedz;
                            cin>>odpowiedz;
                            switch(odpowiedz)
                            {
                                case 't':
                                {
                                    bool gen_m3=true;
                                    matrix m3(macierz3.cols(),macierz3.rows());
                                    while(gen_m3)
                                    {
                                        int wybor_m3;
                                        cout<<"0. Koniec"<<endl;
                                        cout<<"1. Dodaj element macierzy m3"<<endl;
                                        cout<<"2. Wyswietl macierz m3"<<endl;
                                        cout<<"Wybierz:"<<endl;
                                        cin>>wybor_m3;
                                        switch(wybor_m3)
                                        {
                                            case 0:
                                                {
                                                    break;
                                                } 
                                                case 1:
                                                {
                                                    int n,m,val;
                                                    cout<<"Podaj wiersz, kolumne i wartosc dla m3:"<<endl;
                                                    cin>>n>>m>>val;
                                                    m3.set(n,m,val);
                                                    break;
                                                }
                                                case 2:
                                                {
                                                    cout<<"Macierz m3:"<<endl;
                                                    m3.print();
                                                    break;
                                                }
                                        }
                                        cout<<"Wynik mnozenia:"<<endl;
                                        matrix mnozenie(macierz3.cols(),m3.rows());
                                        mnozenie=macierz3.multiply(m3);
                                        mnozenie.print();
                                        gen_m3=false;
                                    }
                                    
                                }
                                case 'n':
                                {
                                    break;
                                }
                            }
                        }
                        else
                        {
                            macierz3.multiply(m2);
                        }
                        
                        
                        break;
                    }     
                    case 7:
                    {
                        cout<<"Macierz3 ma "<<macierz3.rows()<< " wierszy"<<endl;
                        break;
                    }
                    case 8:
                    {
                        cout<<"Macierz3 ma "<<macierz3.cols()<< " kolumn"<<endl;
                        break;
                    }
                    case 9:
                    {
                        string a, b;
                        cout<<"Zapisywanie macierzy do pliku"<<endl;
                        
                        bool x=true;
                        while(x)
                        {
                            cout<<"Wybierz:"<<endl;
                            cout<<"0. Koniec"<<endl;
                            cout<<"1. Zapisz macierz3 do pliku"<<endl;
                            cout<<"2. Zapisz m2 do pliku"<<endl;
                            
                            int podaj;
                            cin>>podaj;
                            switch(podaj)
                            {
                            case 0:
                                x=false;
                                break;
                            case 1:
                                cout<<"Podaj nazwe pliku docelowego:"<<endl;
                                cin>>a;
                                cout<<"Podaj sciezke dostepu do tego pliku:"<<endl;
                                cin>>b;
                                macierz3.store(a,b);
                                break;
                            case 2:
                                cout<<"Podaj nazwe pliku docelowego:"<<endl;
                                cin>>a;
                                cout<<"Podaj sciezke dostepu do tego pliku:"<<endl;
                                cin>>b;
                                m2.store(a,b);
                                break;
                            } 
                        }
                        break;
                    }    
                    default:
                        cout<<"Wybrano bledny numer, wybierz ponownie"<<endl;
                        break;
                    }
                }
                system("cls");
                break;
            }
        }
    }
    return 0;
}