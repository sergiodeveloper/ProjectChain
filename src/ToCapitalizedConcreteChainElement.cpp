

#include <cctype>
#include "ToCapitalizedConcreteChainElement.hpp"


ToCapitalizedConcreteChainElement::ToCapitalizedConcreteChainElement()
   {
   this->setNext(NULL);
   }

ToCapitalizedConcreteChainElement::~ToCapitalizedConcreteChainElement()
   {
   this->setNext(NULL);
   }

/**
 * Obter nome do elemento de processamento
 */
string ToCapitalizedConcreteChainElement::getName()
   {
   return (this->name);
   }

/**
 * Transforma a primeira letra de cada palavra em maiúscula
 */
void ToCapitalizedConcreteChainElement::internalProcessing(MyDataObject* value)
   {
   string buffer = value->getValue();
   
   for(int count = 0; count < buffer.size(); count++){
         if (count == 0 || buffer.at(count-1) == ' '){
            buffer.at(count) = toupper(buffer.at(count));
         }else{
            buffer.at(count) = tolower(buffer.at(count));
         }
   }
   value->setValue(buffer);
   }
