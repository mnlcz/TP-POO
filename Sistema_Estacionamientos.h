//
// Created by MnLCz on 25/9/2021.
//

#ifndef TP_POO_SISTEMA_ESTACIONAMIENTOS_H
#define TP_POO_SISTEMA_ESTACIONAMIENTOS_H

#include <string>
#include <vector>

struct Estacionamiento
{
    std::string nombre;
    std::string ubicacion;
    unsigned int lugaresDisponibles;

    Estacionamiento(const std::string& nombre, const std::string& ubicacion, unsigned int lugaresDisponibles);
};

class Sistema_Estacionamientos
{
private:
    std::vector<Estacionamiento> estacionamientos;
public:
    Sistema_Estacionamientos();
    explicit Sistema_Estacionamientos(const std::vector<Estacionamiento>& estacionamientos);
    std::vector<Estacionamiento>& Estacionamientos();
    std::vector<Estacionamiento> EstacionamientosCerca(const std::string& ubicacion) const;
};


#endif //TP_POO_SISTEMA_ESTACIONAMIENTOS_H
