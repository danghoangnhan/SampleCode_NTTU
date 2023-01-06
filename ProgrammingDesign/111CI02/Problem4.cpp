#include <iostream>
#include <string>

using namespace std;
class Fruit {
    private:
        string color;
    public:
        void setCorlor(string value){
            color = value;
        };
        string getColor()const{
            return color;
        };
        virtual void taste();
        void printInfo(){
            cout<<color<<endl;
        };
        virtual void printData(){
            cout<<color<<endl;
        };
};

class Apple:public Fruit{
    private:
        string cultivar;
    public:
        Apple(string co="red",string cu = "Fuji"):cultivar(cu){
            setCorlor(co);
        };
        Apple(const Apple &a){
            setCorlor(a.getColor());
            cultivar = a.cultivar;
        }
        ~Apple(){};
        void taste(){
            cout<<"sweet"<<endl;
        };
        void setCultivar(string cu)
        {
            cultivar = cu;
        };
        void setCultivar(string cu,string co){
            cultivar = cu;
            setCorlor(co);
        };
        void printInfo(){
            cout<<cultivar<<endl;
        };
        void printData(){
            cout<<cultivar<<endl;
        };
};

int main(){
    Apple apple;
    apple.setCultivar("McIntosh","green");
    Fruit *p1 = new Apple();
    Fruit *p2 = new Apple(apple);
    Apple *p3 = new Apple();
    p3->setCorlor("yellow");
    p3->setCultivar("McIntosh");
    p1->printInfo();
    p2->printInfo();
    p3->printInfo();
    p1->printData();
    p2->printData();
    p3->printData();
    return 0;
}