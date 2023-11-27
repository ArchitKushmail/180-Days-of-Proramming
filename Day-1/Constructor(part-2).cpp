#include<iostream>
using namespace std ;

/*  1. Constructor is a memebr function of class.
    2. The name of the constructor is same as the name of the class.
    3. It has no return type, so can't use return keyword.
    4. It must be an instance member function,  that is, it can never be static.
    5. Constructor is implicitly invoked when an object is created.
    6. Constructor is used to solve the problem of initilization.
*/
// If user don't make any Constructor then default constructor is formed by the compiler. 
// When we make more than one constructor in our class then this is known as Constructor overloading.
class Complex{
    private: // Access Modifier
    int a,b;
    
    public:
    void set_data(int i , int j){
        a = i;
        b = j;
    }
    void show_data(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The Value of b is: "<<b<<endl;
    }
    Complex(int x , int y){ // Parametrized constructor.
        a = x;
        b = y;
    }
    Complex(int k){ // Parametrized Constructor.
        a = k;
    }
    Complex(){ // Default Constructor
        a = 0;
        b = 0;
    }
};
int main(){
    Complex c1(3,4);
    Complex c2 = Complex(5),c3; // By creating three object constructor will run 3 times.
    return 0;
}
