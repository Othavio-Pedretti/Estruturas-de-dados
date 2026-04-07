
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    int n;
    ofstream tab;
    tab.open("tabela.txt");
    for(int i; i<100 ; i++){
        tab << dec << i << " " << hex << uppercase << i << endl; 
    };
    tab.close();
    
    return 0;

}