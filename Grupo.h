/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Grupo.h
 * Author: esteban
 *
 * Created on 5 de junio de 2018, 01:31 AM
 */

#ifndef GRUPO_H
#define GRUPO_H

#include"Tipo.h"
#include<iostream>
#include"DtFecha.h"
#include"DtHora.h"


using namespace std;

class Grupo {
public:
    Grupo();
    Grupo(const Grupo& orig);
    virtual ~Grupo();
        
    void SetCreador(int);
    DtFecha GetFecha();
    DtHora GetHora();
    int GetCreador();
    string GetImagen();
    string GetNombre();
       
    void SetFecha(DtFecha);    
    void SetHora(DtHora);    
    void SetImagen(string);    
    void SetNombre(string);
    Lista * getusuarios();
private:    
       
    //Conversacion * conv;
    string nombre;
    string imagen;
    DtFecha fecha;
    DtHora hora;    
    int creador; 
    Lista *tipo=new Lista();
};

#endif /* GRUPO_H */

