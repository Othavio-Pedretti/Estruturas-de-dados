#include <iostream>

using namespace std;

void dobrar(int v[], int tamanho){
    for (int i = 0 ; i<3 ; i++){
        v[i] = v[i] * 2;
    }
}

int main(){
    int vetor[3] = (1,2,3);
    dobrar(vetor,3);
    for (int i = 0; i<3; i++){
        cout << vetor[i] << " ";
    }
    return 0;

}