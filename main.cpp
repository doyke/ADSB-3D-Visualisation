/* 
 * File:   main.cpp
 * Author: Jens
 *
 * Created on 7. April 2015, 09:08
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Message.h"
#include <QCoreApplication>
using namespace std;

const int ICAO24_POS = 4;
const int ALTITUDE_POS = 11;
const int LATITUDE_POS = 14;
const int LONGITUDE_POS = 15;

int findNthChar(int n, char x, string s);
string getmessageItem(int n, string msg);
void parseLine(string line);

vector<Message>* messagelist=new vector<Message>();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"hello"<<endl;
    string msg1 = "MSG,3,111,11111,4CA9D4,111111,2015/04/07,09:04:36.153,2015/04/07,09:04:36.166,,37000,,,52.76319,11.56484,,,,,,0";
    string msg2 = "MSG,3,111,11111,4407C1,111111,2015/04/07,09:04:36.161,2015/04/07,09:04:36.171,,20025,,,52.20845,10.16121,,,,,,0";
    string msg3 = "MSG,3,111,11111,4CA9D4,111111,2015/04/07,09:04:36.153,2015/04/07,09:04:36.166,,37000,,,,,,,,,,0";
    parseLine(msg1);
    parseLine(msg2);
    parseLine(msg3);
    
    for (int i = 0; i < messagelist->size(); i++) {
        cout<<messagelist->at(i).getAddress()<<endl;
    }

    return a.exec();
}

void parseLine(string line){
    
    string icao24 = getmessageItem(ICAO24_POS,line);
    string alt = getmessageItem(ALTITUDE_POS,line);
    string lat = getmessageItem(LATITUDE_POS,line);
    string lon = getmessageItem(LONGITUDE_POS,line);
    
    if(icao24.size() !=0 && alt.size() != 0 && lat.size() !=0 && lon.size() != 0){
        messagelist->push_back(Message(icao24,lat,lon,alt));
    }
}
int findNthChar(int n, char x, string s){
    int found = s.find(x);
    for (int i = 0; i < n; i++) {
        found=s.find(x,found + 1);
    }
    return found;
}

string getmessageItem(int n, string msg){
    int x = 0;
    int y = 0;
    if(n==0){
        x= -1;
        y= findNthChar(0,',',msg);
    }else{
    x = findNthChar(n-1,',',msg);
    y = findNthChar(n,',',msg);
    }
    string item = msg.substr(x+1,y-x-1);

    return item;
}
