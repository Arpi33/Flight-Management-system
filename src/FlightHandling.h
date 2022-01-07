#include <iostream>
using namespace std;

class FlightHandling
{
 private:
   string bordingGate;
   int gate_no;
   string checkin,checkout,btime;
 public:
   FlightHandling();
   void setbordingGate(string);
   string getboardingGate() ;
   void setgateno(int);
   int  getgateno() ;
   void setcheckIn(string);
   string getcheckin() ;
   void setcheckout(string);
   string getcheckout() ;
   void setbordingtime(string);
   string getbordingtime() ;
};

FlightHandling::FlightHandling()
{

}

void FlightHandling::setbordingGate(string b)
{
    bordingGate=b;
}
string FlightHandling::getboardingGate()
{
    return bordingGate;
}
void FlightHandling::setgateno(int i)
{
    gate_no=i;
}
int FlightHandling::getgateno()
{
    return gate_no;
}

void FlightHandling::setcheckIn(string ci)
{
    checkin =ci;
}
string FlightHandling::getcheckin()
{
    return checkin;
}
void FlightHandling::setcheckout(string co)
{
    checkout=co;
}
string FlightHandling::getcheckout()
{
    return checkout;
}
void FlightHandling::setbordingtime(string b)
{
    btime=b;
}
string FlightHandling::getbordingtime()
{
    return btime;
}
