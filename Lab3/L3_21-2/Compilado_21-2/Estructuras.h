/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estructuras.h
 * Author: Gabo
 *
 * Created on 15 de septiembre de 2022, 12:01 AM
 */

#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

typedef struct{
    char codigoLib[12];
    int fechaDeRetiro;
    bool deuda;
    
}LibroPrestado;

typedef struct{
    int carne;
    char tipo[20];
    char nombre[50];
    LibroPrestado libPrest[20];
    int numLibPrest;
    char condicion[20];
}Usuario;

typedef struct{
    int carne;
    char tipo;
    int fechaDeRetiro;
    bool deuda;
}UsuarioPrestamo;

typedef struct{
    char codigo[12];
    char titulo[50];
    int stock;
    double precio;
    int prestados;
    UsuarioPrestamo estudiantes[20];
    UsuarioPrestamo docentes[20];
    UsuarioPrestamo administrativos[20];
    int cantEst;
    int cantDoc;
    int cantAdm;
}Libro;



#endif /* ESTRUCTURAS_H */

