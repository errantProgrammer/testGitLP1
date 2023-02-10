/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConferencePaper.h
 * Author: Gabo
 *
 * Created on 16 de noviembre de 2022, 11:10 PM
 */

#ifndef CONFERENCEPAPER_H
#define CONFERENCEPAPER_H

#include "Paper.h"


class ConferencePaper :public Paper{
public:
    ConferencePaper();
    virtual ~ConferencePaper();
    void SetHost_country(char* host_country);
    void GetHost_country(char* cad) const;
    void SetConference_name(char* conference_name);
    void GetConference_name(char* cad) const;
    void SetConferencePaper(char *name,char *country,int id,char *title, char *author,int year);
    void leerDatos(ifstream &arch);
    void citar(ofstream &arch);
private:
    char * conference_name;
    char * host_country;
};

#endif /* CONFERENCEPAPER_H */

