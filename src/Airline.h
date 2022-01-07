#include <iostream>
#include "Flight.h"
using namespace std;

class Airline

{
 private :
  string name;
  string code;
 public:
  Flight f,fi;
  Airline();
  void setairname(string);
  void setcode(string);
  string getcode() ;
  string getairname();
  void AirlineList();

};

 Airline::Airline(){};
void Airline::setairname(string s)
{
    name=s;
}
void Airline::setcode(string ss)
{
    code =ss;
}
string Airline::getairname()
{
    return name;
}

string Airline::getcode()
{
    return code;
}

void Airline::AirlineList()
{

    cout<<"1.Airasia        2.Malindo Air      3.Firefly        4.Malaysia Airlines        5.MASwings\n\n";
}
