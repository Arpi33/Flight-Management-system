#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include "Passenger.h"
#include "Airline.h"
#include "Date.h"
using namespace std;

//**************************************************Booking*******************************//
class Booking
{
    private:
    string stype,classs,ftype;
    int snmb;
    int booknumber;

    protected:

    Date d_o_b,d_o_b1,d_o_bi,d_o_bi1;
    Airline a_r_o,a_r_oi;
    public:
    Passenger pass;
    Booking();
    void seat_type(string);
    void class_type(string);
    void flight_type(string);
    void setBooknumber(int);
    int getBooknumber();
    string getseat_type();
    string getclasstype() ;
    string getflight_type() ;
    void getpassdata();
    void payment();
    void classtype();
    void seattype();
    virtual void displaybookingdetails()=0;

};

Booking::Booking(): stype("none"), classs("none"), ftype("none"),snmb(0) {}

void Booking::seat_type(string s)
{
    stype = s;
}
string Booking::getseat_type()
{
    return stype;
}
void Booking::class_type(string c)
{
    classs=c;
}
string Booking::getclasstype()       //class_type("Economy")
{
    return classs;
}

void Booking::flight_type(string f)
{
    ftype=f;
}
string Booking::getflight_type()
{
    return ftype;
}
void Booking::setBooknumber(int i)
{
    booknumber= i;
}
int Booking::getBooknumber()
{
    return booknumber;
}

void Booking::classtype()
{
    int choice;
    cout<<"\n\nPlease choose your Desired class\n\n";
    cout<<"1.Economy class   "<<"2.Business class    "<<"3.First class\n";
    cout<<"\nYour preference:  ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            class_type("Economy");
            break;
        case 2:
            class_type("Business");
            break;
        case 3:
            class_type("First");
            break;
        default:
            cout<<"Invalid input!Please try again!";
            return classtype();
    }


}
void Booking::seattype()
{
    int choice2;
    cout<<"\n\nChoose your seat type: \n";
    cout<<"\n1.Window       "<<"2.Airsle \n";
    cout<<"\nGive your choice: ";
    cin>>choice2;

       switch(choice2)
    {
        case 1:
            seat_type("Window");
            break;
        case 2:
            seat_type("Airsle");
            break;
        default:
            cout<<"Invalid input!Please try again!";
            return seattype();
    }

}

void Booking::getpassdata()
 {

  string fn;
  string ln;
  string em;
  string pa;
  string  nm;
  int a,b,c;


  cout<<"\n\n____________Passenger Details____________\n\n";
  cout<<"\nPassenger First Name: ";
  cin>>fn;
  pass.setfname(fn);
  cout<<"\nPassenger Last Name: ";
  cin>>ln;
  pass.setlname(ln);
  cout<<"\nEmail_address: ";
  cin>>em;
  pass.setemail(em);
  cout<<"\nPassport Number: ";
  cin>>pa;
  pass.setpassportNumber(pa);
  cout<<"\nContact Number: ";
  cin>>nm;
  pass.setnumber(nm);

}

void Booking::payment()
{

    int choice1,bank,cvv,user_id;
    string card,date;
    string password;
    cout << "\n\n\nHow would you like to pay?:\n";
    cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
    cout << "\n\nEnter your choice:  ";
    cin >> choice1;

        switch(choice1)//switch case
        {
        case 1:
            cout << "\nEnter card no.:";
            cin>>card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2:
            cout << "\nEnter card no.:";
            cin>>card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3:
            cout << "Banks Available: \1.Bank Islam(1) \2.May Bank(2) \3.Standard Chartered Bank(3) \4.Bank Islam(4) \5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            system("cls");
            cout << "\nTransaction Successful\n";


            break;
        default:
            cout << "\nWrong input entered.\nTry again\n\n";
            return payment();
        }
      cout<<"\n\n\t\tThanks for being with us . Wish you Safe Journey!!!!\n  ";


}

//**********************************Domestic Class*************************************

