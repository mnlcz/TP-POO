//
// Created by MnLCz on 25/9/2021.
//

#ifndef TP_POO_SISTEMA_PARQUIMETROS_H
#define TP_POO_SISTEMA_PARQUIMETROS_H

#include "Sistema_Estacionamientos.h"

class Sistema_Parquimetros
{
private:
    Sistema_Estacionamientos estacionamientos;
public:
    explicit Sistema_Parquimetros(const Sistema_Estacionamientos& SE);
    std::vector<Estacionamiento> EstacionamientosDisponibles(const std::string& ubicacion);
    void MostrarEstacionamientos();
    void MostrarEstacionamientos(const std::string& ubicacion);
    void Estacionar(const std::string& ubicacion);  // Para testear el funcionamiento, borrarla luego.
};


#endif //TP_POO_SISTEMA_PARQUIMETROS_H
