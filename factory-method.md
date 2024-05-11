# Exemplo de Uso do Padrão Factory Method em C++

Este é um exemplo de implementação do padrão de design Factory Method em C++.

## Padrão Factory Method

O padrão Factory Method é usado para criar objetos sem especificar explicitamente a classe exata do objeto que será criado. Isso promove a abstração e permite a extensão fácil.

## Problema

Quando precisamos criar objetos que compartilham uma interface comum, mas suas classes concretas podem variar dependendo das condições de execução, uma função de criação centralizada resolve esse problema de forma eficiente.

## Solução

O padrão Factory Method propõe a criação de uma classe abstrata `Creator`, que declara um método de fábrica abstrato para criar objetos. As subclasses concretas de `Creator` implementam esse método de fábrica para criar objetos de tipos específicos derivados de `Product`.

## Exemplo de Código

O exemplo fornecido consiste em duas classes principais:
- `Product`: Define a interface para os objetos que o método de fábrica criará.
- `Creator`: Declara o método de fábrica que retorna um objeto `Product`. 

