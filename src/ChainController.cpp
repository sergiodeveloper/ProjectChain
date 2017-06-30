/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChainController.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:20 PM
 */

#include <iostream>
#include "ChainController.hpp"
#include "Info.hpp"
#include "ToLowerConcreteChainElement.hpp"
#include "ToUpperConcreteChainElement.hpp"
#include "XorCriptoConcreteChainElement.hpp"
#include "ToReverseConcreteChainElement.hpp"
#include "ToCapitalizedConcreteChainElement.hpp"
#include "CharCounterConcreteChainElement.hpp"
#include "TransposeCriptoConcreteChainElement.hpp"
#include "Menu.h"

using namespace std;

ChainController::ChainController()
   {
   chainUnits.clear();
   myData = NULL;
   }

/**
 * Metódo que começa a execução do programa e processa instruções do menu principal
 */
void ChainController::start(void){
   vector<string> opcoes({
     "Sair do Sistema",
     "Definir texto de entrada",
     "Adicionar elementos de processamento",
     "Disparar cadeia de processamento"
   });
   Menu menu("Menu Principal", opcoes);
   int escolha = -1;
   
   while(escolha){
     escolha = menu.getEscolha();
     
     switch(escolha){
 	     case 1:
         // load the string to be processed
         loadData();
         break;
 	     case 2:
         // create the set of processing elements to the chain
         createElements();
         break;
       case 3: {
         // verify if there is at least one element in the chain
         if (chainUnits.size() > 0){
            // prepare the chain, linking the elements
            prepareChain();
            
            // Verify if there is an input string
            if(myData == NULL){
              cout << "Missing input string" << endl;
              loadData();
            }
            
            // process all elements in the chain
            processChain();
         }
         else{
            // no elements in the chain
            cout << "Nothing to do... empty chain!" << endl;
         }
       }
     }
   }
}


/**
 * Metodo que carrega a string a ser manipulada pelo sistema
 */
void ChainController::loadData(){
  char buffer[1025];
  
  cout << "\t\tPlease, type your input string: ";
  cin.getline(buffer, 1024);
  string inputString = string(buffer);
  cout << "\t\tInput String ...: [" << inputString << "] accepted." << endl;
  myData = unique_ptr<MyDataObject>( new MyDataObject(inputString) );
}

/**
 * Método que adiciona elementos de processamento (solicitados pelo usuário) ao vetor
 */
void ChainController::createElements(){
   vector<string> opcoes({
     "Voltar",
     "ToLowerConcreteChainElement",
     "ToUpperConcreteChainElement",
     "XorCriptoConcreteChainElement",
     "ToReverseConcreteChainElement",
     "ToCapitalizedConcreteChainElement",
     "CharCounterConcreteChainElement",
     "TransposeCriptoConcreteChainElement"
   });
   Menu menu("Escolha um elemento de processamento para adicionar", opcoes);
   int escolha = -1;
   
   while(escolha){
     escolha = menu.getEscolha();
     
     switch(escolha){
	   case 1:
       chainUnits.push_back( unique_ptr<AbstractChainElement>(new ToLowerConcreteChainElement()) );
       break;
	   case 2:
       chainUnits.push_back( unique_ptr<AbstractChainElement>(new ToUpperConcreteChainElement()) );
       break;
     case 3:
       chainUnits.push_back( unique_ptr<AbstractChainElement>(new XorCriptoConcreteChainElement()) );
       break;
     case 4:
       chainUnits.push_back( unique_ptr<AbstractChainElement>(new ToReverseConcreteChainElement()) );
       break;
     case 5:
       chainUnits.push_back( unique_ptr<AbstractChainElement>(new ToCapitalizedConcreteChainElement()) );
       break;
     case 6:
       chainUnits.push_back( unique_ptr<AbstractChainElement>(new CharCounterConcreteChainElement()) );
       break;
     case 7:
       chainUnits.push_back( unique_ptr<AbstractChainElement>(new TransposeCriptoConcreteChainElement()) );
       break;
     }
   }
}

/**
 * Encadeia os elementos de processamento na ordem que estão no vector
 */
void ChainController::prepareChain()
{
   if (chainUnits.size() > 1)
   {
      // set the chain
      for (int count = 0; count < (chainUnits.size() - 1); count++)
      {
         (chainUnits.at(count))->setNext( chainUnits.at(count + 1).get() );
      }
   }
}

/**
 * Método que faz o processamento do dado usando a cadeia de elementos de processamento
 */
void ChainController::processChain()
   {
   cout << "Initial value ...: " << myData->getValue() << endl << endl;
   (chainUnits.at(0))->doProcessing( myData.get() );
   cout << "\nFinal value .....: " << myData->getValue() << endl;
   }

