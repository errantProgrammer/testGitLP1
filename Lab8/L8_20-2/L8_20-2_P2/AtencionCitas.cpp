/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AtencionCitas.cpp
 * Author: Gabo
 * 
 * Created on 8 de noviembre de 2022, 12:24 AM
 */

#include "AtencionCitas.h"
#include "FuncionesLecturaEscritura.h"

AtencionCitas::AtencionCitas() {
}

AtencionCitas::~AtencionCitas() {
    
}



void AtencionCitas::leePacientes(const char *nomb){
    ifstream arch;
    AbrirArchivo(nomb,arch);
    while(1){
    arch>>lista;
        if(arch.eof())break;
    }
}
void AtencionCitas::imprimePacientes(const char *nomb){
    ofstream arch;
    AbrirArchivo(nomb,arch);
    arch<<lista;
}

