# Atividade Pilhas em C++

## Descrição
Implementação de duas versões de pilhas em C++ para armazenar números pares e ímpares em ordem decrescente.

## Funcionalidades
- Leitura de 30 números em sequência crescente
- Validação de entrada (cada número deve ser maior que o anterior)
- Separação automática em pilhas de pares e ímpares
- Exibição dos resultados em ordem decrescente (LIFO)

## Implementações

### 1. Pilha com Vetor (`ex1.cpp`)
- Utiliza array estático com capacidade para 30 elementos
- Implementação clássica com índice `topo`
- Operações O(1)

### 2. Pilha com Lista Encadeada (`ex2.cpp`)
- Utiliza alocação dinâmica de memória
- Estrutura flexível sem limite pré-definido
- Operações O(1)

## Como Compilar e Executar

### Pilha com Vetor
```bash
g++ ex1.cpp -o pilha_vetor
./pilha_vetor
```
### Pilha com Lista Encadeada
```bash
g++ ex2.cpp -o pilha_lista
./pilha_lista
```

No Windows (PowerShell)
```bash
# Compilar
g++ ex1.cpp -o ex1.exe

# Executar
./ex1.exe
```
### Exemplo de Entrada/Saída
Entrada:

Digite o 1º número: 5
Digite o 2º número (maior que 5): 10
Digite o 3º número (maior que 10): 15
...

Saída:

=== Números Pares (ordem decrescente) ===
30 28 26 24 22 20 18 16 14 12 10 8 6 4 2

=== Números Ímpares (ordem decrescente) ===
29 27 25 23 21 19 17 15 13 11 9 7 5 3 1


### Regras do Programa
- O programa solicita 30 números
- Cada número deve ser maior que o anterior
- Números pares vão para pilhaPar
- Números ímpares vão para pilhaImpar
- A saída mostra os números em ordem decrescente (do último para o primeiro)

### Conceitos Aplicados
- Estrutura de dados (Pilha)
- Classes e encapsulamento (C++)
- Lista encadeada dinâmica
- Array estático
- Validação de entrada
- LIFO (Last In, First Out)

### Licença
Este projeto é livre para uso educacional.
