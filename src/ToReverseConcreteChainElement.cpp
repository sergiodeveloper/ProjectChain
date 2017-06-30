

#include <cctype>
#include "ToReverseConcreteChainElement.hpp"
#include <iostream>

ToReverseConcreteChainElement::ToReverseConcreteChainElement()
   {
   this->setNext(NULL);
   }

ToReverseConcreteChainElement::~ToReverseConcreteChainElement()
   {
   this->setNext(NULL);
   }

string ToReverseConcreteChainElement::getName()
   {
   return (this->name);
   }

/**
 *	Inverte os caracteres de uma string 
 */
void ToReverseConcreteChainElement::internalProcessing(MyDataObject* value)
   {
    string buffer = value->getValue();
    for(int count = 0; count < buffer.size() / 2; count++){
      // Swap chars
      char aux = buffer.at(count);
      buffer.at(count) = buffer.at(buffer.size()-1 - count);
      buffer.at(buffer.size()-1 - count) = aux;
    }
    value->setValue(buffer);
   }
