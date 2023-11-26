#include<iostream>
using namespace std ;

class Complex{
    private: // Access Modifier
    int x;
    int y;
    
    public:
    void set_data(int a , int b){
        x = a;
        y = b;
    }
    void show_data(){
        cout<<"The value of x is: "<<x<<endl;
        cout<<"The Value of y is: "<<y<<endl;
    }
    Complex add(Complex c ){
        Complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
};
int main()
{
Complex c1,c2,c3;
c1.set_data(3,4);
c2.set_data(5,6);
c3 = c1.add(c2);
c3.show_data();
return 0;
}