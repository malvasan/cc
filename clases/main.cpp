#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector vec1;
    vec1.origen_start();
    vec1.fin.y=10;
    vec1.fin.x=5.3;
    vec1.imprimir();
    vec1.distancia();
    return 0;
}
