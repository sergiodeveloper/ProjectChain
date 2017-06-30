/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   XorCriptoConcreteChainElement.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 5:50 PM
 */

#include <cctype>
#include <iostream>
#include "XorCriptoConcreteChainElement.hpp"

XorCriptoConcreteChainElement::XorCriptoConcreteChainElement()
   {
   this->setNext(NULL);
   }

XorCriptoConcreteChainElement::~XorCriptoConcreteChainElement()
   {
   this->setNext(NULL);
   }

/**
 * Obter nome do elemento de processamento
 */
string XorCriptoConcreteChainElement::getName()
   {
   return (this->name);
   }

/**
 * Criptografar/descriptografar o dado usando a operação XOR nos caracteres com uma chave fornecida
 */
void XorCriptoConcreteChainElement::internalProcessing(MyDataObject* value)
   {
   int cycle = 0;
   
   if (key.size() != 0)
      {
      string buffer = value->getValue();

      for (int count = 0; count < buffer.size(); count++)
         {
         buffer.at(count) = (char) (((int)buffer.at(count)) ^ key.at(cycle));
         cycle = (cycle + 1)%key.size();
         }
      value->setValue(buffer);
      }
   }

/**
 * Ler chave para criptografia
 */
void XorCriptoConcreteChainElement::readParameters()
   {
   cout << "\t\tWhat is the criptografic key? ";
   
   string buffer;
   getline(cin, buffer);
   
   key = buffer;
   cout << "\t\tKey ...: [" << key << "] accepted." << endl;
   }
