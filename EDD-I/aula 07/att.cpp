#include <iostream>
#include <algorithm>
using namespace std;

struct carro {
    string modelo;
    float valor;
    int ano;
};

bool ordena(const carro &a1, const carro &a2){
    return a1.valor > a2.valor || // PRIMEIRO CRITÉRIO
    (a1.valor == a2.valor && a1.ano > a2.ano) || // SEGUNDO CRITÉRIO
    (a1.valor == a2.valor && a1.ano == a2.ano && a1.modelo < a2.modelo); // TERCEIRO CRITÉRIO
};

int main() {
    int NA;
    cout << "quantos carros deseja ordenar? ";
    cin >> NA;

    carro lista[NA];

    for(int i = 0; i < NA; i++){
        cin >> lista[i].modelo >> lista[i].valor >> lista[i].ano;
    }

    sort(lista, lista + NA, ordena);

    for(int i = 0; i < NA; i++){
        cout << lista[i].modelo << " "
             << lista[i].valor << " "
             << lista[i].ano << endl;
    }

    return 0;
}
