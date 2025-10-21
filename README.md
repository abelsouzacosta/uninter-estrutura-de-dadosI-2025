# uninter-estrutura-de-dadosI-2025
## 🧮 Lista Ligada Simples - Sistema de Fila com Prioridade (C)

## 📋 Objetivo

Implementar uma **Lista Ligada Simples** em linguagem **C** que simula uma **fila de clientes com cartões de prioridade**.  
Cada cartão representa um nó da lista, contendo:
- **Número** (`int`)
- **Prioridade** (`char`) — `'P'` para prioridade e `'C'` para comum
- **Ponteiro** para o próximo nó (`next`)

A lista deve ser **não circular**, ou seja, o último nó aponta para `NULL`.

---

## ⚙️ Exigências de Código

### 🧩 [1/7] Implementação da Lista Ligada Simples
- Deve-se implementar uma **Lista Ligada Simples** (`LinkedList`).
- Cada **Nó (Node)** deve conter:
  - `number` (int)
  - `priority` (char)
  - `next` (ponteiro para o próximo nó)
- O último nó da lista deve apontar para `NULL`.

---

### 🧩 [2/7] Função `inserirSemPrioridade`
- Deve percorrer a lista a partir da **cabeça (head)**.
- Inserir o novo nó **no final** da lista.

---

### 🧩 [3/7] Função `inserirComPrioridade`
- Deve percorrer a lista a partir da **cabeça (head)**.
- Inserir o novo nó **após todos os nós com prioridade `'P'`**.
- O novo nó deve sempre estar **antes de todos os nós com prioridade `'C'`**.

---

### 🧩 [4/7] Função `inserir`
- Solicitar ao usuário a **prioridade** (`'P'` ou `'C'`).
- O **número do cliente** deve ser atribuído automaticamente conforme a prioridade:
  - O primeiro cliente `'C'` recebe o número `1`, o segundo `2`, e assim por diante.
  - O mesmo vale para clientes `'P'`.
- Criar um novo nó com a prioridade e número atribuídos.
- Se a lista estiver vazia, o `head` aponta para o novo nó.
- Caso contrário:
  - Se for `'C'`, chamar `inserirSemPrioridade()`.
  - Se for `'P'`, chamar `inserirComPrioridade()`.

---

### 🧩 [5/7] Função `imprimirFilaClientes`
- Deve imprimir todos os cartões e seus respectivos números, do primeiro ao último da lista.

---

### 🧩 [6/7] Função `atenderCliente`
- Deve remover o **primeiro cliente** da fila.
- Imprimir uma mensagem chamando o cliente para atendimento, informando o número do seu cartão.

---

### 🧩 [7/7] Menu Principal
O programa deve conter um **menu interativo** com as seguintes opções:

| Opção | Descrição | Ação |
|-------|------------|------|
| **1** | Adicionar cliente à fila | Chama a função `inserir()` |
| **2** | Mostrar clientes na fila | Chama a função `imprimirFilaClientes()` |
| **3** | Chamar cliente | Chama a função `atenderCliente()` |
| **4** | Sair | Encerra o programa |
| **Outra** | Opção inválida | Retorna ao menu |

---
## 🧠 Resumo

Este projeto reforça conceitos fundamentais de **estruturas de dados em C**, como:
- Alocação dinâmica de memória
- Percorrimento e manipulação de listas ligadas
- Inserção condicional (com e sem prioridade)
- Remoção de nós
- Interação com o usuário via menu

---

## 💻 Linguagem Utilizada
- Linguagem C
- Compilador: `gcc`

## ✨ Abel Souza Costa Junior
Desenvolvido como exercício de prática em **Listas Ligadas em C**.
