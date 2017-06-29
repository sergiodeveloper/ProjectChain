#include <cctype>
#include <iostream>
#include "ToCounterConcreteChainElement.hpp"

using namespace std;

ToCounterConcreteChainElement::ToCounterConcreteChainElement()
   {
   this->setNext(NULL);
   }

ToCounterConcreteChainElement::~ToCounterConcreteChainElement()
   {
   this->setNext(NULL);
   }

string ToCounterConcreteChainElement::getName()
   {
   return (this->name);
   }

/**
 *	Retorna a quantidade de caracteres de um MyDataObject
 */
void ToCounterConcreteChainElement::internalProcessing(MyDataObject *value)
   {
		tamanho = 0;
		string buffer = value->getValue();
		for(int i=0; i < buffer.size(); i++){
			tamanho++;
		}
		
   }

void ToCounterConcreteChainElement::writeResults(MyDataObject *value){
	cout << "Quantidade de caracteres: " << tamanho << endl;
}
