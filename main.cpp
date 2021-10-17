// TODO: parsear la respuesta de la API Directions para obtener la ruta al destino.
// TODO: armar una clase que interactue con las otras 3.
#include <iostream>
#include "Directions_Request.h"
#include "Sistema_Estacionamientos.h"
#include "Sistema_Parquimetros.h"

#define UBICACION1 "Adrogue"
#define UBICACION2 "Avellaneda"

using std::cout, std::endl;

std::vector<Estacionamiento> generarEstacionamientos();
void test();

int main()
{
    test();

    return 0;
}

void test()
{
    auto request = Directions_Request(UBICACION1, UBICACION2, AUTO);
    std::string respuesta = request.request();
    cout << respuesta;

    //auto sistemaEstacionamiento = Sistema_Estacionamientos(generarEstacionamientos());
    //auto sistemaParquimetro = Sistema_Parquimetros(sistemaEstacionamiento);
    //sistemaParquimetro.Estacionar(UBICACION1);
    //sistemaParquimetro.MostrarEstacionamientos(UBICACION1);
}

std::vector<Estacionamiento> generarEstacionamientos()
{
    std::vector<Estacionamiento> estacionamientos = {};
    for(int i = 0; i < 20; i++)
    {
        std::string nombre = "estacionamiento " + std::to_string(i + 1);
        if(i <= 10)
            estacionamientos.emplace_back(nombre, UBICACION1, 30);
        else
            estacionamientos.emplace_back(nombre, UBICACION2, 30);
    }
    return estacionamientos;
}
