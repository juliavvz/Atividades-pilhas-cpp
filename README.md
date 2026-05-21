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