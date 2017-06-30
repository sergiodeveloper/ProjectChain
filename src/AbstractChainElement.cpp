/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:09 PM
 */

#include "AbstractChainElement.hpp"
#include <cstdlib>
#include <iostream>

using namespace std;

/**
 * Construtor. Inicializar elemento de processamento
 */
AbstractChainElement::AbstractChainElement()
   {
   nextElement = NULL;
   }

/**
 * Destrutor. Limpar referência para o próximo elemento
 */
AbstractChainElement::~AbstractChainElement()
   {
   nextElement = NULL;
   }

/**
 * Alterar qual será o próximo elemento da cadeia
 */
void AbstractChainElement::setNext(AbstractChainElement* next)
   {
   this->nextElement = next;
   }

/**
 * Obter qual é o próximo elemento da cadeia
 */
AbstractChainElement* AbstractChainElement::getNext()
   {
   return(this->nextElement);
   }

/**
 * Fazer o processamento do dado fornecido em cadeia (passando o dado processado
 *  para os próximos elementos de processamento)
 * 
 * @param value Valor a ser processado pela cadeia de elementos
 */
void AbstractChainElement::doProcessing(MyDataObject* value)
   {
   if(value != NULL)
      {
      cout << "\t" << this->getName() << ":" << endl;
      
      this->readParameters();
      
      cout << "\t\tFrom ..: " << value->getValue() << endl;
      internalProcessing(value);
      cout << "\t\tTo ....: " << value->getValue() << endl;
      
      this->writeResults(value);
      
      if(this->nextElement != NULL)
         {
         nextElement->doProcessing(value);
         }
      }
   }

/**
 * Ler parâmetros necessários para o processamento que será feito pelo elemento de processamento
 */
void AbstractChainElement::readParameters()
   {
   // do nothing. May be overrided only if it was necessary.
   }

/**
 * Imprimir resultados do processamento
 */
void AbstractChainElement::writeResults(MyDataObject *value){
	
}
   
