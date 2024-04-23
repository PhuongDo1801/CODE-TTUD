#pragma once
#include<iostream>
using namespace std;
class Person {
    private:
        string name;
        string address;
    public:
        Person(string name, string address){
            this -> name = name;
            this -> address = address;
        }
        void setName(string name){
            this -> name = name;
        }
        void setAddress(string address){
            this -> address = address;
        }
        string getName(){
            return name;
        }
        string getAddress(){
            return address;
        }
        virtual void display(){
        }
};

//#include "Person.cpp"
//#include<iostream>
class Employee : public Person {
    private:
        int salary;
    public:
        Employee(string name, string address, int salary) : Person(name, address){
            this -> salary = salary;
        }
        void display(){
            cout<<"Employee name: "<< Person::getName() << endl;
            cout<<"Employee address: "<< Person::getAddress() << endl;
            cout<<"Employee salary: "<< salary<< endl;
        }
};

//#include "Person.cpp"
//#include<iostream>
class Customer : public Person {
    private:
        int balance;
    public:
        Customer(string name, string address, int balance) : Person(name, address){
            this -> balance = balance;
        }
        void display(){
            cout<<"Customer name: "<< Person::getName() << endl;
            cout<<"Customer address: "<< Person::getAddress() << endl;
            cout<<"Customer balance: "<< balance<< endl;
        }
};