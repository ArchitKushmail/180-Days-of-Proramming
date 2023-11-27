#include<iostream>
using namespace std ;

/*  1.Destructor is an instance member function of a class.
    2. The name of the destructor is same as the name of a class but preceded by tilde (~) symbol.
    3. Destructors can never be static.
    4. Destructor has no return type.
    5. Destructor take no argument (No overloading).
    6. It is invoked implicitly when object is going to destroy.
    7. This is the last function that exectures in the life-time of the object.
*/

/*
    Why destructor?
    - It should be defined to release resources allocated to an object.
*/
class Complex{
    private:
    int a , b;
    public:
    ~Complex(){
        cout<<"Destructor"<<endl;
    }

};
void fun(){
    Complex obj;
}
int main()
{
fun();
return 0;
}