#include "AbstractChainElement.hpp"
#include <string>

using namespace std;


/**
 * Classe derivada de AbstractChainElement.
 * Tem a função de contar e informar quantos caracteres possui a string
 */
class CharCounterConcreteChainElement : public AbstractChainElement {
private:
    int tamanho;
    const string name = "CharCounterConcreteChainElement";
    void internalProcessing(MyDataObject *value) override;
    void writeResults(MyDataObject *value) override; 

public:
    CharCounterConcreteChainElement();
    virtual ~CharCounterConcreteChainElement();
    string getName() override;
};


