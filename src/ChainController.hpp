/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChainController.hpp
 * Author: andre
 *
 * Created on June 9, 2016, 4:20 PM
 */

#ifndef CHAINCONTROLLER_HPP
#define CHAINCONTROLLER_HPP

#include "AbstractChainElement.hpp"
#include "MyDataObject.hpp"
#include <vector>

#include <memory>

using namespace std;

/**
 * Classe controller do chain
 */
 
class ChainController {
private:
    vector< unique_ptr<AbstractChainElement> > chainUnits;
    unique_ptr<MyDataObject> myData;
public:
    ChainController();
    void start();
    void loadData();

    void processChain();

    void prepareChain();

    void createElements();
 
};

#endif /* CHAINCONTROLLER_HPP */

