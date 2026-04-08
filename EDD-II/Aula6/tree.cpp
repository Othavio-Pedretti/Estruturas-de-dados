//Biblioteca de arvore
#include <string>
#include <algorithm>

namespace tree{
    //struct de cada nodo da árvore
    struct node{
        std::string value; //INFORMAÇÃO
        node *left;  //FILHO DA ESQUERDA
        node *right; //FILHO DA DIREITA
    };

    node *create_node(const std::string &str_value){
        node *p = new node;
        p->value = str_value;
        p->left = nullptr;
        p->right = nullptr;
        return p;
    }

    //Função que retornar o tamanho da árvore
    //root é a raiz
    int height(node *root){
        if(root == nullptr){
            return -1;
        }
        return std::max(height(root->left),height(root->right))+1;

    }

    //TODO: Exibe todos os nodos da arvore
    void show(node *root){
        if(!root)
            return; 
        std::cout << root->value << std::endl;       
        show(root->left);
        show(root->right);        
    }

     void show2(node *root, std::string prefixo, int nivel){
        if(!root)
            return; 
            std::cout << std::string(nivel,' ')<<prefixo << root->value << std::endl;       
            show2(root->left,"/",nivel+1);
            show2(root ->right,"\\",nivel+1);
        
    }
    void DFS_pre(node *root){ //Percorrer em pré ordem
    if(!root) return;
    std::cout << root->value << ' '; // Exibe o nodo
    DFS_pre(root->left);// chama a função passando o nodo filho a esq
    DFS_pre(root->right);// chama a função passando o nodo filho a dir
}
void DFS_in(node *root){ //Percorrer em in order
    if(!root) return;
    DFS_in(root->left);
    std::cout<< root->value << ' ';
    DFS_in(root->right);
}

void DFS_post(node *root){ //Percorrer em post order
    if(!root) return;
    DFS_post(root->left);
    DFS_post(root->right);
    std::cout << root->value << ' ';
}

void BSF(node *root){
}

    //TODO: Pesquisar um valor na BST
    // se encontrar: retornar o pointer para o node
    // se n encontrar : retornar null ptr
    // node * BST_find(node *root, const std::string){}

}