#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    
    Cliente (string name, string adress, string city, string state, string cepy, string tel) :
    nome(name), endereco(adress), cidade(city), uf(state), cep(cepy), telefone(tel) {}
    
    private:
        string nome;
        string endereco;
        string cidade;
        string uf;
        string cep;
        string telefone;

    public:
        void print();
};

#endif
