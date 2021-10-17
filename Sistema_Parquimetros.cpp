//
// Created by MnLCz on 25/9/2021.
//

#include "Sistema_Parquimetros.h"
#include <iostream>

Sistema_Parquimetros::Sistema_Parquimetros(const Sistema_Estacionamientos& SE)
{
    estacionamientos = SE;
}

std::vector<Estacionamiento> Sistema_Parquimetros::EstacionamientosDisponibles(const std::string& ubicacion)
{
    std::vector<Estacionamiento> estacionamientosDisponibles = estacionamientos.EstacionamientosCerca(ubicacion);
    for(int i = 0; i < estacionamientosDisponibles.size(); i++)
        if(estacionamientosDisponibles[i].lugaresDisponibles == 0)
            estacionamientosDisponibles.erase(estacionamientosDisponibles.begin() + i);
    return estacionamientosDisponibles;
}

void Sistema_Parquimetros::MostrarEstacionamientos()
{
    for (const Estacionamiento& e : estacionamientos.Estacionamientos())
    {
        std::cout << e.nombre << "\tUbicacion: " << e.ubicacion << "\t\tLugares disponibles: " << e.lugaresDisponibles << std::endl;
    }
}

void Sistema_Parquimetros::MostrarEstacionamientos(const std::string& ubicacion)
{
    for(const Estacionamiento& e : EstacionamientosDisponibles(ubicacion))
    {
        std::cout << e.nombre << "\tUbicacion: " << e.ubicacion << "\t\tLugares disponibles: " << e.lugaresDisponibles << std::endl;
    }
}

void Sistema_Parquimetros::Estacionar(const std::string& ubicacion)
{
    if (this->EstacionamientosDisponibles(ubicacion).size() == 0)
    {
        std::cout << "No hay estacionamientos disponibles" << std::endl;
        return;
    }
    for (Estacionamiento& e : this->estacionamientos.Estacionamientos())
    {
        if (e.ubicacion == ubicacion && e.lugaresDisponibles > 0)
        {
            e.lugaresDisponibles--;
            return;
        }
    }
    std::cout << "No hay lugares disponibles" << std::endl;
}
