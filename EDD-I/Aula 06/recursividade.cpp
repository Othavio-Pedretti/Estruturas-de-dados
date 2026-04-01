#include <iostream>

using namespace std;

int fat(int n) {
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fat(n-1);
}
int main(){
    int numero;
    cout << "digite um numero inteiro: ";
    cin >> numero;
    if(numero < 0){
        cout << "não existe fatorial de numero inteiro!";
    }
    cout << "O fatorial do numero " << numero << " é : " << fat(numero)<< endl;
    return 0;
}