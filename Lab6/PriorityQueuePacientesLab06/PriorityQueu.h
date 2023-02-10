/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PriorityQueu.h
 * Author: Gabo
 *
 * Created on 20 de octubre de 2022, 10:27 PM
 */

#ifndef PRIORITYQUEU_H
#define PRIORITYQUEU_H
#include <fstream>
using namespace std;
void crearCola(void *&cl,ifstream &arch,int (*obtienePrioridad)(void *dato),
        void *(*leeRegistro)(ifstream &arch));
void encolar(void *cl,void *dato,int (*obtienePrioridad)(void *dato));
void *desencolar(void *cl);
int es_cola_vacia(void *cl);
void prueba(void *cl,void (*imprimeReg)(void *dato,ofstream &arch),ofstream &arch);

#endif /* PRIORITYQUEU_H */

