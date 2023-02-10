/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Copia.h
 * Author: Gabo
 *
 * Created on 10 de noviembre de 2022, 07:28 PM
 */

#ifndef COPIA_H
#define COPIA_H
#include "Libro.h"
#include "Disponible.h"
#include "Prestamo.h"
#include "Perdida.h"
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;
class Copia:public Libro {
public:
    Copia();
    virtual ~Copia();
    void operator = (const Copia &c);
    void SetEstado(char* estado);
    void GetEstado(char* cad) const;
    void SetNumero(int numero);
    int GetNumero() const;
    void SetDisponible(int zona);
    void imprimeCopia(ofstream &arch);
    void SetPerdida(double precio);
    void SetPrestamo(int dias,int fecha);
private:
    int numero;
    char *estado;
    Disponible Odisponible;
    Prestamo Oprestamo;
    Perdida Operdida;
};

#endif /* COPIA_H */

