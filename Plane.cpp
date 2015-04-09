/* 
 * File:   Plane.cpp
 * Author: Jens
 * 
 * Created on 7. April 2015, 12:22
 */

#include "Plane.h"
#include <cstdlib>
#include <iostream>
#include <String>
using namespace std;
Plane::Plane(string icao24) {
    this->address = icao24;
}

string Plane::getAddress() {
    return address;
}
vector<string> Plane::getCoordinates()
{
    return coordinates;
}


