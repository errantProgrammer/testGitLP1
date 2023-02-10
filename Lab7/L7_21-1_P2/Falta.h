/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Falta.h
 * Author: Gabo
 *
 * Created on 1 de noviembre de 2022, 10:24 PM
 */

#ifndef FALTA_H
#define FALTA_H

class Falta {
public:
    Falta();
    virtual ~Falta();
    void SetFecha(int fecha);
    int GetFecha() const;
    void SetCodInf(int codInf);
    int GetCodInf() const;
    void SetPlaca(char* placa);
    char* GetPlaca() const;
    void SetLicencia(int licencia);
    int GetLicencia() const;
    void copia(const Falta &c);
private:
    int licencia;
    char *placa;
    int codInf;
    int fecha;
};

#endif /* FALTA_H */

