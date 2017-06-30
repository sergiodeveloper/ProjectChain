#include <cctype>
#include <iostream>
#include "CharCounterConcreteChainElement.hpp"

using namespace std;

CharCounterConcreteChainElement::CharCounterConcreteChainElement()
   {
   this->setNext(NULL);
   }

CharCounterConcreteChainElement::~CharCounterConcreteChainElement()
   {
   this->setNext(NULL);
   }

/**
 * Obter nome do elemento de processamento
 */
string CharCounterConcreteChainElement::getName()
   {
   return (this->name);
   }

/**
 * Encontrar a quantidade de caracteres em um dado
 */
void CharCounterConcreteChainElement::internalProcessing(MyDataObject *value)
   {
		tamanho = value->getValue().size();
   }

/**
 * Imprimir quantidade de caracteres encontrada
 */
void CharCounterConcreteChainElement::writeResults(MyDataObject *value){
	cout << "Quantidade de caracteres: " << tamanho << endl;
}
