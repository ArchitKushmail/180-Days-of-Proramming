#include<iostream>
using namespace std ;

// Static Local variable
// - Concept as it is taken from c.
// - They are by default initialized by zero.
// - Their lifetime is throughtout he program.

void fun(){
    static int g; // Example of static local variable.
    int s;
}

// Static member variable :-

// Also Known as Class member variable.
// Declared inside the class body.
//They must be defined outside the class.
// Static member variable does not belong to any object, but to the whole class.
// There will be only one copy of static member variable for the whole class.
// Any object can use the same copy of class variable.
// They can also be used with class name.

class Account{
    private:
    int balance; // instance member variable
    static float roi; // Static member variable also known as class variable.

    public:
    void set_balance(int b){
        balance = b;
    }
    void show_balance(){
        cout<<"Your balance is: "<<balance<<endl;
    }

}; 

float Account:: roi = 3.5f; // This line of code provides the memory for the class varibale or static member variable.

int main()
{
Account a1,a2;
a1.set_balance(5000);
a1.show_balance();
return 0;
}