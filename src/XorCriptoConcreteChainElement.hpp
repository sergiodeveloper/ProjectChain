/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   XorCriptoConcreteChainElement.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 5:50 PM
 */

#ifndef XORCRIPTOCONCRETECHAINELEMENT_HPP
#define XORCRIPTOCONCRETECHAINELEMENT_HPP

#include "AbstractChainElement.hpp"
#include <string>

using namespace std;

/**
 * Essa classe tem a função de criptografar uma string
 */
class XorCriptoConcreteChainElement : public AbstractChainElement {
private:
    const string name = "XorCriptoConcreteChainElement";
    string       key = "";
    
    void internalProcessing(MyDataObject* value) override;
    void readParameters() override;

public:
    XorCriptoConcreteChainElement();
    virtual ~XorCriptoConcreteChainElement();
    string getName() override;
};

#endif /* XORCRIPTOCONCRETECHAINELEMENT_HPP */

