#include <iostream>
using namespace std;

template <typename T>
void swapT(T &a, T &b){

    T aux = a;
    a = b;
    b= aux;

}
int main(){
    string x = "morango do amor" , y = "labubu crocodilo bombardilo";
    cout << "Antes x = " << x << " e y era = " << y << endl;
    swapT(x,y);
    cout << "agora x = " << x << " e y é = " << y << endl << endl;

    int q = 12 ,w = 1234 ;
    cout << "Antes x = " << q << " e y era = " << w << endl;
    swapT(q,w);
    cout << "agora x = " << q << " e y é = " << w << endl << endl;

    float e = 10.5 ,r = 5.9;
    cout << "Antes x = " << e << " e y era = " << r << endl;
    swapT(e,r);
    cout << "agora x = " << e << " e y é = " << r << endl << endl;

    return 0;
}