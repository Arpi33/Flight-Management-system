/**********|**********|**********|**********
Name: Arpita Bhattacharijee
ID: 1171301208
Lecture Section: TC01
Tutorial Section: TT01
Email: 1171301208@student.mmu.edu.my
Phone: 0189472531
**********|**********|**********|**********/
#include "Booking.h"
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include <stdio.h>
#include <iomanip>
#include <fstream>
using namespace std;


  const  string currentDateTime() {
  time_t     now = time(0);
  struct tm  tstruct;
  char       buf[80];
  tstruct = *localtime(&now);
  strftime(buf, sizeof(buf), "Date: %Y-%m-%d  Time: %X", &tstruct);
  return buf;
}

void sleepcp(int milliseconds);

/*void sleepcp(int milliseconds) // Cross-platform sleep function
{
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end)
    {
    }
}*/

void mainmenu(Domestic &a,International &b);
int main()
{

Domestic v;
International i;
cout<<"\n\n                 "<<currentDateTime()<<"            "<<endl;
mainmenu(v,i);
return 0;
}
void mainmenu(Domestic &a,International &b) {
char choose,choose2;
cout << "\n\n \t\tWelcome To Flight Reservation System" << endl << endl;
cout <<"\t   **********************************************\n";
cout << "\t   Book your Flight tickets at affordable prices!" << endl;
cout <<"\t   ************************************************";

cout<<"\n\n\t\t1.Book Flight\n";
cout<<"\t\t2.Booking Enquiry\n";
cout<<"\t\t3.Cancel Flight\n";
cout<<"\t\t4.Exit\n";
cout<<"\n\n\t\tGive Your option: ";
cin>>choose;
system("cls");

switch(choose)
{
    case('1'):
    cout<<endl<<endl;
    cout<<"\n1.Domestic Flight ";
    cout<<"\n2.International Flight \n";
    cout<<"Please Enter your option: ";
    cin>>choose2;
    system("cls");
    switch(choose2)
    {
      case('1'):
      a.book();
      break;
      case('2'):
      b.bookI();
      break;
      default:
      cout<<"wrong Input "<<endl;
      return mainmenu(a,b);
    }
    system("pause");
    system("cls");
    mainmenu(a,b);
    break;
    case('2'):
    char c2;
    cout<<endl<<endl;
    cout<<"\n1.Domestic Flight ";
    cout<<"\n2.International Flight \n";
    cout<<"Enter: ";
    cin>>c2;
    switch(c2)
  {
    case('1'):
    a.storeInFile();
    a.displaybookingdetails();
    system("pause");
    system("cls");
    mainmenu(a,b);
    break;
    case('2'):
    b.storeInFileI();
    b.displaybookingdetails();
    system("pause");
    system("cls");
    mainmenu(a,b);
    break;
    default:
    cout<<"Wrong Input \n";
    return mainmenu(a,b);
  }
    break;

  case('3'):
   a.cancel();
   system("cls");
   mainmenu(a,b);
   break;
  case('4'):
  exit(0);
  default:
    cout<<"Wrong Input:";
    return mainmenu(a,b);


 }
}
