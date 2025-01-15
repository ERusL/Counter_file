#ifndef KLASS_H
#define KLASS_H
#include <iostream>

class Klass
{
private:
    int Numb;
public:
    Klass();
    Klass(int numb);
    void set_numb(int numb);
    int get_numb();
    void add_numb();
    void minus_numb();
    void initKlass(int numb);
      
};


#endif