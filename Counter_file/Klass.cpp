#include "Klass.h"

int Numb;
int numb;
Klass::Klass() {
    Numb = 1;
};
Klass::Klass(int numb)
{
    Numb = numb;
} 
void Klass:: set_numb(int numb)
{
    if (numb < 0)
    {
        Numb = -1;
    }
    else
    {
         Numb = numb;
    }
   
}
int Klass::get_numb()
{
    return Numb;
}
void Klass::add_numb()
{
     Numb++;
}
void Klass::minus_numb()
{
     Numb--;
}
void Klass::initKlass(int numb)
{
    Numb = numb;
}



