#include <iostream>
using namespace std;

class Date
{
    int day,month,year;
    string LetterDay;

    public:
        Date();
        void setDay();
        void setMonth();
        void setYear();
        void setLetterDay();
        int getDay()const;
        int getMonth()const;
        int getYear()const;
        string getLetterDay()const;
        friend ostream& operator << (ostream & , const Date&);
        ~Date();

};

/*********************************************** DATE CLASS FUNCTIONS ****************************************************/

Date::Date():day(0),month(0),year(0),LetterDay("none"){}

Date::~Date(){}

void Date::setDay(){
    int n;
    cin>>n;
    if(n<1 ||n>31)
   {
    cout<<"Invalid\n";
    cout<<"Re-enter: ";
    cin>>n;

   }
    day=n;

}
void Date::setMonth(){
    int n;
    cin>>n;
    if(n<1 || n>12){
    cout<<"Invalid\n";
    cout<<"Re-enter: ";
    cin>>n;
   }
    month=n;

}
void Date::setYear(){
       int n;
       cin>>n;
       if(n<2019||n>2025){
       cout<<"Year Should be within next 5 years \n";
       cout<<"Please Re-enter: ";
       cin>>n;
       }
       year=n;

}
void Date::setLetterDay(){
    int n;
    cin>>n;
    if(n<1||n>31)
   {
    cout<<"Invalid\n";
    cout<<"Re-enter: ";
    cin>>n;
   }
    LetterDay=n;
}
int Date::getDay()const{
    return day;
}
int Date::getMonth()const{
    return month;
}
int Date::getYear()const{
    return year;
}
string Date::getLetterDay()const{
    return LetterDay;
}
ostream& operator<< (ostream& os , const Date& l){
    os<<l.day<<"-"<<l.month<<"-"<<l.year;
    return os;
}


