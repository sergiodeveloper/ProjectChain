

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
   
/**
 * Obter nome do elemento de processamento
 */
string TransposeCriptoConcreteChainElement::getName()
   {
   return (this->name);
   }

/**
 * Criptografar uma string com uma determinada chave usando transposição
 */
void TransposeCriptoConcreteChainElement::internalProcessing(MyDataObject* value){   
      string buffer = value->getValue();
     for (int count = 0; count < buffer.size(); count++){
         buffer.at(count) = buffer.at(count) + key;
         }
      value->setValue(buffer);
}

/**
 * Ler chave a ser usada na transposição
 */
void TransposeCriptoConcreteChainElement::readParameters(){
   
   int result;
   string buffer;
   
   cout << "\t\tWhat is the criptografic key? (type a number) ";
   getline(cin, buffer);
   result = stoi(buffer);
   
   key = result;
   cout << "\t\tKey ...: [" << key << "] accepted." << endl;
}
