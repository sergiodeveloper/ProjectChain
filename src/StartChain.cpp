/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StartChain.cpp
 * Author: andre
 *
 * Created on June 9, 2016, 3:45 PM
 */

#include <cstdlib>

using namespace std;

#include <cstdlib>
#include "Info.hpp"
#include "ChainController.hpp"

using namespace std;

/**
 * Ponto de entrada do programa, o qual saúda e despede do usuário
 *  e instancia a classe principal do programa e passa o controle para ela
 */
int main(int argc, char** argv) {
    ChainController * program = new ChainController();
    Info::wellcome();
    program->start();
    delete program;
    program = NULL;
    Info::goodbye();
    return (0);
}