class Domestic:public Booking
{
    private:
      string dest,dept;
      long ammount;
      //ofstream Dfin;
      vector<string> drecords;
    public:
      Domestic();
      void setTo(string);
      string getTo();
      void setFrom(string);
      string getFrom();
      void selectdest();
      void selectdept();
      void airline();
      void getTimetable();
      void setammount(long);
      long getammount();
      void generatebill();
      void storeInFile();
      void book();
      void cancel();
      void displaybookingdetails();

      //~Domestic();


};
 Domestic::Domestic(){}

void Domestic::setTo(string s)
{
    dest=s;
}
void Domestic::setFrom(string si)
{
    dept=si;
}
string Domestic::getTo()
{
    return dest;
}
string Domestic::getFrom()
{
    return dept;
}
void Domestic::setammount(long m)
{
    ammount =m;
}
long Domestic::getammount()
{
    return ammount;
}
void Domestic::selectdest()
{
    	char ch;

	cout<<"\n\n*******************Choose Your Destination********************\n\n";
    cout<<"1. KualaLumpur\n";
    cout<<"2. Johor\n";
    cout<<"3. Pulau Penang\n";
    cout<<"4. Sarawak\n";
    cout<<"5. Melaka\n";
    cout<<"6. Kelantan\n";
    cout<<"7. Langkawi\n";
    cout<<"8. Kedah\n";

	cin>>ch;

		switch(ch){
        case '1':
        setTo("KualaLumpur");
        break;
        case '2':
        setTo("Johor");
        break;
        case '3':
        setTo("Pulau Penang");
        break;
        case '4':
        setTo("Sarawak");
        break;
        case '5':
        setTo("Melaka");
        break;
        case '6':
        setTo("Kelantan");
        break;
		case '7':
        setTo("Langkwai");
        break;
        case '8':
        setTo("Kedah");
        break;
        default:
        cout<<"You Entered Invalid Destination. ";
        cin>>ch;
    }
}

void Domestic::selectdept()
{
     char ch;
     cout<<"\n\n********************Choose Your Departure********************\n\n";
     cout<<"1. Kuala Lumpur\n";
     cout<<"2. Johor\n";
     cout<<"3. Pulau Penang\n";
     cout<<"4. Sarawak\n";
     cout<<"5. Melaka\n";
     cout<<"6. Kelantan\n";
     cout<<"7. Langkwai\n";
     cout<<"8. Kedah\n";

     cin>>ch;

     switch(ch){
        case '1':
        setFrom("KualaLumpur");
        break;
        case '2':
        setFrom("Johor");
        break;
        case '3':
        setFrom("Pulau Penang");
        break;
        case '4':
        setFrom("Sarawak");
        break;
        case '5':
        setFrom("Melaka");
        break;
        case '6':
        setFrom("Kelantan");
        break;
        case '7':
        setFrom("Langkwai");
        break;
        case '8':
        setFrom("Kedah");
        break;
        default:
        cout<<"You Entered Invalid Destination. ";
        cin>>ch;
            }
}

 void Domestic::getTimetable()
{
    char c;
    cout<<"\n\n\n\n\n1.One trip\n";
    cout<<"2.Round trip\n";
    cin>>c;

    switch(c){
   case('1'):
    cout<<"\n\nFlying Date:  \n";
    cout<<"Day: ";
    d_o_b.setDay();
    cout<<"Month: ";
    d_o_b.setMonth();
    cout<<"Year: ";
    d_o_b.setYear();
    break;
    //cout<<d_o_b;
    case('2'):
    cout<<"\n\nFlying Date:  \n";
    cout<<"Day: ";
    d_o_b.setDay();
    cout<<"Month: ";
    d_o_b.setMonth();
    cout<<"Year: ";
    d_o_b.setYear();
    cout<<endl;
    //cout<<d_o_b;
    cout<<"\n\nReturning Date: \n";
    cout<<"Day: ";
    d_o_b1.setLetterDay();
    cout<<"Month: ";
    d_o_b1.setMonth();
    cout<<"Year: ";
    d_o_b1.setYear();
    cout<<endl;
    break;

    default:
    cout<<"Wrong Input \n";
    cout<<"Re-enter: ";
    system("pause");
    system("cls");
    getTimetable();
    //cout<<d_o_b;
  }


}

