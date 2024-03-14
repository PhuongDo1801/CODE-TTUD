#include<iostream>
#include<string>
using namespace std;
class Time {
    private:
        int hour;
        int minute;
        int second;
    public: 
        Time(int hour, int minute, int second){
            this -> hour = hour;
            this -> minute = minute;
            this -> second = second;
        }    
        void setTime(int hour, int minute, int second){
            this -> hour = hour;
            this -> minute = minute;
            this -> second = second;
        }
        void setHour(int hour){
            this -> hour = hour;
        }
        void setMinute(int minute){
            this -> minute;
        }
        void setSecond(int second){
            this -> second = second;
        }
        int getHour(){return hour;}
        int getMinute(){ return minute;}
        int getSecond(){ return second;}
        void nextSecond(){
            if(second == 59 && minute == 59 & hour == 23){
                second = 0;
                minute = 0;
                hour = 0;
                return;
            } 
            if(second == 59 && minute == 59 && hour != 23){
                hour ++;
                second = 0;
                minute = 0;
                return;
            }
            if(second == 59 && minute != 59 && hour != 23){
                second = 0;
                minute ++;
                return;
            }
            else {
                second ++;
            }
        }
        void previousSecond(){
            if(second == 0 && hour == 0 && minute == 0){
                second = 59;
                minute = 59;
                hour = 23;
            }
            if(second == 0 && minute == 0 && hour != 0){
                second = 59;
                minute = 59;
                hour--;
            }
            if(second == 0 && minute != 0 && hour != 0){
                second = 59;
                minute--;
            }
            else {
                second--;
            }
        }
        void display(){
            string hour = to_string(this->hour);
            string minute = to_string(this->minute);
            string second = to_string(this->second);
            if (hour.length() == 1)
                hour = "0" + hour;
            if (minute.length() == 1)
                minute = "0" + minute;
            if (second.length() == 1)
                second = "0" + second;
            cout << hour + ":" << minute + ":" + second << endl;
        }
};
int main() {
	Time t(12, 1, 1);
	t.display();
	t.setTime(23, 59, 59);
	t.display();
	t.nextSecond();
	t.display();
	t.nextSecond();
	t.display();
	t.setTime(7, 0, 0);
	t.display();
	t.previousSecond();
	t.display();
	return 0;
}