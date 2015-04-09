/* 
 * File:   Plane.h
 * Author: Jens
 *
 * Created on 7. April 2015, 12:22
 */

#ifndef PLANE_H
#define	PLANE_H
#include <cstdlib>
#include <iostream>
#include <String>
#include <vector>

using namespace std;


class Plane {
public:
    Plane(string icao24);
    string getAddress();
    vector<string> getCoordinates();
    void addCoordinates(string lat, string lon, string alt);
private:
    string address;
    vector<string> coordinates;
};

#endif	/* PLANE_H */

