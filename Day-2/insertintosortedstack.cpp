#include<iostream>
#include<stack>
using namespace std ;
void insertSorted(stack<int>&s , int target){
    //Base case
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top() >= target){
        s.push(target);
        return;
    }
    // Processing
    int topElement = s.top();
    s.pop();

    // Recursive-call
    insertSorted(s,target);

    // Back-traking
    s.push(topElement);
}

void sortStack(stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }

    int topElement = s.top();
    s.pop();
    sortStack(s);
    insertSorted(s,topElement);
}
int main()
{
stack<int>s;
s.push(7);
s.push(11);
s.push(3);
s.push(5);
s.push(9);
s.push(2);

int target = 4;
insertSorted(s,target);
return 0;
}