#ifndef TOCAPITALIZEDCONCRETECHAINELEMENT_HPP
#define TOCAPITALIZEDCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;
/** 
 * Classe concreta derivada de abstract Chain
 * Tem a função de transformar as primeiras letras das palavras em maiusculo
 */
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
