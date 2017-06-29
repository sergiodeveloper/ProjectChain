#ifndef TOREVERSECONCRETECHAINELEMENT_HPP
#define TOREVERSECONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

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


