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
};
int main()
{
Complex c1;
c1.set_data(3,4);
c1.show_data();
return 0;
}