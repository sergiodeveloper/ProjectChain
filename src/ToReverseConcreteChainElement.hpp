#ifndef TOREVERSECONCRETECHAINELEMENT_HPP
#define TOREVERSECONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

/**
 * Essa classe tem a função de inverter os caracteres de uma string
 */
class ToReverseConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToReverseConcreteChainElement";
    void internalProcessing(MyDataObject* value) override;

public:
    ToReverseConcreteChainElement();
    virtual ~ToReverseConcreteChainElement();
    string getName() override;
};

#endif /* TOREVERSECONCRETECHAINELEMENT_HPP */


