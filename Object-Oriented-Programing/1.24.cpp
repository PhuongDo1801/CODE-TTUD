#include<iostream>
using namespace std;
class Employee {
    private:
        int id;
        string firstName;
        string lastName;
        int salary;
    public:
        Employee(int id, string firstName, string lastName, int salary){
            this -> id = id;
            this -> firstName = firstName;
            this -> lastName = lastName;
            this -> salary = salary;
        }
        void setId(int id){
            this -> id = id;
        }
        void setFirstName(string firstName){
            this -> firstName = firstName;
        }
        void setLastName(string lastName){
            this -> lastName = lastName;
        }
        void setSalary(int salary){
            this -> salary = salary;
        }
        int getId(){return id;}
        string getFirstName(){return firstName;}
        string getLastName(){return lastName;}
        int getSalary(){
            return salary;
        }
        string getFullName(){
            return firstName + " " + lastName;
        }
};