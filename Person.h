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
  int Age;
  char Gender;
 public:

  //constructors
  Person();
  Person(string, string, int, char);

  //getters
  string getFirstName();
  string getLastName();
  int getAge();
  char getGender();
  //setters
  void setFirstName(string);
  void setLastName(string);
  void setAge(int);
  void setGender(char);

  //other Methods
  void printPerson();
};


#endif