void Domestic::airline()
{   char a;
    cout<<"\n\n*****************This are available Airline for your Destination******************\n\n";
    a_r_o.AirlineList();
    cout<<"Choose your desire Airline: ";
    cin>>a;
    switch(a)
    {
        case '1':
        a_r_o.setairname("Airasia");
        a_r_o.setcode("AK70");
        a_r_o.f.setdepartureTime("12.30");
        a_r_o.f.setarrivalTime("4.30");
        a_r_o.f.f_l_y.setcheckIn("10.30");
        a_r_o.f.f_l_y.setcheckout("12.00");
        a_r_o.f.f_l_y.setbordingGate("A1");
        a_r_o.f.f_l_y.setgateno(12);
        a_r_o.f.f_l_y.setbordingtime("12.15");
        break;
        case '2':
        a_r_o.setairname("Malindo Air");
        a_r_o.setcode("OD 55");
        a_r_o.f.setdepartureTime("5.10");
        a_r_o.f.setarrivalTime("10.30");
        a_r_o.f.f_l_y.setcheckIn("3.10");
        a_r_o.f.f_l_y.setcheckout("4.30");
        a_r_o.f.f_l_y.setbordingGate("L2");
        a_r_o.f.f_l_y.setgateno(12);
        a_r_o.f.f_l_y.setbordingtime("4.45");
        break;

        case '3':
        a_r_o.setairname("Firefly");
        a_r_o.setcode("FY73");
        a_r_o.f.setdepartureTime("15.20");
        a_r_o.f.setarrivalTime("19.30");
        a_r_o.f.f_l_y.setcheckIn("13.20");
        a_r_o.f.f_l_y.setcheckout("14.50");
        a_r_o.f.f_l_y.setbordingGate("A3");
        a_r_o.f.f_l_y.setgateno(9);
        a_r_o.f.f_l_y.setbordingtime("14.10");
        break;

        case '4':
        a_r_o.setairname("Malaysia Airlines");
        a_r_o.setcode("MH 370");
        a_r_o.f.setdepartureTime("12.30");
        a_r_o.f.setarrivalTime("4.30");
        a_r_o.f.f_l_y.setcheckIn("10.30");
        a_r_o.f.f_l_y.setcheckout("12.00");
        a_r_o.f.f_l_y.setbordingGate("B2");
        a_r_o.f.f_l_y.setgateno(7);
        a_r_o.f.f_l_y.setbordingtime("12.15");
        break;

        case '5':
        a_r_o.setairname("MASwings");
        a_r_o.setcode("MW 93");
        a_r_o.f.setdepartureTime("11.30");
        a_r_o.f.setarrivalTime("2.30");
        a_r_o.f.f_l_y.setcheckIn("9.30");
        a_r_o.f.f_l_y.setcheckout("11.00");
        a_r_o.f.f_l_y.setbordingGate("C1");
        a_r_o.f.f_l_y.setgateno(6);
        a_r_o.f.f_l_y.setbordingtime("11.15");
        break;

        default:
        cout<<"Invalid input\n";
        cout<<"Please re_enter: ";
        cin>>a;
        system("cls");
    }
}
 void Domestic::generatebill()
 {   long ammount1;
     int pn;
     srand (time(0));
     ammount1 = (rand() % 15) + 50;
     //cout<<ammount1<<endl;
     cout<<"\n\nHow many passenger? \n";
     cout<<"\nEnter: ";
     cin>>pn;
     if(pn>0)
     {
        switch(pn)
        {
          case(1):
          setammount(ammount1);
          cout<<"\nTicket Price Calculated "<<getammount()<<"$"<<endl;
          break;
          case(2):
          setammount(ammount1*2);
          cout<<"\nTicket Price Calculated "<<getammount()<<"$"<<endl;
          break;
          case(3):
          setammount(ammount1*3);
          cout<<"\nTicket Price Calculated "<<getammount()<<"$"<<endl;
          break;
          case(4):
          setammount(ammount1*4);
          cout<<"\nTicket Price Calculated "<<getammount()<<"$"<<endl;
          default:
          cout<<"\nTicket Price: ";
          setammount(ammount1*5);
          cout<<"\nTicket Price Calculated "<<getammount()<<"$"<<endl;


        }
}
else
  {    cout<<"Invalid input.Give valid input \n";
       system("pause");
       system("cls");
       generatebill();
  }

}

