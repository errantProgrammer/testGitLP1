/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Grave.cpp
 * Author: Gabo
 * 
 * Created on 8 de noviembre de 2022, 06:48 PM
 */

#include "Grave.h"

Grave::Grave() {
    puntos=0;
    descuento=0;
}


Grave::~Grave() {
}

void Grave::SetPuntos(int puntos) {
    this->puntos = puntos;
}

int Grave::GetPuntos() const {
    return puntos;
}

void Grave::SetDescuento(double descuento) {
    this->descuento = descuento;
}

double Grave::GetDescuento() const {
    return descuento;
}

void Grave::operator = (const Grave &c){
    SetCodigo(c.GetCodigo());
    SetDescuento(c.GetDescuento());
    SetFecha(c.GetFecha());
    char cad[100];
    c.GetGravedad(cad);
    SetGravedad(cad);
    SetMulta(c.GetMulta());
    c.GetPlaca(cad);
    SetPlaca(cad);
    SetPuntos(c.GetPuntos());
}

void Grave::imprime(ofstream &arch){
    char placa[20];
    GetPlaca(placa);
    arch<<setw(15)<<left<<GetFecha()<<placa<<endl;
}
