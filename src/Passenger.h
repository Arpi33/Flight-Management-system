#include <iostream>
#include "MilesAccount.h"
using namespace std;

class Passenger
{
private:
  string fname;
  string lname;
  string email;
  string passportnmb;
  string  number;
  int   milecard;
  protected:
  MilesAccount m;

public:
  Passenger();
  void setfname(string);
  void setlname(string);
  void setemail(string);
  void setpassportNumber(string);
  void setnumber(string);
  void setmilecard(int);
  string getfname();
  string getlname();
  string getemail();
  string getPassportnumber();
  string getnumber();
  int getmilecrad();
};


Passenger::Passenger()

{
   fname = "none";
   lname = "none";
   email = "none";
   passportnmb = "none";
   number = "none";
   milecard=0;


}
void Passenger::setfname(string n)
{
  fname=n;
}
void Passenger::setlname(string l)
{
  lname=l;
}
void Passenger::setemail(string e)
{
  email=e;
}
void Passenger::setpassportNumber(string p)
{
  passportnmb=p;
}
void Passenger::setnumber(string cn)
{
  number=cn;
}
void Passenger::setmilecard(int m)
{
  milecard=m;
}
string Passenger::getfname()
{
  return fname;
}
string Passenger::getlname()
{
  return lname;
}
string Passenger::getemail()
{
  return email;
}
string Passenger::getPassportnumber()
{
  return passportnmb;
}
string Passenger::getnumber()
{
  return number;
}
int Passenger::getmilecrad()
{
  return milecard;
}

