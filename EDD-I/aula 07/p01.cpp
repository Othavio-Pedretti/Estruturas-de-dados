#include <iostream>
#include <algorithm>

using namespace std;

bool ordena(double a , double b){
    return a > b;
}

int main(){

    const int n = 5;

    double v[n]= {9.5 , 7.5 , 6.8 , 9.2 , 6.9};

    sort(v,v+n,ordena);

    for(int i=0; i < n ;i++){
        cout << v[i] << endl;
    }
    return 0;
}