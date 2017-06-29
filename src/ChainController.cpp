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
#include "ToCounterConcreteChainElement.hpp"

using namespace std;

ChainController::ChainController()
   {
   chainUnits.clear();
   myData = NULL;
   }

/**
 * Metódo que começa a execução do programa
 */
void ChainController::start(void)
   {
   
   int option = 0;
   loadData();
   do{
   		option = this->showMenu();
   		
   		switch(option){
   			case 1:
   			chainUnits.push_back(new ToUpperConcreteChainElement());
   			break;
   			
   			case 2:
   			chainUnits.push_back(new ToLowerConcreteChainElement());
   			break;
   			
   			case 3:
   			chainUnits.push_back(new ToCapitalizedConcreteChainElement()); 
   			break;
   			
   			case 4:
   			chainUnits.push_back(new XorCriptoConcreteChainElement());
   			break;
   			
   			case 5:
   			chainUnits.push_back(new ToCounterConcreteChainElement());
   			break;
   			
   			case 6:
   			loadData();
   			break;
   			
   			case 0:
   			break;
   			
   			default:
   			cout << "Opção inválida" << endl;
   			break;
   		}
 
   // verify if there is at least one element in the chain
   if (chainUnits.size() > 0)
      {
      // prepare the chain, linking the elements
      prepareChain();
      // process all elements in the chain
      processChain();
      }
   else
      {
      // no elements in the chain
      cout << "Nothing to do... empty chain!" << endl;
      };
   		
   }while(option != 0);

   };

/**
 * Método que exibe o menu e retorna a opçao escolhida 
 */
int ChainController::showMenu(){
  
  int opcao;
  
  cout
  << " =============================================" << endl
  << "    Escolha uma opcao dentre as seguintes" << endl << endl
  << " 0. Sair" << endl
  << " 1. Deixar a string maiuscula" << endl
  << " 2. Deixar a string minuscula" << endl
  << " 3. Deixar apenas a primeira letra maiuscula" << endl
  << " 4. Criptografar a string" << endl
  << " 5. Contar os caracteres da string" << endl
  << " 6. Alterar Texto" << endl
  << " > ";
  
  cin >> opcao;
  return opcao;
}


/**
 * Metodo que carrega a string a ser manipulada pelo sistema
 */
void ChainController::loadData(){
   string text;
   cout << "Digite um texto pra ser manipulado: " << endl;
   cin >> text;
   myData = new MyDataObject(text);
   }

/**
 * Método que cria alguns elementos testes
 */
void ChainController::createElements()
   {
   chainUnits.push_back(new ToLowerConcreteChainElement());
   chainUnits.push_back(new ToUpperConcreteChainElement());
   chainUnits.push_back(new ToLowerConcreteChainElement());
   chainUnits.push_back(new XorCriptoConcreteChainElement());
   chainUnits.push_back(new XorCriptoConcreteChainElement());
   chainUnits.push_back(new XorCriptoConcreteChainElement());
   chainUnits.push_back(new XorCriptoConcreteChainElement());
   chainUnits.push_back(new ToUpperConcreteChainElement());
   chainUnits.push_back(new ToLowerConcreteChainElement());
   chainUnits.push_back(new ToReverseConcreteChainElement());
   chainUnits.push_back(new ToCapitalizedConcreteChainElement()); 
   }

/**
 * Liga todos os elementos
 */
void ChainController::prepareChain()
   {
   if (chainUnits.size() > 1)
      {
      // set the chain
      for (int count = 0; count < (chainUnits.size() - 1); count++)
         {
         (chainUnits.at(count))->setNext(chainUnits.at(count + 1));
         }
      }
   }

/**
 * Método que faz o processamento do chain chamando o metodo doChain
 */
void ChainController::processChain()
   {
   cout << "Initial value ...: " << myData->getValue() << endl << endl;
   (chainUnits.at(0))->doProcessing(myData);
   cout << "\nFinal value .....: " << myData->getValue() << endl;
   }

