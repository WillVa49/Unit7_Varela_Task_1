//Unit7_Varela_Task_1 Dr_T 2-24-2020 STRUCTS C++
#include <iostream>
using namespace std;
//Declare structs above int main()

struct timeOfDay
{
  short Hour;
  short Minute;
  short Second;
};
struct appDate
{
  short dayOfMonth;
  short month;
  int year;
};
struct event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
  //Save space here for our toString()override 


};

int main() 
{
  timeOfDay t; //Declare instance of the struct
  t.Hour = 7; //Put data in the struct
  t.Minute = 11;
  t.Second = 17;
  cout << "\nCurrent time: " << endl; //Print data in struct
  cout << t.Hour << ":" << t.Minute << ":" << t.Second << endl;

  appDate a;
  a.dayOfMonth = 28;
  a.month = 12;
  a.year = 2000;
  cout << "\nDate of Birth: " << endl;
  cout << a.month << "/" << a.dayOfMonth << "/" << a.year << endl;

  event eOne;
  eOne.eventName = "Birthday of Will";
  eOne.isUrgent = true;
  //Set the event day
  eOne.eventDate.dayOfMonth = 28; //Instance.memberStruct.memberVariable
  eOne.eventDate.month = 12;
  eOne.eventDate.year = 2020;
  //Set the event time
  eOne.eventTime = t; //Use data from t to populate eOne.Time
  //Print all element of the even eOne to the screen
  cout << "\nElements in the event eOne: " << endl;
  cout << "Event Name: " << eOne.eventName << endl;

  string status = "";
  eOne.isUrgent = true;
  status = (eOne.isUrgent) ? "yes" : "no";
  cout << "Is the event urgent: " << status << endl;

  cout << "Day: " << eOne.eventDate.month << "/" << eOne.eventDate.dayOfMonth << "/" << eOne.eventDate.year;

   cout << "\nTime: " << eOne.eventTime.Hour << ":" << eOne.eventTime.Minute << ":" << eOne.eventTime.Second;

  return 0;
}