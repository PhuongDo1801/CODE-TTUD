#include<iostream>
using namespace std;
class Student {
    private:
        int id;
        string name;
        int age;
        string address;
        int score;
    public:
        Student(){}
        Student(int id, string name, int age, string address, int score){
            this -> id = id;
            this -> name = name;
            this -> age = age;
            this -> address = address;
            this -> setScore(score);
        }
        void setId(int id){
            this -> id = id;
        }
        void setName(string name){
            this -> name = name;
        }
        void setAge(int age){
            this -> age = age;
        }
        void setAddress(string address){
            this -> address = address;
        }
        void setScore(int score){
            if (score < 0) {
			this->score = 0;
            } else if (score > 10) {
                this->score = 10;
            } else {
                this->score = score;
            }
        }
        int getId(){return id;}
        string getName(){return name;}
        int getAge(){return age;}
        string getAddress(){return address;}
        int getScore(){return score;}
};