void Domestic::book()
{   //bool yes;
    //yes=true;
    int bnumber;
    selectdest();
    system("cls");
    selectdept();
    if(getFrom()==getTo())
    {
        cout<<"Departure and Destination can not be same \n";
        system("pause");
        system("cls");
        selectdept();
    }
    system("cls");
    getTimetable();
    system("cls");
    airline();
    system("cls");
    classtype();
    seattype();
    system("cls");
    getpassdata();
    system ("cls");
    generatebill();
    payment();
    srand (time(0));
    bnumber  = (rand()%300)+1;
    setBooknumber(bnumber);

}


void Domestic::storeInFile()
{
    ofstream Dfin;
    string file = pass.getPassportnumber()+".txt";
    Dfin.open(file.c_str());
    cout<<"\n\n**********Flight Details*************\n\n";
        Dfin<<"Booking Number: "<<getBooknumber()<<endl;
        Dfin<<"Ticket Price: "<<getammount()<<"$"<<endl;
        Dfin<<"Destination: "<<getTo()<<endl;
        Dfin<<"Departure:  "<<getFrom()<<endl;
        Dfin<<"Flying Date: "<<d_o_b<<endl;
        Dfin<<"Returning Date: "<<d_o_b1<<endl;
        Dfin<<"Airline: "<<a_r_o.getairname()<<endl;
        Dfin<<"Airline Code: "<<a_r_o.getcode()<<endl;
        Dfin<<"Departure Time: "<<a_r_o.f.getDepartureTime()<<endl;
        Dfin<<"Arrival Time: "<<a_r_o.f.getArrivalTime()<<endl;
        Dfin<<"Check In Time: "<<a_r_o.f.f_l_y.getcheckin()<<endl;
        Dfin<<"Stop Check In Time: "<<a_r_o.f.f_l_y.getcheckout()<<endl;
        Dfin<<"Boarding Time: "<<a_r_o.f.f_l_y.getbordingtime()<<endl;
        Dfin<<"Boarding Gate: "<<a_r_o.f.f_l_y.getboardingGate()<<endl;
        Dfin<<"Gate Number: " <<a_r_o.f.f_l_y.getgateno()<<endl;

        Dfin<<"\n\n***********Passenger Details****************\n\n";
        Dfin<<"Passenger Name: "<<pass.getfname()<<" "<< pass.getlname()<<endl;;
        Dfin<<"Email: "<<pass.getemail()<<endl;
        Dfin<<"Passport Number: "<<pass.getPassportnumber()<<endl;
        Dfin<<"Contact Number: "<<pass.getnumber()<<endl;



}

void Domestic::displaybookingdetails()
{


  string line,dnmb;
  cout<<"Give user Passport Number: ";
  cin>>dnmb;
  ifstream filed;
  filed.open(dnmb+".txt");
  if(filed)
  {                             // create a file stream and open the file for reading
  while (getline(filed, line)) // read all the lines from the file and store in vector records
  {
    drecords.push_back(line);
  }

  filed.close(); // close the file
  size_t drecno = drecords.size(); // get the number of lines read

  cout << "These are the records" << endl;
  for (size_t i = 0; i < drecno; ++i) // display all the lines read
  {
    cout<< drecords[i] << endl; }

 }
   else
   cout<<"No such file"<<endl;
 }


 void Domestic::cancel()
 {
   string line,a;
   cout<<"Give user Passport Number: ";
   cin>>a;
   ifstream file;
   file.open(a+".txt");
   if(file)
   {                             // create a file stream and open the file for reading


//remove(a+".txt");
//DeleteFile(a+".txt");
for (size_t i = 0; i < drecords.size(); ++i) // display all the lines read
{
  drecords.erase(drecords.begin());

}
cout<<"Ticket has been canceled\n";

   }
  else
 cout<<"No such file ";

}

