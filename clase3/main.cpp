#include <iostream>

using namespace std;

int main()
{
    /*
    int c=0;
    cout << ++c << endl;
    cout << c-- << endl;
    cout << ++c << endl;
    */
    /*
    int x,c;
    c=5;
    x=c++;
    cout << x;
    cout << c;

    x=0;
    c=5;
    x=++c;
    cout << x;
    cout << c;
    return 0;
    */
    /*
    int i=8;
    i-=2;
    cout<<i;
    */
    /*
    int a, b,z;
    cout<<"Ingresa el valor de a:";
    cin>>a;
    cout<<"Ingresa el valor de b:";
    cin>>b;

    if (a>b)
        z=a;
    else
        z=b;

    z=(a>b)?a:b;

    z=(a>b&&a!=b)?a:b;
    cout << z << endl;
    */

    int arreglo[6];
    int c=5;/*
    arreglo[0]=c;
    arreglo[1]=++c;
    arreglo[2]=++c;
    arreglo[3]=++c;
    arreglo[4]=++c;
    arreglo[5]=++c;
    */
    arreglo[0]=c++;
    arreglo[1]=c++;
    arreglo[2]=c++;
    arreglo[3]=c++;
    arreglo[4]=c++;
    arreglo[5]=c++;

    c=5;
    cout<<arreglo[c--]<<endl;
    cout<<arreglo[c--]<<endl;
    cout<<arreglo[c--]<<endl;
    cout<<arreglo[c--]<<endl;
    cout<<arreglo[c--]<<endl;
    cout<<arreglo[c--]<<endl;
}
