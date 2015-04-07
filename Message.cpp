/* 
 * File:   Message.cpp
 * Author: Jens
 * 
 * Created on 7. April 2015, 09:09
 */

#include "Message.h"

Message::Message(string icao24, string lat, string lon, string alt) {
    latitude = lat;
    longitude = lon;
    altitude = alt;
    address = icao24;
}

Message::~Message() {
}

    string Message::getAltitude() {
        return altitude;
    }
    
    string Message::getAddress() {
        return address;
    }

    string Message::getLongitude()  {
        return longitude;
    }

    string Message::getLatitude()  {
        return latitude;
    }
