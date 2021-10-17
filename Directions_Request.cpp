//
// Created by MnLCz on 20/9/2021.
//

#include "Directions_Request.h"
#include <fstream>

const std::string& Directions_Request::getOrigen() const
{
    return origen;
}

const std::string& Directions_Request::getDestino() const
{
    return destino;
}

std::string Directions_Request::getTransporte() const
{
    std::string strTransporte;
    switch (transporte)
    {
        case AUTO:
            strTransporte = "mode=driving";
            break;
        case CAMINANDO:
            strTransporte = "mode=walking";
            break;
        case BICICLETA:
            strTransporte = "mode=bicycling";
            break;
    }
    return strTransporte;
}

Directions_Request::Directions_Request(std::string salida, std::string destino, Modo transporte)
{
    Directions_Request::origen += salida;
    Directions_Request::destino += destino;
    Directions_Request::transporte = transporte;
}

std::string Directions_Request::armarUrl()
{
    Directions_Request::url += origen + "&" + destino + "&";
    Directions_Request::url += getTransporte() + "&";
    Directions_Request::url += idioma + "&";
    Directions_Request::url += API_KEY;
    return url;
}

std::string Directions_Request::request()
{
    armarUrl();
    std::string strCurl = "curl \"" + url + "\"";             // curl "https://maps.googleapis.com/maps/api/directions/json?..."
    system((strCurl + " > temp.txt").c_str());      // ejecuta curl y guarda la respuesta en temp.txt
    std::ifstream ifs("temp.txt");                         // abre temp.txt
    std::string str((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());   // guarda el contenido de temp.txt en la string str
    ifs.close();
    if(std::remove("temp.txt") != 0)                // borra el archivo temp.txt
    {
        perror("Error borrando archivo temporal");
    }
    return str;
}
