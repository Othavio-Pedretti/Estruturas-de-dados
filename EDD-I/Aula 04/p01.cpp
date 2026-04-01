#include <iostream>

using namespace std;

void soma(float &a, float &b){
    a += b;
    cout << a << endl;
}

int main(){
    float x = 10 ,y = 0.5;
    soma(x,y);
    cout << x << endl;

    return 0;
}