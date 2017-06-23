#include <cctype>
#include "ToReversorConcreteChainElement.hpp"
#include <iostream>

ToReversorConcreteChainElement::ToReversorConcreteChainElement()
   {
   this->setNext(NULL);
   }

ToReversorConcreteChainElement::~ToReversorConcreteChainElement()
   {
   this->setNext(NULL);
   }

string ToReversorConcreteChainElement::getName()
   {
   return (this->name);
   }

void ToReversorConcreteChainElement::internalProcessing(MyDataObject* value)
   {
    string buffer = value->getValue();
    string buffer2 = value->getValue();
    for(int count = 0; count < buffer.size(); count++){
       buffer.at(count) = (buffer2.at(buffer2.size()-count-1));
      }
    value->setValue(buffer);
   //   std::cout << "Lalala";
   }
