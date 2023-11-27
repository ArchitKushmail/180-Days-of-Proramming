#include<iostream>
using namespace std ;
class Complex{
private:
int a , b;

public:
void set_data(int x , int y){
    a = x;
    b = y;
}
void show_data(){
    cout<<"The value of the complex number is: "<< a <<" + "<<b<<"i"<<endl;
}

/*  Operator overloading
    1. When an operator is overloaded with multiple jobs, it is known as operator overloading.
    2. It is a way to implement compile time polymorphism.
*/

/*  Rules to Remember
    1. Any Symbol can be used as function name
        - If it is a valid operator in C language.
        - If it is preceded by operator keyword.
    
    2. You can not overLoad sizeof and ?: operator. 
    */

Complex operator + (Complex c){
    Complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return temp;
}

};
int main()
{
Complex c1 , c2, c3;
c1.set_data(3,4);
c2.set_data(5,6);
c3 = c1+c2; // or c3 = c1.operator+(c2);
c3.show_data();
return 0;
}