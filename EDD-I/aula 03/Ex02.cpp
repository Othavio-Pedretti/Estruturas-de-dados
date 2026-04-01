
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string nome;
    string op;
    cout << "digite o seu nome:";
    getline(cin, nome); // obtem toda linha
    cout << "Seu nome é " << nome << endl;
    return 0;
}