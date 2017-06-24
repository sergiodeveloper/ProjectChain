#ifndef TOCAPITALIZEDCONCRETECHAINELEMENT_HPP
#define TOCAPITALIZEDCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class ToCapitalizedConcreteChainElement : public AbstractChainElement {
private:
    const string name = "ToCapitalizedConcreteChainElement";
    void internalProcessing(MyDataObject* value) override;

public:
    ToCapitalizedConcreteChainElement();
    virtual ~ToCapitalizedConcreteChainElement();
    string getName() override;
};

#endif /* TOCAPITALIZEDCONCRETECHAINELEMENT_HPP */
