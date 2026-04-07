
#include<iostream>
#include<fstream>
#include<cctype>
#include <iomanip>

using namespace std;


int main(){

    ifstream arq("gpl3.txt");
    if(!arq){
        cout << "deu ruim\n";
        return 1;
    };
    char ch;
    int cont [256]={};
    while(arq.get(ch)){
        cont[int(ch)]++;
        cout << ch << " - " << int(ch) << endl;
    }
    for(int i =0; i<256 ; i++){
        if(cont[i]>0){
            cout << i << " " << (isprint(i) ? char(1): ' '); << " "
        }
    }

    return 0;

}