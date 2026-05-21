<<<<<<< HEAD
# 📚 Exercícios de Pilha em C++

## 📌 Descrição
Este projeto apresenta duas implementações de pilha em C++:

- Pilha utilizando vetor;
- Pilha utilizando lista encadeada.

Os programas recebem 30 números inteiros em ordem crescente e os separam em:
- números pares;
- números ímpares.

Ao final, os valores são exibidos em ordem decrescente utilizando o conceito de pilha (LIFO).

---

## 🛠️ Tecnologias utilizadas
- C++
- Biblioteca `<iostream>`

---

## 📂 Estrutura do projeto

```text
Atividade-Pilhas/
├── src/
│   ├── Exercicio1.cpp
│   └── Exercicio2.cpp
├── README.md
```

---

## 🧩 Exercícios

### 📌 Exercicio1.cpp
Implementação de pilha utilizando:
- vetor estático;
- controle de topo;
- operações de empilhar e desempilhar.

---

### 📌 Exercicio2.cpp
Implementação de pilha utilizando:
- lista encadeada;
- alocação dinâmica;
- ponteiros;
- operações de empilhar e desempilhar.

---

## ▶️ Como compilar e executar

### 🔹 Compilar Exercicio1.cpp

```bash
g++ src/Exercicio1.cpp -o exercicio1
```

### 🔹 Executar

#### Windows
```bash
exercicio1.exe
```

#### Linux / MacOS
```bash
./exercicio1
```

---

### 🔹 Compilar Exercicio2.cpp

```bash
g++ src/Exercicio2.cpp -o exercicio2
```

### 🔹 Executar

#### Windows
```bash
exercicio2.exe
```

#### Linux / MacOS
```bash
./exercicio2
```

---

## ▶️ Funcionamento
1. O usuário digita 30 números inteiros;
2. Cada número deve ser maior que o anterior;
3. Os números são separados em:
   - pilha de pares;
   - pilha de ímpares;
4. Os valores são exibidos em ordem decrescente.

---

## 💻 Exemplo de execução

```text
Digite o 1º número: 2
Digite o 2º número (maior que 2): 5
Digite o 3º número (maior que 5): 8

=== Números Pares (ordem decrescente) ===
8 2

=== Números Ímpares (ordem decrescente) ===
5
```

---

## 📚 Conceitos aplicados
- Estrutura de dados
- Pilhas (Stack)
- Vetores
- Listas encadeadas
- Ponteiros
- Alocação dinâmica
- Programação Orientada a Objetos
- Estrutura LIFO

---

## 👩‍💻 Autora
Júlia Vitória - @juliavvz
=======
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
markdown
## Exemplo de Entrada/Saída

**Entrada:**
- Digite o 1º número: 5
- Digite o 2º número (maior que 5): 10
- Digite o 3º número (maior que 10): 15
...


**Saída:**
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
>>>>>>> 7dc3ec452db7d1ff6492f87113c9117b4ac6ace3
