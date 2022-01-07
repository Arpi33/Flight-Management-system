#include <iostream>
#include "FlightHandling.h"
using namespace std;
class Flight
  {
  public:
    double miles;
    string time1,time2;
  public:
    Flight();
    FlightHandling f_l_y,f_l_yi;
    void setdepartureTime(string);
    void setarrivalTime(string);
    void setmiles(double);
    string getDepartureTime();
    string getArrivalTime();
    double getmiles() const;

~Flight();

  };

  Flight::Flight(){}

  Flight::~Flight(){}
void Flight::setdepartureTime(string si)
{
    time1=si;
}
void Flight::setarrivalTime(string ar)
{
    time2=ar;
}
string Flight::getDepartureTime()
{
    return time1;
}
string Flight::getArrivalTime()
{
    return time2;
}
void Flight::setmiles(double i)
{
    miles=i;
}
double Flight::getmiles() const
{
    return miles;
}



