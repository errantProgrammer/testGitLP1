/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RegistroUsuario.h
 * Author: Gabo
 *
 * Created on 26 de noviembre de 2022, 10:35 PM
 */

#ifndef REGISTROUSUARIO_H
#define REGISTROUSUARIO_H
#include "Usuario.h"
#include "RegistroPrestamo.h"
#include <list>
#include <iterator>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class RegistroUsuario {
public:
    void leeDatos(ifstream &arch);
    void imprimeDatos(ofstream &arch);
    void imprimeUsuario(ofstream &arch);
    void imprimeRegistros(ofstream &arch);
    bool suspendido(int fecha);
    int carne();
    void agregaPrestamo(char *codLib,int fecha);
private:
    class Usuario usuario;
    list<RegistroPrestamo>prestamos;
};

#endif /* REGISTROUSUARIO_H */

