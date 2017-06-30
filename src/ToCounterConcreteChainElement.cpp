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

/**
 * Obter nome do elemento de processamento
 */
string ToCounterConcreteChainElement::getName()
   {
   return (this->name);
   }

/**
 * Encontrar a quantidade de caracteres em um dado
 */
void ToCounterConcreteChainElement::internalProcessing(MyDataObject *value)
   {
		tamanho = value->getValue.size();
   }

/**
 * Imprimir quantidade de caracteres encontrada
 */
void ToCounterConcreteChainElement::writeResults(MyDataObject *value){
	cout << "Quantidade de caracteres: " << tamanho << endl;
}
