#include <iostream>
using namespace std;

#define MAX 30
#define TAM_PILHA 30

// Pilha com vetor
class PilhaVetor {
private:
    int dados[TAM_PILHA];
    int topo;
    
public:
    PilhaVetor() {
        topo = -1;
    }
    
    bool vazia() {
        return topo == -1;
    }
    
    bool cheia() {
        return topo == TAM_PILHA - 1;
    }
    
    void empilhar(int valor) {
        if (!cheia()) {
            topo++;
            dados[topo] = valor;
        }
    }
    
    int desempilhar() {
        if (!vazia()) {
            int valor = dados[topo];
            topo--;
            return valor;
        }
        return -1;
    }
};

int main() {
    PilhaVetor pilhaPar, pilhaImpar;
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