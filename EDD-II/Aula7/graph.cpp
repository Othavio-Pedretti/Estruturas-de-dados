#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <string>

using std::cout, std::cin, std::endl;

namespace graph {

    class diagraph {
        private:
        //nodos do grafo - vertices
            struct node
            {
                std::string value; // valor
                std::vector<node*> link; // lista de ponteiros para os nós de ligações
            };
            // tabela hash que mapea o valor do nodo para o ponteiro do nodo
            std::unordered_map<std::string, node*> nodes;
            public:
            // função para inserir um nodo
            void insert_node(const std::string& s){
                node aux;
                aux.value = s;
                nodes[s] = aux;
            }
            size_t size(){
                return nodes.size();
            }

            node* find_node(const std::string& s){
                auto it = nodes.find(s);
                return it == nodes.end() ? nullptr : &it->second;
            }

            bool insert_link( const std::string& from, const std::string& to){
                node* pfrom = find_node(from);
                node* pto = find_node(to);
                if(pfrom == nullptr || pto == nullptr) return false;
                pfrom->link.push_back(pto);
                return true;
            }
    };
}