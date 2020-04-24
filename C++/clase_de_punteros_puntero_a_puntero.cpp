#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int valor_e=100;
    int *p1=&valor_e, **p5=&p1;
    cout<<"contenido de valor_e: "<<valor_e<<endl;
    *p1=105;
    **p5=99;
    cout<<"direccion de valor_e: "<<&valor_e<<endl;
    cout<<"direccion de p1: "<<&p1<<endl;
    cout<<"direccion de p5: "<<&p5<<endl;
    cout<<"contenido de valor_e: "<<valor_e<<endl;
    cout<<"contenido de p1: "<<*p1<<endl;
    cout<<"contenido de p5: "<<**p5<<endl;
    system("Pause");
    return 0;
}

