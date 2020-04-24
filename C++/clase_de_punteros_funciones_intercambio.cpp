#include<iostream>
#include<stdlib.h>

using namespace std;
void intercambio(int *x, int *y);
int main()
{
    int x=10, y=20;
    cout<<"  "<<endl;
    cout<<"Valor de x:"<<x<<endl;
    cout<<"Valor de y:"<<y<<endl;
    cout<<"  "<<endl;
    intercambio(&x,&y);
    cout<<"Valor de x:"<<x<<endl;
    cout<<"Valor de y:"<<y<<endl;
    cout<<"  "<<endl;

    system("Pause");
    return 0;
}
void intercambio(int *x,int *y)
{
     int aux=0;
    aux=*x;
    *x=*y;
    *y=aux;
}
