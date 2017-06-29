#include <cctype>
#include <iostream>
#include "TransposeCriptoConcreteChainElement.hpp"

TransposeCriptoConcreteChainElement::TransposeCriptoConcreteChainElement()
   {
   this->setNext(NULL);
   }

TransposeCriptoConcreteChainElement::~TransposeCriptoConcreteChainElement()
   {
   this->setNext(NULL);
   }

string TransposeCriptoConcreteChainElement::getName()
   {
   return (this->name);
   }

void TransposeCriptoConcreteChainElement::internalProcessing(MyDataObject* value){   
      string buffer = value->getValue();
     for (int count = 0; count < buffer.size(); count++){
         buffer.at(count) = buffer.at(count) + key;
         }
      value->setValue(buffer);
}

void TransposeCriptoConcreteChainElement::readParameters(){
   int buffer;
   cout << "\t\tWhat is the criptografic key? ";
   cin >> buffer;
   key = buffer;
   cout << "\t\tKey ...: [" << key << "] accepted." << endl;
}
