/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Gabo
 *
 * Created on 14 de septiembre de 2022, 09:14 PM
 */

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
#include "Estructuras.h"
#include "BibliotecaFunc.h"
#include "AperturaDeArchivos.h"
/*
 * 
 */
int main(int argc, char** argv) {
    ifstream archClientes;
    ofstream archRep;
    struct Estructura_ClienteRegistrado cliente[30];
    AperturaDeUnArchivoDeTextosParaLeer(archClientes,"Clientes.txt");
    AperturaDeUnArchivoDeTextosParaEscribir(archRep,"Prueba.txt");
    
    struct Estructura_ClienteRegistrado cliente1,cliente2;
    struct Estructura_PedidoRealizado ped,ped2,ped3;
    struct Estructura_ProductosEnAlmacen productos[30],prod1,prod2,prod3;
    archClientes>>cliente1>>cliente2;
    cout<<"Llegue";
    ped.cantidad=10;
    strcpy(ped.codigo,"DOB245");
    ped.fecha=20201111;
    cliente[0].dni=0;
    archRep<<cliente1<<cliente2;
    cliente+=cliente1;
    cliente[0]+=ped;
    cliente[0]+=ped2;
    cliente[0]+=ped3;
    ped2.cantidad=5.54;
    strcpy(ped2.codigo,"QBL949");
    ped2.fecha=20191015;   
    
    strcpy(prod1.codigo,"DOB245");
    strcpy(prod1.descripcion,"LECHE_LALA_SEMI_DESLACTOSADA_1LT");
    prod1.descuento=0;
    prod1.precioUnitario=16.98;
    
    strcpy(prod2.codigo,"QBL949");
    strcpy(prod2.descripcion,"YOGHURT_NATURAL_LIGHT_LALA_1KG");
    prod2.descuento=4.7;
    prod2.precioUnitario=25.86;
    
    strcpy(prod3.codigo,"DOB245");
    strcpy(prod3.descripcion,"LECHE_LALA_SEMI_DESLACTOSADA_1LT");
    prod3.descuento=0;
    prod3.precioUnitario=16.98;
    strcpy(productos[0].codigo,"X");
    productos+=prod1;
    productos+=prod2;
    productos+=prod3;
    cout<<"Llegue";
    archRep<<productos;
    return 0;
}

