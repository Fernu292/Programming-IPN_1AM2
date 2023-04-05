#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float T2;   
    float PI = 3.14159;


    for(int i=20;i<40;i++){
        long double angle = i*PI/180;
        T2 = 1.54177665/sin(angle);

        cout<<"El angulo es: "<<i<<" en rad: "<<angle<<endl;
        cout<<"El valor de T2 es: "<<T2<<endl;
        cout<<"La sumatoria de tensiones en Y es: "<<(1.891723935+T2-3.4335)<<endl;
    }

    cout<<20/180;

    return 0;
}