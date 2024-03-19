#include<iostream>
using namespace std;
int main()
{

    int a,b,c,d,e,mayorr = 0;

    int *p[5] = {&a, &b, &c, &d, &e};

    cout<< "Ingrese los 5 digitos de uno en uno: ";

    cin>> a >> b >> c >> d >> e;

    for(int i = 0; i < 5; ++i)

        if (*p[i] > mayorr)

            mayorr = *p[i];

    cout<< "Se determina que el # mayor de los 5 numeros es: "<<mayorr;

    return 0;

}