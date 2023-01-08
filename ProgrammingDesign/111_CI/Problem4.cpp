#include    <iostream>
#include    <string>
using namespace std;

class Fruit {
    private:
        string corlor;
    public:
        void setCorlor(string value){corlor = value;};
        string  getCorlor() const   {return corlor;};
        void    taste();
        void    printInfo(){   cout<<corlor<<endl;};
        void    printData() {   cout<<corlor<<endl;};
};
class Apple: public Fruit{
    private:
        string cultivar;
    public:
        Apple(string co = "red",string cu = "FUji"):cultivar(cu){setCorlor(co);};
        Apple(const Apple a){
            setCorlor(a.getCorlor());
            cultivar = a.cultivar;
        }
        ~Apple(){};
};



