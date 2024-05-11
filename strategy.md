# Exemplo de Uso do Padrão Strategy em C++

Este é um exemplo de implementação do padrão de design Strategy em C++.

## Padrão Strategy

O padrão Strategy é usado para definir uma família de algoritmos, encapsulá-los e torná-los intercambiáveis. Isso permite que o algoritmo varie independentemente dos clientes que o utilizam.

## Problema

Quando há a necessidade de ter diferentes algoritmos que podem ser aplicados a um determinado contexto e a escolha do algoritmo deve ser flexível e dinâmica, o padrão Strategy é útil.

## Solução

O padrão Strategy propõe a definição de uma interface comum para todos os algoritmos, permitindo que eles sejam intercambiáveis. Classes concretas implementam essa interface para fornecer algoritmos específicos. Uma classe de contexto é então definida para manter uma referência à estratégia atual e delegar a execução do algoritmo para essa estratégia.

## Exemplo de Código

O exemplo fornecido consiste em três classes principais:
- `Strategy`: Define a interface para os algoritmos.
- `ConcreteStrategyA` e `ConcreteStrategyB`: Implementações concretas dos algoritmos.
- `Context`: Mantém uma referência à estratégia atual e delega a execução do algoritmo para essa estratégia.

