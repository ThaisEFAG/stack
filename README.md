# Projeto Stack - Aprendendo Estruturas de Dados

Este repositório contém o código de um projeto simples que implementa uma **pilha (stack)** em linguagem **C**. O objetivo desse projeto é entender os conceitos de estruturas de dados e manipulação de memória, como a utilização de ponteiros e alocação dinâmica com `malloc` e `free`.

## Descrição

O programa permite ao usuário empilhar (push), desempilhar (pop) e imprimir os elementos de uma pilha. Ele é construído usando uma estrutura de lista encadeada, onde cada elemento da pilha é representado por um nó que contém um dado e um ponteiro para o próximo nó.

O menu interativo permite ao usuário escolher entre as seguintes opções:

1. **Empilhar**: Adiciona um novo elemento à pilha.
2. **Desempilhar**: Remove o elemento no topo da pilha.
3. **Imprimir**: Exibe os elementos da pilha.
4. **Sair**: Finaliza o programa.

## Funcionalidades

- **Empilhar**: Adiciona um elemento no topo da pilha.
- **Desempilhar**: Remove o elemento do topo da pilha, se não estiver vazia.
- **Imprimir**: Exibe todos os elementos da pilha, do topo para a base.

Para compilar com o docker:
docker build -t stack-app .

Executar o container:
docker run -it stack-app
