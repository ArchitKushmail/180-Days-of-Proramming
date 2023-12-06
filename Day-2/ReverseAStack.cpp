#include<iostream>
#include<stack>

using namespace std ;


void reversestack(stack<int>&st){
    // Base case


    int target = st.top();
    st.pop();

    // Recursive call
    reversestack(st);

    // backtrack
    insertAtBottom(st,target);
}

void insertAtBottom(stack<int>&st ,int target){
    // base case
    if(st.empty()){
        st.push(target);
        return;
    }
    int topElement = st.top();
    st.pop();
    // Recursvie Call
    insertAtBottom(st,target);
    // Backtrack
    st.push(topElement);

}

int main()
{
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
reversestack(st);
cout<<"Printing the stack"<<endl;
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

return 0;
}