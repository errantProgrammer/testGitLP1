/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ambulatorio.cpp
 * Author: alulab14
 * 
 * Created on 7 de noviembre de 2022, 10:41 AM
 */

#include "Ambulatorio.h"

Ambulatorio::Ambulatorio() {
    
}


Ambulatorio::~Ambulatorio() {
}

void Ambulatorio::SetProcSeguro(double procSeguro) {
    this->procSeguro = procSeguro;
}

double Ambulatorio::GetProcSeguro() const {
    return procSeguro;
}

void Ambulatorio::operator=(const Ambulatorio& c) {
    SetProcSeguro(c.GetProcSeguro());
    char cad[200];
    c.GetCodMed(cad);
    SetCodMed(cad);
    c.GetNombre(cad);
    SetNombre(cad);
    SetDni(c.GetDni());
}


