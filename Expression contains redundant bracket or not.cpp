class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<int>st;
        for (int i = 0 ; i<s.length(); i++){
            char ch=s[i];
            if(ch == ')') {
            if(st.top() == '('){
         return 1;
            }
    else{
      while(st.top() != '('){
            st.pop();
                    }
        st.pop();
                }
            }
    else{
  if(ch=='('||ch=='+'||ch =='-'||ch =='*'|| 
        ch == '/'){
     st.push(ch);
                }
            }
        }
    return 0;}
};
