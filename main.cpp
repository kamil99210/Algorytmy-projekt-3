#include <iostream>
#include <windows.h>
#include "woid.h"
#include <iomanip>
#include <cstdlib>


using namespace std;



int main()
{

    int w,v,x;
    woid L;


	woid ll;
do
{

//Menu główne

  cout<<"  1.  Dodanie liczby na pocz\245tek "<<endl;
  cout<<"  2.  Dodanie liczby za liczb\251 z listy "<<endl;
  cout<<"  3.  Dodanie liczby na koniec "<<endl;
  cout<<"  4.  Usuni\251cie liczby z pocz\245tku "<<endl;
  cout<<"  5.  Usuwanie liczby z podanej pozycji "<<endl;
  cout<<"  6.  Usuni\251cie liczby z ko\344ca "<<endl;
  cout<<"  7.  Zliczanie element\242w  "<<endl;
  cout<<"  8.  Wszukiwanie element\242w  "<<endl;
  cout<<"  9.  Wyj\230cie  "<<endl;
  cin>>w;
// switcch z wyborem funkcji do wykonania
switch(w)
  {
      case 1:
          {
            cout<<endl<<" jaka liczbe dodac"<<endl;
            cin>>v;
            ll.l_push_front (v);break;
          }

      case 2:
        {
              cout<<endl<<" jaka liczbe dodac ?"<<endl;
            cin>>x;
            cout<<"za jaka liczbe dodac ?"<<endl;
            cin>>v;
            ll.l_push_next_to(x,v);break;
        }
      case 3:
          {
                cout<<endl<<" jaka liczbe dodac"<<endl;
            cin>>v;
            ll.l_push_back(v);break;
            }
        case 4:
            {

             ll.l_pop_front();break;
            }
        case 5:
            {
                cout<<endl<<" jaka pozycje chcesz usunac od 2 do "<<ll.l_size()<<endl;
            cin>>v;

             ll.l_pop_next_to(v);break;
            }
        case 6:
            {
            ll.l_pop_back();break;
            }
        case 7:
          {
            cout<<endl<<" liczb na liscie jest : "<<ll.l_size();

            Sleep(3000);
            break;
          }
        case 8:
            {
                cout<<endl<<" jaka liczbe znalezc"<<endl;
            cin>>v;
            ll.szukaj(v);
            break;
            }
        case 9:
           ll.koniec();
            break;


  }//wyświetlanie listy
ll.wyswietl();

}
while(w!=11);

  return 0;
}
