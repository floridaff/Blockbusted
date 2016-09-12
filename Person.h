//Person.h
#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person
{
 private:
  string Fname;
  string Lname;
  string Email;
  int Age;
  char Gender;
 public:

  //constructors
  Person();
  Person(string, string, string, int, char);

  //getters
  string getFirstName();
  string getLastName();
  string getEmail();
  int getAge();
  char getGender();
  //setters
  void setFirstName(string);
  void setLastName(string);
  void setEmail(string);
  void setAge(int);
  void setGender(char);

  //other Methods
  void printPerson();
};


#endif
