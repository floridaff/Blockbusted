//Person.cpp
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

//constructors
Person :: Person(){Fname = "Jane"; Lname = "Doe"; email = "janedoe@gmail.com"; Age = 0; Gender = 'F';}
Person :: Person(string first, string second, string em; int myAge, char gen)
{
  Fname = first;
  Lname = second;
  email = em;
  Age = myAge;
  Gender = gen;
}


//getters
string Person :: getFirstName()
{return Fname;}
string Person ::  getLastName()
{return Lname;}
string Person ::  getEmail()
{return email;}
int Person ::  getAge()
{return Age;}
char Person ::  getGender()
{return Gender;}
//setters
void Person ::  setFirstName(string name)
{Fname = name;}
void Person ::  setLastName(string name)
{Lname = name;}
void Person ::  setEmail(string em)
{email = em;}
void Person ::  setAge(int myAge)
{Age = myAge;}
void Person ::  setGender(char gen)
{Gender = gen;}

//other Methods
void Person :: printPerson()
{
 cout << "\nFirst Name: " << Fname;
 cout << "\nLast Name: " << Lname;
 cout << "\nEmail Address: " << email;
 cout << "\nAge: " << Age;
 cout << "\nGender: " << Gender;
}
