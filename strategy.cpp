#include <iostream>
using namespace std;

class Strategy {
public:
    virtual void execute() const = 0;
    virtual ~Strategy() {}
};

class ConcreteStrategyA : public Strategy {
public:
    void execute() const override {
        cout << "Executando a Estratégia A" << endl;
    }
};

class ConcreteStrategyB : public Strategy {
public:
    void execute() const override {
        cout << "Executando a Estratégia B" << endl;
    }
};

class Context {
private:
    Strategy* strategy;
public:
    Context(Strategy* strategy) : strategy(strategy) {}

    void setStrategy(Strategy* strategy) {
        this->strategy = strategy;
    }

    void executeStrategy() const {
        strategy->execute();
    }
};

int main() {
    ConcreteStrategyA strategyA;
    ConcreteStrategyB strategyB;

    Context context(&strategyA);
    context.executeStrategy();

    context.setStrategy(&strategyB);
    context.executeStrategy();

    return 0;
}
