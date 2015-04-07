/* 
 * File:   Message.h
 * Author: Jens
 *
 * Created on 7. April 2015, 09:09
 */

#ifndef MESSAGE_H
#define	MESSAGE_H

#include <cstdlib>
#include <iostream>
#include <String>
using namespace std;

class Message {
public:
    Message(string icao24,string lat, string lon, string alt);
    virtual ~Message();

    string getAddress();
    string getAltitude();
    string getLongitude();
    string getLatitude();

private:
    string address;
    string latitude;
    string longitude;
    string altitude;
};

#endif	/* MESSAGE_H */

