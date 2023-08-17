bool isBalanced(string S){
    // Write your code here.
    stack<char> st;
    for(int i=0;i<S.size();i++)
    {
      if (S[i] == '(' or S[i] == '{' or S[i] == '[') {
        st.push(S[i]);
      }
      else
      {
        if(!st.empty())
        {
          if((st.top() == '(' and S[i] == ')') or
                 (st.top() == '{' and S[i] == '}') or
                 (st.top() == '[' and S[i] == ']'))
                 {
                   st.pop();
                 }
                 else{
                   return false;
                 }
        }
        else{
          return false;
        }
      }
    }
    return st.empty();
    
}
