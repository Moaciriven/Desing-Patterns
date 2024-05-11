#include <iostream>
#include <memory>
using namespace std;

class Component {
public:
    virtual ~Component() {}
    virtual void operation() const = 0;
};

class ConcreteComponent : public Component {
public:
    void operation() const override {
        cout << "Operação do Componente Concreto" << endl;
    }
};

class Decorator : public Component {
protected:
    shared_ptr<Component> component;
public:
    Decorator(shared_ptr<Component> component) : component(component) {}

    void operation() const override {
        if (component) {
            component->operation();
        }
    }
};

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(shared_ptr<Component> component) : Decorator(component) {}

    void operation() const override {
        Decorator::operation();
        cout << "Operação do Decorador Concreto A" << endl;
    }
};

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(std::shared_ptr<Component> component) : Decorator(component) {}

    void operation() const override {
        Decorator::operation();
        cout << "Operação do Decorador Concreto B" << endl;
    }
};

int main() {
    shared_ptr<Component> component = make_shared<ConcreteComponent>();
    shared_ptr<Decorator> decoratorA = make_shared<ConcreteDecoratorA>(component);
    shared_ptr<Decorator> decoratorB = make_shared<ConcreteDecoratorB>(decoratorA);

    decoratorB->operation();

    return 0;
}
