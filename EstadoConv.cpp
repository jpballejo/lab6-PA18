/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EstadoConv.cpp
 * Author: esteban
 * 
 * Created on 5 de junio de 2018, 01:31 AM
 */

#include "EstadoConv.h"

EstadoConv::EstadoConv(Usuario * usC, Conversacion * conv) {
    this->usuario=usC;
    this->conv=conv;
    
}

void EstadoConv::setEstado(bool archivada) {
    this->archivada = archivada;
}
bool EstadoConv::ConvActiva(){
    return this->archivada;
}

void EstadoConv::setUsuario(Usuario* usuario) {
    this->usuario = usuario;
}

Usuario* EstadoConv::getUsuario() const {
    return usuario;
}





void EstadoConv::SetConv(Conversacion* conv) {
    this->conv = conv;
}

Conversacion* EstadoConv::GetConv() const {
    return conv;
}




EstadoConv::EstadoConv(const EstadoConv& orig) {
}

EstadoConv::~EstadoConv() {
}

