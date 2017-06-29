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
    string buffer2 = value->getValue();
    for(int count = 0; count < buffer.size(); count++){
       buffer.at(count) = (buffer2.at(buffer2.size()-count-1));
      }
    value->setValue(buffer);

   }
