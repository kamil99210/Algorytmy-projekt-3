#include <iostream>
#include "woid.h"
#include <cstdlib>
#include <windows.h>
#include <iomanip>

using namespace std;
//deklarowanie listy wpisanie NULL na pierwszy element listy
woid::woid()
{
    head = NULL;
}

woid::~woid()
{

}
// wyświtlanie listy
void woid::wyswietl( )
{
   int y;

   y=l_size();

    lista * p=head;
  // zmiana koloru w konsoli
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
// system do pokazywania listy od nowa po wykonaniu funkcji
    system("CLS");

 cout<<"  Lista Jednokierunkowa"<<endl;
 cout<<"  ";
  for(int i = 0;i<y;i++ )
{cout<<"____";}
cout<<endl<<endl;

  for(int i = 1; p; p = p->next )
  {

     cout<<setw(4)<< p->liczba ;

         }
cout<<endl<<"  ";

 for(int i = 0;i<y;i++ )
{cout<<"____";}
cout<<endl<<endl;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}
//---------------------------------------
int woid::l_size (  )// funkcja licząca ilość elementów na liście
{
  int  c = 0;
lista * p = head;
  while( p )
  {
    c++;
    p = p->next;
  }

Sleep(1000);// funkcja która tworzy opóźnienie w konsoli
return c;
}
//----------------------------------------------
void woid::l_push_front (int x  )//funckcja dodająca element na początku listy
{
 lista * p;

  p = new lista;
  p->next = head;
  p->liczba = x;
  head = p;
}
//----------------------------------------------
 void woid::l_push_next_to(int x ,int v)//funkcja dodająca podany element za podaną liczbę
 {
     lista * p=head , * e;


 for(int i = 1; p; p = p->next )
 {
    if(p->liczba == v)
    {
   // cout<<p->liczba<<" "<<p->next<<endl;

        e = new lista;
        e->next = p->next;
        e->liczba = x;
        p->next = e;
        }
 }
}
//----------------------------------------------
void woid::l_push_back (int x ) // funkcja dodająca element na końiec listy
{
    lista * p ,* e;

  e = new lista;
  e->next = NULL;
  e->liczba = x;
  p = head;
  if( p )
  {
     while( p->next )
        p = p->next;
     p->next = e;
  }
  else head = e;
}
//----------------------------------------------
void woid::l_pop_front()  // funkcja usuwająca element z początku listy
{
    lista * l;
l=head;
if(l)
{
    head=l->next;
}
}
//----------------------------------------------
 void woid::l_pop_next_to(int x ) // funkcja usuwająca element na podanej pozycji
 {
    x=x-1;
     lista * p,* e;
p = e = head;

 if(x<l_size())
 {
					while(x>0)
                        {
						x--;
						p = e;
						e = e->next;
					}

					p->next = e->next;
					delete e;
 }
 else
{
    cout<<"\n Na liscie jest : "<<l_size()<<" elementy"<<endl;
    cout<<" przez co nie da sie usunac tej pozycji"<<endl;
    Sleep(2000);
}

 }
 //----------------------------------------------
void woid::l_pop_back (  )  // funkcja usuwająca element z końca listy
{
  lista * l = head;
  if( l )
  {
    if( l->next )
    {
      while( l->next->next ) l = l->next;

    delete l;
    //cout<<l->next;
      l->next = NULL;
    }
    else
    {
        delete l;
      head = NULL;
    }
  }









}

void woid::szukaj(int v ) // przesukuje liste i pokazuje czy liczba występuje i ile razy
{
     lista * p=head;
     int ile=0;
   // cout<<p->liczba<<" "<<p->next<<endl;

 for(int i = 1; p; p = p->next )
 {
    if(p->liczba == v)
        {
            ile++;
        }
 }
 if(ile==1)
    cout<<endl<<v<<"  Znajduje sie na liscie i  wystepuje  "<<ile<<" raz"<<endl;
 else
 cout<<endl<<v<<"  Znajduje sie na liscie i  wystepuje  "<<ile<<" razy"<<endl;
Sleep(3000);
}
int  woid::koniec()// funkcja kącząca program
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    cout<<"Koniec programu!";
    Sleep(2000);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    exit(0);

}
