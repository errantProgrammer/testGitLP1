/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ColaSol.h
 * Author: Gabo
 *
 * Created on 26 de noviembre de 2022, 08:40 PM
 */

#ifndef COLASOL_H
#define COLASOL_H

#include "NodoCola.h"


class ColaSol {
public:
    ColaSol();
    void encola(char *codLib,int carne);
    void desencola(char *codLib,int &carne);
    bool notEmpty();
    int size();
private:
    class NodoCola *inicola;
    class NodoCola *fincola;
    int n;
};

#endif /* COLASOL_H */

