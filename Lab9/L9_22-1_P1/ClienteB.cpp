/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClienteB.cpp
 * Author: Gabo
 * 
 * Created on 16 de noviembre de 2022, 09:48 AM
 */

#include "ClienteB.h"


//ClienteB::ClienteB(const ClienteB& orig) {
//}


void ClienteB::SetFlete(double flete) {
    this->flete = flete;
}

double ClienteB::GetFlete() const {
    return flete;
}

void ClienteB::SetDescuento(double descuento) {
    this->descuento = descuento;
}

double ClienteB::GetDescuento() const {
    return descuento;
}

void ClienteB::lee(ifstream &arch){
    double descuento,flete;
    int dni;
    char cad[80],c;
    arch>>descuento>>c>>flete>>c>>dni>>c;
    arch.getline(cad,80);
    SetDni(dni);
    SetNombre(cad);
    SetDescuento(descuento);
    SetCategoria('B');
    SetFlete(flete);
}
void ClienteB::imprime(ofstream &arch){
        char cad[80];
    GetNombre(cad);
    arch<<setw(20)<<left<<GetDni()<<left<<cad<<endl;
    imprimeLinea(arch,100,'-');
    arch<<setw(12)<<left<<"Descuento: "<<setw(3)<<right<<descuento<<"%"<<
                        setw(12)<<right<<"Flete:"<<setw(8)<<right<<GetFlete()<<endl;
    arch<<setw(10)<<left<<"Total:"<<setw(6)<<right<<GetTotalped()<<endl;
    arch<<setw(25)<<left<<"Cantidad de Pedidos:"<<setw(3)<<right<<GetCantped()<<endl;
}

