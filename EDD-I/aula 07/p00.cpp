#include <iostream>
#include "vetor.cpp"
#include <algorithm> //utilizar a função sort

using namespace std;

const int n = 100000;
int main(){
    // ordenação usando sort()
    sort(vet,vet+n);// significa que estamos passando o vetor o endereço inicial e o final
    for(int i=0; i < n ;i++){
        cout << vet[i] << endl;
    }

    return 0;
}