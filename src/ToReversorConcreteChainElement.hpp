#ifndef TOREVERSORCONCRETECHAINELEMENT_HPP
#define TOREVERSORCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class ToReversorConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToReversorConcreteChainElement";
    void internalProcessing(MyDataObject* value) override;

public:
    ToReversorConcreteChainElement();
    virtual ~ToReversorConcreteChainElement();
    string getName() override;
};

#endif /* TOREVERSORCONCRETECHAINELEMENT_HPP */


