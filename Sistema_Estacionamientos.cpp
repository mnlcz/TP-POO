//
// Created by MnLCz on 25/9/2021.
//

#include "Sistema_Estacionamientos.h"
#include <iostream>

Estacionamiento::Estacionamiento(const std::string& nombre, const std::string& ubicacion, unsigned int lugaresDisponibles) : nombre(nombre),
                                                                                                         ubicacion(ubicacion),
                                                                                                         lugaresDisponibles(lugaresDisponibles) {}

Sistema_Estacionamientos::Sistema_Estacionamientos(const std::vector<Estacionamiento>& estacionamientos)
        : estacionamientos(estacionamientos) {}

std::vector<Estacionamiento>& Sistema_Estacionamientos::Estacionamientos()
{
    return estacionamientos;
}

Sistema_Estacionamientos::Sistema_Estacionamientos()
{
    estacionamientos = {};
}

std::vector<Estacionamiento> Sistema_Estacionamientos::EstacionamientosCerca(const std::string& ubicacion) const
{
    std::vector<Estacionamiento> estacionamientosCerca = {};
    for(const Estacionamiento& estacionamiento : estacionamientos)
    {
        if(estacionamiento.ubicacion == ubicacion)
            estacionamientosCerca.push_back(estacionamiento);
    }
    if(estacionamientosCerca.empty())
        std::cout << "No hay estacionamientos en la ubicacion brindada." << std::endl;
    return estacionamientosCerca;
}
