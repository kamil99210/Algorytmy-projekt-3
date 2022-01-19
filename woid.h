
#include "lis.h"
#include <cstddef>


class woid// deklaracja klasy
{
    lista * head;
//    head= NULL;

public:
    //funkcje
                void l_push_front ( int x );
               void l_push_next_to(int x,int v);
              void l_push_back ( int x);
              void l_pop_front();
              void l_pop_next_to(int v);
              void l_pop_back ( );
               void szukaj(int x);
                int l_size ( );
                int  koniec();
                void wyswietl();
                    woid();
                   ~woid();
};








