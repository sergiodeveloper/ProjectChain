#ifndef TRANSPOSECRIPTOCONCRETECHAINELEMENT_HPP
#define TRANSPOSECRIPTOCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

class TransposeCriptoConcreteChainElement : public AbstractChainElement {
private:
    const string name = "TransposeCriptoConcreteChainElement";
    int       key = 0;
    
    void internalProcessing(MyDataObject* value) override;
    void readParameters() override;

public:
    TransposeCriptoConcreteChainElement();
    virtual ~TransposeCriptoConcreteChainElement();
    string getName() override;
};

#endif /* TRANSPOSECRIPTOCONCRETECHAINELEMENT_HPP */

