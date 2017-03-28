#include <iostream>

using namespace std;

int main()
{
    /*float a;
    float b;
    cout << "Ingresa el radio del circulo: ";
    cin >> a;
    float area;
    area=3.1416*(a*a);
    cout << "El area del circulo es: "<<area << endl;
    cout << "Ingresa el lado del cuadrado: ";
    cin >> a;
    area=a*a;
    cout << "El area del cuadrado es: "<<area << endl;
    cout << "Ingresa el largo del rectangulo: ";
    cin >> a;
    cout << "Ingresa el ancho del rectangulo: ";
    cin >> b;
    area=a*b;
    cout << "El area del rectangulo es: "<<area << endl;}
    */
    /*
    int c, d, e;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    cout << "Ingresa el valor de d: ";
    cin >> d;
    e=c;
    c=d;
    d=e;
    cout <<"El valor de c es:"<< c<<endl;
    cout <<"El valor de d es:"<< d<<endl;
    */
    /*
    int c, d;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    cout << "Ingresa el valor de d: ";
    cin >> d;
    c=c+d;
    d=c-d;
    c=c-d;
    cout <<"El valor de c es:"<< c<<endl;
    cout <<"El valor de d es:"<< d<<endl;
    */
    /*
    int c, d;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    cout << "Ingresa el valor de d: ";
    cin >> d;
    if(c<d)
        cout << "El mayor es: "<<d<<endl;
    else if(c==d)
        cout << "Son iguales: "<<d<<endl;
    else
        cout << "El mayor es: "<<c<<endl;
    */
    int c, d, e;
    cout << "Ingresa el valor de c: ";
    cin >> c;
    cout << "Ingresa el valor de d: ";
    cin >> d;
    cout << "Ingresa el valor de e: ";
    cin >> e;

    if(c<d){
        if (e<d)
            cout << "El mayor es: "<<d<<endl;
        else
            cout << "El mayor es: "<<e<<endl;
    }

    else if(d<c){
        if (e<c)
            cout << "El mayor es: "<<c<<endl;
        else
            cout << "El mayor es: "<<e<<endl;
    }
    else
        cout << "Son iguales: "<<d<<endl;
}
