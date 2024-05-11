#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    virtual ~Product() {}
    virtual string operation() const = 0;
};

class ConcreteProduct : public Product {
public:
    string operation() const override {
        return "Resultado do Produto Concreto";
    }
};

class Creator {
public:
    virtual ~Creator() {}
    virtual Product* factoryMethod() const = 0;

    string someOperation() const {
        Product* product = factoryMethod();
        string result = "Criador: O mesmo código do criador acaba de funcionar com "
                             + product->operation();
        delete product;
        return result;
    }
};

class ConcreteCreator : public Creator {
public:
    Product* factoryMethod() const override {
        return new ConcreteProduct();
    }
};

int main() {
    Creator* creator = new ConcreteCreator();
    cout << creator->someOperation() << endl;
    delete creator;

    return 0;
}
