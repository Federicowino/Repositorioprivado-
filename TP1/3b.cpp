#include <iostream>

using namespace std;

int main()
{
    float m1, m2, b1, b2, m3, b3, x, y;
    cout<< "ingrese los valores de m1,m2,b1,b2:" << endl;
    cin>> m1 >> m2 >> b1 >> b2;
    if (m1==m2){
        if (b1==b2){
            cout << "las rectas son iguales" << endl;
        }
        else{
            cout << "las rectas son paralelas" << endl;
        }
    }
    else{
    m3==m1-m2;
    b3==b1-b2;
    x==b3/m3;
    y==m1*x+b1;
    cout<<"la respuesta es: "<<x<< "x" << endl;
    cout<<"la respuesta es: "<<y<< "y" << endl;

    }




return 0;

}




