/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyDataObject.cpp
 * Author: andre
 * 
 * Created on June 9, 2016, 4:00 PM
 */

#include "MyDataObject.hpp"

/**
 * Construtor. Inicializa uma instância de MyDataObject com um valor
 */
MyDataObject::MyDataObject(const string newValue)
   {
   this->myDataValue = newValue;
   }

/**
 * Construtor de cópia
 */
MyDataObject::MyDataObject(const MyDataObject& orig)
   {
   this->myDataValue = orig.myDataValue;
   }

/**
 * Destrutor. Limpa os dados armazenados na instância
 */
MyDataObject::~MyDataObject()
   {
   this->myDataValue = "";
   }

/**
 * Altera o valor armazenado pela instância
 */
void MyDataObject::setValue(string newValue)
   {
   this->myDataValue = newValue;
   }

/**
 * Retorna o valor armazenado na instância
 */
string MyDataObject::getValue()
   {
   return(myDataValue);
   }
