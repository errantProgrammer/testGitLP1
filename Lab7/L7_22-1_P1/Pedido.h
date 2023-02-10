/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pedido.h
 * Author: Gabo
 *
 * Created on 3 de noviembre de 2022, 10:43 AM
 */

#ifndef PEDIDO_H
    #define PEDIDO_H
#include <fstream>
using namespace std;

class Pedido {
public:
    Pedido();
    virtual ~Pedido();
    void SetFecha(int fecha);
    int GetFecha() const;
    void SetDni(int dni);
    int GetDni() const;
    void SetPrecio(double precio);
    double GetPrecio() const;
    void SetCantidad(int cantidad);
    int GetCantidad() const;
    void SetNombre(const char* cad);
    void GetNombre(char *cad) const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
    void operator = (const Pedido &c);
    void imprimepedido(ofstream &arch);
    void eliminar();
private:
    int codigo;
    char *nombre;
    int cantidad;
    double precio;
    int dni;
    int fecha;
};

#endif /* PEDIDO_H */

