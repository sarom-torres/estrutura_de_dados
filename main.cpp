
#include <ostream>
#include <iostream>
#include <string>
#include <prglib.h>
 
using namespace std;
using prglib::arvore;
 
int main() {
    arvore<int> * arv;
 
    // uma árvore toda pro lado direito
    arv = new arvore<int>(5);
    arv->adiciona(3);
    arv->adiciona(8);
    arv->adiciona(2);
    arv->adiciona(1);
    arv->adiciona(4);
    arv->adiciona(9);
    arv->adiciona(6);
    arv->adiciona(7);
    arv->adiciona(10);
 
    arv->escrevaSe(cout);
    cout << endl;


 
    delete arv;
}
