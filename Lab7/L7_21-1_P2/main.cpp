/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Gabo
 *
 * Created on 2 de noviembre de 2022, 12:13 AM
 */

#include <iostream>
#include <iomanip>
#include "Conductores.h"
#include "FuncionesAuxiliares.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Conductores oonductores[200];
    int nConductores,nFaltas,nInfrac;
    Falta faltas[1000];
    Infraccion infracciones[200];
    cargaConductores(oonductores,nConductores);
    cargaFaltas(oonductores,nConductores);
    asignarInfracciones(oonductores,nConductores);
    imprimirReporte(oonductores,nConductores);
    return 0;
}

