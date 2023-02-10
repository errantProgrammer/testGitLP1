/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   farmacia.cpp
 * Author: Gabo
 * 
 * Created on 17 de noviembre de 2022, 10:11 PM
 */

#include "farmacia.h"
#define MAXCANTLINEA 110

void imprimeLinea(ofstream &arch,int cant,char c);

void AbrirArchivo(const char *nomb,ifstream &arch){
    arch.open(nomb,ios::in);
    if(!arch){
        cout<<"Error, no se pudo abrir el archivo "<<nomb;
        exit(1);
    }
}

void AbrirArchivo(const char *nomb,ofstream &arch){
    arch.open(nomb,ios::out);
    if(!arch){
        cout<<"Error, no se pudo abrir el archivo "<<nomb;
        exit(1);
    }
}

farmacia::farmacia() {
}


farmacia::~farmacia() {

}


void farmacia::cargamedico(){
    ifstream arch;
    AbrirArchivo("medicos.csv",arch);
    int n=0;
    while(1){
        lmedico[n].leer(arch);
        if(arch.eof())break;
        n++;
    }
    
}
void farmacia::leerecetas(){
    ifstream arch;
    AbrirArchivo("recetas.csv",arch);
    int n=0;
    while(1){
        leer(arch,n);
        if(arch.eof())break;
    }
    
}

void farmacia::leer(ifstream &arch,int &n){
    int dd,mm,aa,dni,codmed,medicamento,cant,fecha;
    char c,nombPac[80],nombMedicamento[100],nombMedico[80],esp[50];
    double precio;
    arch>>dd>>c>>mm>>c>>aa>>c>>dni>>c;
    if(arch.eof())return;
    arch.getline(nombPac,80,',');
    arch>>codmed>>c;
    buscarMedico(codmed,nombMedico,esp);
    fecha= dd + mm*100 + aa*10000;
    while(1){
        arch>>medicamento>>c>>cant;
        buscaMedicamento(medicamento,nombMedicamento,precio);
        medicamentos[n].asignar(medicamento,nombMedicamento,cant,precio,
                fecha,codmed,esp,dni,nombPac);
        n++;
        if(arch.get()=='\n')break;
    }
}

void farmacia::buscarMedico(int codmed,char *nombMedico,char *esp){
    for(int i=0;lmedico[i].GetCodigo();i++){
        if(lmedico[i].GetCodigo()==codmed){
            lmedico[i].GetEspecialidad(esp);
            lmedico[i].GetNombre(nombMedico);
        }
    }
}
void farmacia::buscaMedicamento(int cod,char *nomb,double &precio){
    ifstream arch;
    int codigo;
    char c;
    AbrirArchivo("medicamentos.csv",arch);
    while(1){
        arch>>codigo>>c;
        if(arch.eof())break;
        if(codigo==cod){
            arch.getline(nomb,100,',');
            arch>>precio;
            return;
        }else arch.getline(nomb,100,'\n');
    }
    cout<<"error, no se pudo encontrar el medicamento"<<cod;
}
void farmacia::imprimirrecetas(){
    ofstream arch;
    AbrirArchivo("ReporteMedicinas.txt",arch);
    
    imprimeSinReceta(arch);
    imprimeConReceta(arch);
}

void imprimeLinea(ofstream &arch,int cant,char c){
    for(int i=0;i<cant;i++)arch<<c;
    arch<<endl;
}

void farmacia::imprimeSinReceta(ofstream &arch){
    arch<<setw(12)<<left<<"Codigo"<<setw(50)<<left<<"Descripcion del Med."<<setw(10)
            <<left<<"Cant."<<setw(18)<<left<<"DNI"<<left<<"Nombre"<<endl;
    imprimeLinea(arch,MAXCANTLINEA,'=');
    for(int i=0;medicamentos[i].activo();i++){
        if((medicamentos[i].codigo()/10000)%2!=0){
            medicamentos[i].imprime(arch);
        }
    }
    arch<<endl;
}
void farmacia::imprimeConReceta(ofstream &arch){
    arch<<setw(12)<<left<<"Codigo"<<setw(50)<<left<<"Descripcion del Med."<<setw(10)
            <<left<<"Cant."<<setw(18)<<left<<"Cod. Medico"<<left<<"Especialidad"<<endl;
    imprimeLinea(arch,MAXCANTLINEA,'=');
    for(int i=0;medicamentos[i].activo();i++){
        if((medicamentos[i].codigo()/10000)%2==0){
            medicamentos[i].imprime(arch);
        }
    }
    
}
