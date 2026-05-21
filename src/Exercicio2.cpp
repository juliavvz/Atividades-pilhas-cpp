#include <iostream>
using namespace std;

struct No {
    int dado;
    No* proximo;
};

class PilhaLista {
private:
    No* topo;
    
public:
    PilhaLista() {
        topo = NULL;
    }
    
    bool vazia() {
        return topo == NULL;
    }
    
    void empilhar(int valor) {
        No* novo = new No();
        novo->dado = valor;
        novo->proximo = topo;
        topo = novo;
    }
    
    int desempilhar() {
        if (!vazia()) {
            No* temp = topo;
            int valor = temp->dado;
            topo = topo->proximo;
            delete temp;
            return valor;
        }
        return -1;
    }
};

int main() {
    PilhaLista pilhaPar, pilhaImpar;
    int numero, anterior;
    
    cout << "Digite o 1º número: ";
    cin >> anterior;
    
    if (anterior % 2 == 0)
        pilhaPar.empilhar(anterior);
    else
        pilhaImpar.empilhar(anterior);
    
    for (int i = 2; i <= 30; i++) {
        do {
            cout << "Digite o " << i << "º número (maior que " << anterior << "): ";
            cin >> numero;
            
            if (numero <= anterior) {
                cout << "Erro! O número deve ser maior que " << anterior << endl;
            }
        } while (numero <= anterior);
        
        anterior = numero;
        
        if (numero % 2 == 0)
            pilhaPar.empilhar(numero);
        else
            pilhaImpar.empilhar(numero);
    }
    
    cout << "\n=== Números Pares (ordem decrescente) ===" << endl;
    while (!pilhaPar.vazia()) {
        cout << pilhaPar.desempilhar() << " ";
    }
    
    cout << "\n=== Números Ímpares (ordem decrescente) ===" << endl;
    while (!pilhaImpar.vazia()) {
        cout << pilhaImpar.desempilhar() << " ";
    }
    
    cout << endl;
    
    return 0;
}