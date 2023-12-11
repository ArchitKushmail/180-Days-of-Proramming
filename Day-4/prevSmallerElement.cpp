#include<iostream>
#include<stack>
#include<vector>
using namespace std ;
vector<int>prevSmaller(vector<int>&input){
    stack<int>s;
    int n = input.size();
    vector<int>ans(n);
    s.push(-1);
    for(int i = 0;i<n;i++){
        int curr = input[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
int main()
{
vector<int>input;
input.push_back(2);
input.push_back(1);
input.push_back(4);
input.push_back(3);
vector<int>ans=prevSmaller(input);
return 0;
}