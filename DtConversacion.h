/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtConversacion.h
 * Author: esteban
 *
 * Created on 5 de junio de 2018, 03:18 AM
 */

#ifndef DTCONVERSACION_H
#define DTCONVERSACION_H

#include<iostream>

using namespace std;

class DtConversacion {
public:
    DtConversacion();
    DtConversacion(const DtConversacion& orig);
    virtual ~DtConversacion();
    
    int GetCel_Cantidad();
    int GetIdConversa();    
    string GetNombre();
  
    void SetCel_Cantidad(int);   
    void SetNombre(string);
    void SetIdConversa(int);
    
private:
    int idConversa;
    int Cel_Cantidad;
    string Nombre;

};

#endif /* DTCONVERSACION_H */

