#include<iostream>
using namespace std ;

/*  1. Constructor is a memebr function of class.
    2. The name of the constructor is same as the name of the class.
    3. It has no return type, so can't use return keyword.
    4. It must be an instance member function,  that is, it can never be static.
    5. Constructor is implicitly invoked when an object is created.
    6. Constructor is used to solve the problem of initilization.
*/
class Complex{
    private: // Access Modifier
    int x,y;
    
    public:
    void set_data(int a , int b){
        x = a;
        y = b;
    }
    void show_data(){
        cout<<"The value of x is: "<<x<<endl;
        cout<<"The Value of y is: "<<y<<endl;
    }

    Complex(){
        cout<<"Hello Constructor"<<endl;
    }
};
int main(){
    Complex c1,c2,c3;
    return 0;
}
