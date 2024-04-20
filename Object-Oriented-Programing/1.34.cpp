#include<iostream>
using namespace std;

class Employee {
    private:
        string name;
        int salary;
    public:
        Employee(string name, int salary){
            this -> name = name;
            this -> salary = salary;
        }
        void setName(string name){
            this -> name = name;
        }
        void setSalary(int salary){
            this -> salary = salary;
        }
        string getName(){
            return name;
        }
        int getSalary(){
            return salary;
        }
        void display(){
            cout<< "Name: "<< name << endl;
            cout<<"Salary: "<< salary << endl;
        }
};

//#pragma once
//#include "Employee.cpp"

//using namespace std;

class Manager : public Employee {
    private:   
        int bonus;
    public: 
        Manager(string name, int salary, int bonus) : Employee(name, salary){
            this -> bonus = bonus;
        }
        void setBonus(int bonus){
            this -> bonus = bonus;
        }
        int getBonus(){
            return bonus;
        }
        int getSalary(){
            return Employee::getSalary() + bonus;
        }
};