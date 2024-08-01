#include "ConsoleUi.h"
#include "customer.h"
#include "employee.h"
#include "gym.h"
#include <string>
#include <fstream>


void Console:: addCashierFromUser(Gym& gym) {
  string name, phoneNumber;
  int age;
  double hourlyRate;
  int hoursWorked;

  cout << "Enter cashier's name: ";
  getline(cin, name);


  cout << "Enter cashier's phone number: ";
  getline(cin, phoneNumber);


  cout << "Enter cashier's age: ";
  cin >> age;
  cin.ignore();
  cout << "Enter cashier's hourly rate: ";
  cin >> hourlyRate;;
  cin.ignore();
  cout << "Enter cashier's hours worked this month: ";
  cin >> hoursWorked;
  cin.ignore();



  gym.addCashier(name, phoneNumber, age, hourlyRate, hoursWorked);
  cout << "Cashier Added" << endl;
  cout << "Press Enter to Continue." << endl;
  cin.get();
  clearScreen();
}

void Console:: addTrainerFromUser(Gym& gym) {
  string name, phoneNumber;
  int age, experience;

  cout << "Enter trainer's name: ";
  getline(cin, name);

  cout << "Enter trainer's phone number: ";
  getline(cin, phoneNumber);
 
  cout << "Enter trainer's age: ";
  cin >> age;
  cin.ignore();
  cout << "Enter trainer's years of experience: ";
  cin >> experience;
  cin.ignore();

  gym.addTrainer(name, phoneNumber, age, experience);
  cout << "Trainer Added." << endl;
  cout << "Press Enter to Continue." << endl;
  cin.get();
  clearScreen();
}

void Console::addPremiumMemberFromUser(Gym& gym) {
  string name, phoneNumber;
  int age;

  cout << "Enter premium member's name: ";
  getline(cin, name);
 

  cout << "Enter premium member's phone number: ";
  getline(cin, phoneNumber);

 
  cout << "Enter premium member's age: ";
  cin >> age;
  cin.ignore();
  


  gym.addPremiumMember(name, phoneNumber, age, PREMIUM_FEE, TRAINING_FEE);
  cout << "Premium Member Added." << endl;
  cout << "Press Enter to Continue." << endl;
  cin.get();
  clearScreen();
}

void Console::addMemberFromUser(Gym& gym){
  string name, phoneNumber;
  int age;
  

  cout << "Enter Member's Name: ";

  getline(cin,name);
  cout << "Enter Member's Phone Number: ";
  getline(cin,phoneNumber);


  cout << "Enter Member's Age: ";
  cin >> age;
  cin.ignore();


  gym.addMember(name,phoneNumber,age,MEMBER_FEE);
  cout << "Member Added." << endl;
  cout << "Press Enter to Continue." << endl;
  cin.get();
  clearScreen();
}




 void Console::displayEmployees(Gym& gym){
  if (gym.getEmployees().size() != 0){
    for (Employee* employee : gym.getEmployees()){
      employee->display();
    }
  }
  else {
    clearScreen();
    cout << "No Employees On File." << endl;
  }
  cout << "Press Enter To Continue." << endl;
  cin.get();
  clearScreen();
 }


void Console:: displayCustomers(Gym& gym){
  if (gym.getCustomers().size() != 0){
    for (Customer* customer : gym.getCustomers()){
      customer->display();
      if (customer->getSubscriptionFee() == 35.00)
      cout << endl;
    }
  }
  else {
    clearScreen();
    cout << "No Customers On File." << endl;
  }
  cout << "Press Enter To Continue." << endl;
  cin.get();
  clearScreen();
}


void Console::displayIntro(){
  cout << "*****GYM MANAGMENT SYSTEM*****\n\n\n";
}