//******************************International Class*********************

class International:public Booking
{
    private:
      string destI,deptI;
      long ammountI;
      vector<string> records;

    public:
      International();
      void setpinI();
      int getpinI() const;
      void setToI(string);
      string getToI();
      void setFromI(string);
      string getFromI();
      void selectdestI();
      void selectdeptI();
      void airlineI();
      void getTimetableI();
      void setammountI(long);
      long getammountI();
      void generatebillI();
      void bookI();
      void storeInFileI();
      void displaybookingdetails();


};
 International::International(){}

 void International::setToI(string s)
{
    destI=s;
}
void International::setFromI(string si)
{
    deptI=si;
}
string International::getToI()
{
    return destI;
}
string International::getFromI()
{
    return deptI;
}
void International::setammountI(long m)
{
    ammountI =m;
}
long International::getammountI()
{
    return ammountI;
}

void International::selectdestI()
{
    char ch;
    cout<<"\n\n***************Choose Your Destination******************\n\n";
    cout<<"1. Bangladesh\n";
    cout<<"2. Australia\n";
    cout<<"3. China\n";
    cout<<"4. Pakistan\n";
    cout<<"5. Indonesia\n";
    cout<<"6. Singapore\n";
    cout<<"7. Malaysia\n";
    cout<<"8. Spain\n ";

	cin>>ch;

		switch(ch){
        case '1':
        setToI("Bangladesh");
        break;
        case '2':
        setToI("Australia");
        break;
        case '3':
        setToI("China");
        break;
        case '4':
        setToI("Pakistan");
        break;
        case '5':
        setToI("Indonesia");
        break;
        case '6':
        setToI("Singapore");
        break;
		case '7':
        setToI("Malaysia");
        break;
        case '8':
        setToI("Spain");
        break;
        default:
        cout<<"You Entered Invalid Destination. ";
        cin>>ch;
    }
}

