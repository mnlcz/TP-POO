//
// Created by MnLCz on 20/9/2021.
//

#ifndef DIRECTIONS_API_DIRECTIONS_REQUEST_H
#define DIRECTIONS_API_DIRECTIONS_REQUEST_H

#include <string>
#define ESP_LAT "language=es-419"
#define API_KEY "key=AIzaSyDVNOlnEFr0l3KSXMz5W08dgfH-kn86004"
enum Modo {AUTO, CAMINANDO, BICICLETA}; // https://developers.google.com/maps/documentation/directions/get-directions?hl=es_419#TravelModes

// https://developers.google.com/maps/documentation/directions/get-directions?hl=es_419#DirectionsRequests
class Directions_Request
{
private:
    std::string url = "https://maps.googleapis.com/maps/api/directions/json?";
    std::string origen = "origin=";     // ej origin=24+Sussex+Drive+Ottawa+ON
    std::string destino = "destination=";
    Modo transporte;
    std::string idioma = ESP_LAT;

    std::string armarUrl();             // ej: https://maps.googleapis.com/maps/api/directions/json?origin=Brooklyn&destination=Queens&mode=transit&key=YOUR_API_KEY
public:
    Directions_Request(std::string salida, std::string destino, Modo transporte);
    const std::string& getOrigen() const;
    const std::string& getDestino() const;
    std::string getTransporte() const;
    std::string request();
    std::string parsear();
};


#endif //DIRECTIONS_API_DIRECTIONS_REQUEST_H
