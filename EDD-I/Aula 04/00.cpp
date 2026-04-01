#include <iostream>

using namespace std;

void imprimir(string texto){
    cout << "O texto recebido é : " << texto << endl;
}
int soma(int x , int y){
    int t = x + y;
    return t;
}
int main(){
    imprimir("olá função");
    int x = 10, y = 2;
    int s = soma(x,y);
    cout << s << endl;
    return 0;
}