/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AtencionCitas.h
 * Author: Gabo
 *
 * Created on 8 de noviembre de 2022, 12:24 AM
 */

#ifndef ATENCIONCITAS_H
#define ATENCIONCITAS_H

#include "ListaDePacientes.h"


class AtencionCitas {
public:
    AtencionCitas();
    virtual ~AtencionCitas();
    void leePacientes(const char *nomb);
    void imprimePacientes(const char *nomb);
private:
    ListaDePacientes lista;
};

#endif /* ATENCIONCITAS_H */

