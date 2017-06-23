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

using namespace std;

ChainController::ChainController()
   {
   chainUnits.clear();
   myData = NULL;
   }

void ChainController::start(void)
   {
   // load the string to be processed
   loadData();
   // create the set of processing elements to the chain
   createElements();
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
   };

void ChainController::loadData(){
   myData = new MyDataObject(Info::getInstitution());
   }

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
   }

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

void ChainController::processChain()
   {
   cout << "Initial value ...: " << myData->getValue() << endl << endl;
   (chainUnits.at(0))->doProcessing(myData);
   cout << "\nFinal value .....: " << myData->getValue() << endl;
   }
