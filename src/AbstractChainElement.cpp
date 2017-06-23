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

AbstractChainElement::AbstractChainElement()
   {
   nextElement = NULL;
   }

AbstractChainElement::~AbstractChainElement()
   {
   nextElement = NULL;
   }

void AbstractChainElement::setNext(AbstractChainElement* next)
   {
   this->nextElement = next;
   }

AbstractChainElement* AbstractChainElement::getNext()
   {
   return(this->nextElement);
   }

void AbstractChainElement::doProcessing(MyDataObject* value)
   {
   if(value != NULL)
      {
      cout << "\t" << this->getName() << ":" << endl;
      
      this->readParameters();
      
      cout << "\t\tFrom ..: " << value->getValue() << endl;
      internalProcessing(value);
      cout << "\t\tTo ....: " << value->getValue() << endl;
      
      if(this->nextElement != NULL)
         {
         nextElement->doProcessing(value);
         }
      }
   }

void AbstractChainElement::readParameters()
   {
   // do nothing. May be overrided only if it was necessary.
   }
