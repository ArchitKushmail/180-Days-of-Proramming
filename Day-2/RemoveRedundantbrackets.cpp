#include<iostream>
#include<stack>
#include<string>

using namespace std ;
int checkRedundancy(string &s) {
        // code here
        stack<int>st;
        for(int i = 0;i<s.size();i++){
            
            if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
                st.push(s[i]);
            }else {
                // ya toh closing bracket hai ya fir lowercase character
                bool isRedundant = true;
                if(s[i]==')'){
                    while(st.top()!='('){
                        char top = st.top();
                        if(top== '+' || top =='-' || top =='*'  ||top == '/'){
                            isRedundant = false;
                            
                        }
                        st.pop();
                    }
                    if(isRedundant == true){
                        return true;
                    }
                    st.pop();
                }
            }
        }
        return false;
}
int main()
{
string s = "((a+b))";
int ans = checkRedundancy(s);
cout<<ans;
return 0;
}