void International::selectdeptI()
{
     char ch;
     cout<<"\n\n***************Choose Your Departure*******************\n\n";
     cout<<"1. Bangladesh\n";
     cout<<"2. Australia\n";
     cout<<"3. China\n";
     cout<<"4. Pakistan\n";
     cout<<"5. Indonesia\n";
     cout<<"6. Singapore\n";
     cout<<"7. Malaysia\n";
     cout<<"8. Spain\n";

     cin>>ch;

     switch(ch){
        case '1':
        setFromI("Bangladesh");
        break;
        case '2':
        setFromI("Australia");
        break;
        case '3':
        setFromI("China");
        break;
        case '4':
        setFromI("Pakistan");
        break;
        case '5':
        setFromI("Indonesia");
        break;
        case '6':
        setFromI("Singapore");
        break;
        case '7':
        setFromI("Malaysia");
        break;
        case '8':
        setFromI("Spain");
        break;
        default:
        cout<<"You Entered Invalid Destination. ";
        cin>>ch;
    }
}

 void International::getTimetableI()
{
    char c;
    cout<<"\n\n\n\n\n1.One trip\n";
    cout<<"2.Round trip\n";
    cin>>c;

    switch(c){
   case('1'):
    cout<<"\n\nFlying Date:  \n";
    cout<<"Day: ";
    d_o_bi.setDay();
    cout<<"Month: ";
    d_o_bi.setMonth();
    cout<<"Year: ";
    d_o_bi.setYear();
    break;
    //cout<<d_o_b;
    case('2'):
    cout<<"\n\nFlying Date:  \n";
    cout<<"Day: ";
    d_o_bi.setDay();
    cout<<"Month: ";
    d_o_bi.setMonth();
    cout<<"Year: ";
    d_o_bi.setYear();
    cout<<endl;
    //cout<<d_o_b;
    cout<<"\n\nReturning Date: \n";
    cout<<"Day: ";
    d_o_bi1.setLetterDay();
    cout<<"Month: ";
    d_o_bi1.setMonth();
    cout<<"Year: ";
    d_o_bi1.setYear();
    cout<<endl;
    break;

    default:
    cout<<"Wrong Input \n";
    cout<<"Re-enter: ";
    system("pause");
    system("cls");
    getTimetableI();
    //cout<<d_o_b;
  }
}
void International::airlineI()
{   char a;
    cout<<"\n\n*****************This are available Airline for your Destination******************\n\n";
    a_r_oi.AirlineList();
    cout<<"Choose your desire Airline: ";
    cin>>a;
    switch(a)
    {
        case '1':
        a_r_oi.setairname("Airasia");
        a_r_oi.setcode("AK70");
        a_r_oi.fi.setdepartureTime("12.30");
        a_r_oi.fi.setarrivalTime("4.30");
        a_r_oi.fi.f_l_yi.setcheckIn("10.30");
        a_r_oi.fi.f_l_yi.setcheckout("12.00");
        a_r_o.fi.f_l_yi.setbordingGate("A1");
        a_r_o.fi.f_l_yi.setgateno(12);
        a_r_o.fi.f_l_yi.setbordingtime("12.15");
        break;
        case '2':
        a_r_oi.setairname("Malindo Air");
        a_r_oi.setcode("OD 55");
        a_r_oi.fi.setdepartureTime("5.10");
        a_r_oi.fi.setarrivalTime("10.30");
        a_r_oi.fi.f_l_yi.setcheckIn("3.10");
        a_r_oi.fi.f_l_yi.setcheckout("4.30");
        a_r_oi.fi.f_l_yi.setbordingGate("L2");
        a_r_oi.fi.f_l_yi.setgateno(12);
        a_r_oi.fi.f_l_yi.setbordingtime("4.45");
        break;

        case '3':
        a_r_oi.setairname("Firefly");
        a_r_oi.setcode("FY73");
        a_r_oi.fi.setdepartureTime("15.20");
        a_r_oi.fi.setarrivalTime("19.30");
        a_r_oi.fi.f_l_yi.setcheckIn("13.20");
        a_r_oi.fi.f_l_yi.setcheckout("14.50");
        a_r_oi.fi.f_l_yi.setbordingGate("A3");
        a_r_oi.fi.f_l_yi.setgateno(9);
        a_r_oi.fi.f_l_yi.setbordingtime("14.10");
        break;

        case '4':
        a_r_oi.setairname("Malaysia Airlines");
        a_r_oi.setcode("MH 370");
        a_r_oi.fi.setdepartureTime("12.30");
        a_r_oi.fi.setarrivalTime("4.30");
        a_r_oi.fi.f_l_yi.setcheckIn("10.30");
        a_r_oi.fi.f_l_yi.setcheckout("12.00");
        a_r_oi.fi.f_l_yi.setbordingGate("B2");
        a_r_oi.fi.f_l_yi.setgateno(7);
        a_r_oi.fi.f_l_yi.setbordingtime("12.15");
        break;

        case '5':
        a_r_oi.setairname("MASwings");
        a_r_oi.setcode("MW 93");
        a_r_oi.fi.setdepartureTime("11.30");
        a_r_oi.fi.setarrivalTime("2.30");
        a_r_oi.fi.f_l_yi.setcheckIn("9.30");
        a_r_oi.fi.f_l_yi.setcheckout("11.00");
        a_r_oi.fi.f_l_yi.setbordingGate("C1");
        a_r_oi.fi.f_l_yi.setgateno(6);
        a_r_oi.fi.f_l_yi.setbordingtime("11.15");
        break;

        default:
        cout<<"Invalid input\n";
        cout<<"Please re_enter: ";
        cin>>a;
        system("cls");
    }
}
 void International::generatebillI()
 {
     int pn;
     srand (time(0));
     ammountI = (rand() % 15) + 100;
     //cout<<ammount1<<endl;
     cout<<"\n\nHow many passenger? \n";
     cout<<"\nEnter: ";
     cin>>pn;
     if(pn>0)
     {
        switch(pn)
        {
          case(1):
          setammountI(ammountI);
          cout<<"\nTicket Price Calculated "<<getammountI()<<"$"<<endl;
          break;
          case(2):
          setammountI(ammountI*2);
          cout<<"\nTicket Price Calculated "<<getammountI()<<"$"<<endl;
          break;
          case(3):
          setammountI(ammountI*3);
          cout<<"\nTicket Price Calculated "<<getammountI()<<"$"<<endl;
          break;
          case(4):
          setammountI(ammountI*4);
          cout<<"\nTicket Price Calculated "<<getammountI()<<"$"<<endl;
          default:
          cout<<"\nTicket Price: ";
          setammountI(ammountI*5);
          cout<<"\nTicket Price Calculated "<<getammountI()<<"$"<<endl;


        }
}
else
  {    cout<<"Invalid input.Give valid input \n";
       system("pause");
       system("cls");
       generatebillI();
  }

}

