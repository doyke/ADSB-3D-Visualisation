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
using namespace std;


class Plane {
public:
    Plane(string icao24);
    string getAddress();
private:
    string address;
};

#endif	/* PLANE_H */

