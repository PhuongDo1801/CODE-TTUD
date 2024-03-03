// Điền code vào dấu ... để chương trình hiển thị ra màn hình thông tin sau:
// Name: Long
// Age: 24
// Name: Kien
// Age: 29
#include <iostream>

using namespace std;

class Student {
    private:
        string name;
        int age;

    public: 
        Student(string name, int age){
            this -> name = name;
            this -> age = age;
        }
        void display(){
            cout<<"Name: "<< name << endl;
            cout<<"Àge: "<< age << endl;
        }
};

int main() {
    Student s1("Long", 24);
    Student s2("Kien", 29);
    s1.display();
    s2.display();
    return 0;
}