#include "Vector.h"
#include <iostream>
#include <math.h>
using namespace std;


void Vector::imprimir()
{
    start.imprimir();
    cout<<"->";
    fin.imprimir();
    cout<<endl;
}
void Vector::origen_start()
{
    start.origen();

}
void Vector::distancia()
{
    double temporal_x=fin.x-start.x;
    double temporal_y=fin.y-start.y;
    double largo=(temporal_x*temporal_x)+(temporal_y*temporal_y);
    double raiz=1/2.0;
    double resultado=pow(largo,raiz);
    cout<<resultado<<endl;


}
