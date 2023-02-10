/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Persona.h
 * Author: Gabo
 *
 * Created on 24 de noviembre de 2022, 06:08 PM
 */

#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
class Persona {
public:
    Persona();
    virtual ~Persona();
    void SetCodigo(int codigo);
    int GetCodigo() const;
    void SetNombre(char* nombre);
    void GetNombre(char* cad) const;
    void SetDistrito(char* distrito);
    void GetDistrito(char* cad) const;
    void lee(ifstream &arch);
    virtual void leer(ifstream &arch)=0;
    virtual void imprime(ofstream &arch)=0;    
private:
    char *nombre;
    int codigo;
    char *distrito;
};

#endif /* PERSONA_H */

