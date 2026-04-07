
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    int n;
    ofstream pag;
    tab.open("pag.html");
    pag << "DOCKTYPE! html>\n";
    pag << "html\n";
    pag << "<head>\n <title> Estrutura 2 </title> </head>";
    pag << "<body>"\n;
    pag << "<table border=\"1>\">\n";

    for(int i; i<100 ; i++){
        pag << "<td>" << pag << dec << i << ":"
        << i * 10 << ":"
        << hex << uppercase << i << endl; 
    };

    pag << "</table>";
    pag << "</body>";
    pag << "</html>\n";

    tab.close();
    
    return 0;

}