
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b;
    cin >> a >> b;
    cout << "Resultado: " << fixed << setprecision(2) << a/b << endl;
    // set precision define casas decimais

    return 0;
}