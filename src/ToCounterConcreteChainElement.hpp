#include "AbstractChainElement.hpp"
#include <string>

using namespace std;


/**
 * Classe derivada de AbstractChainElement.
 * Tem a função de contar e informar quantos caracteres possui a string
 */
class ToCounterConcreteChainElement : public AbstractChainElement {
private:
    int tamanho;
    const string name = "ToCounterConcreteChainElement";
    void internalProcessing(MyDataObject *value) override;
    void writeResults(MyDataObject *value) override; 

public:
    ToCounterConcreteChainElement();
    virtual ~ToCounterConcreteChainElement();
    string getName() override;
};