void International::bookI()
{
    int bnumber;
    selectdestI();
    system("cls");
    selectdeptI();
    if(getFromI()==getToI())
    {
        cout<<"Departure and Destination can not be same \n";
        system("pause");
        system("cls");
        selectdeptI();
    }
    system("cls");
    getTimetableI();
    system("cls");
    airlineI();
    system("cls");
    classtype();
    seattype();
    system("cls");
    getpassdata();
    system ("cls");
    generatebillI();
    payment();
    srand (time(0));
    bnumber  = (rand()%300)+1;
    setBooknumber(bnumber);

}


void International::storeInFileI()
{
    ofstream Ifin;
    string file = pass.getPassportnumber()+".txt";
    Ifin.open(file.c_str());

    Ifin<<"\n\n**********Flight Details*************\n\n";
    Ifin<<"Booking Number: "<<getBooknumber()<<endl;
    Ifin<<"Destination: "<<getToI()<<endl;
    Ifin<<"Departure:  "<<getFromI()<<endl;
    Ifin<<"Flying Date: "<<d_o_bi<<endl;
    Ifin<<"Returning Date: "<<d_o_bi1<<endl;
    Ifin<<"Airline: "<<a_r_oi.getairname()<<endl;
    Ifin<<"Airline Code: "<<a_r_oi.getcode()<<endl;
    Ifin<<"Departure Time: "<<a_r_oi.fi.getDepartureTime()<<endl;
    Ifin<<"Arrival Time: "<<a_r_oi.fi.getArrivalTime()<<endl;
    Ifin<<"Check In Time: "<<a_r_oi.fi.f_l_yi.getcheckin()<<endl;
    Ifin<<"Stop Check In Time: "<<a_r_oi.fi.f_l_yi.getcheckout()<<endl;
    Ifin<<"Boarding Time: "<<a_r_oi.fi.f_l_yi.getbordingtime()<<endl;
    Ifin<<"Boarding Gate: "<<a_r_oi.fi.f_l_yi.getboardingGate()<<endl;
    Ifin<<"Gate Number: " <<a_r_oi.fi.f_l_yi.getgateno()<<endl;

    Ifin<<"\n\n***********Passenger Details****************\n\n";
    Ifin<<"Passenger Name: "<<pass.getfname()<<" "<< pass.getlname()<<endl;;
    Ifin<<"Email: "<<pass.getemail()<<endl;
    Ifin<<"Passport Number: "<<pass.getPassportnumber()<<endl;
    Ifin<<"Contact Number: "<<pass.getnumber()<<endl;

}

void International::displaybookingdetails()
{
  string line,bnmb;
 cout<<"Give user Passport Number: ";
 cin>>bnmb;
 ifstream file;
 file.open(bnmb+".txt");
 if(file)
 {

    string  line;
    //char c;
    while(!file.eof())
    {
      getline(file,line);
      cout<<line<<endl;
    }
 }
  else
  cout<<"No such file"<<endl;
}
