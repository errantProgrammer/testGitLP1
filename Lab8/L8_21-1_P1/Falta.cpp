/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Falta.cpp
 * Author: Gabo
 * 
 * Created on 8 de noviembre de 2022, 06:43 PM
 */

#include "Falta.h"
#include <cstring>

Falta::Falta() {
    fecha = 0;
    placa = nullptr;
}

Falta::~Falta() {
    if(placa)delete placa;
}

void Falta::SetPlaca(char* cad) {
    if(placa)delete placa;
    if(cad){
        placa = new char [strlen(cad)+1];
        strcpy(placa,cad);
    }else{
        placa = new char[2];
        strcpy(placa,"0");
    }
}

void Falta::GetPlaca(char *cad) const {
    if(placa)strcpy(cad,placa);
    else strcpy(cad,"0");
}

void Falta::SetFecha(int fecha) {
    this->fecha = fecha;
}

int Falta::GetFecha() const {
    return fecha;
}

