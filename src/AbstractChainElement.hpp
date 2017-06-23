/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:09 PM
 */

#ifndef ABSTRACTCHAINELEMENT_HPP
#define ABSTRACTCHAINELEMENT_HPP

#include <string>

#include "MyDataObject.hpp"
using namespace std;

class AbstractChainElement {
private:
    AbstractChainElement * nextElement;
    virtual void internalProcessing(MyDataObject *) = 0;
    virtual void readParameters();
    
public:
    AbstractChainElement();
    virtual ~AbstractChainElement();
    virtual void setNext(AbstractChainElement * next);
    virtual AbstractChainElement * getNext(void);
    
    virtual void doProcessing(MyDataObject * value);
    virtual string getName(void) = 0;
};

#endif /* ABSTRACTCHAINELEMENT_HPP */

