# Exemplo de Uso do Padrão Decorator em C++

Este é um exemplo de implementação do padrão de design Decorator em C++.

## Padrão Decorator

O padrão Decorator permite adicionar funcionalidades adicionais a objetos de forma dinâmica, sem modificar sua estrutura básica.

## Problema

Quando precisamos adicionar funcionalidades extras a objetos de forma flexível, sem alterar sua estrutura básica, modificar a classe base diretamente pode ser problemático, violando o princípio aberto/fechado do design orientado a objetos.

## Solução

O padrão Decorator resolve esse problema encapsulando os objetos originais em classes de decoradores concretos, cada um adicionando suas próprias funcionalidades.

## Exemplo de Código

O exemplo fornecido consiste em três classes principais:
- `Component`: Define a interface para objetos que podem ter responsabilidades adicionadas a eles.
- `Decorator`: Classe base para todos os decoradores concretos. Mantém um ponteiro para um componente.
- `ConcreteDecoratorA` e `ConcreteDecoratorB`: Implementações concretas de decoradores que adicionam funcionalidades específicas.

