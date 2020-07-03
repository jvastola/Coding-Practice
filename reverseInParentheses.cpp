std::string reverseInParentheses(std::string inputString) {
  int len = inputString.length();
   stack<char> st; 
     for (int i = 0; i < len; i++) { 
  
        if (inputString[i] == '(') { 
            st.push(i); 
        } 
        else if (inputString[i] == ')') { 
            reverse(inputString.begin() + st.top() + 1, 
                    inputString.begin() + i); 
            st.pop(); 
        } 
    } 
    string res = ""; 
    for (int i = 0; i < len; i++) { 
        if (inputString[i] != ')' && inputString[i] != '(') 
            res += (inputString[i]); 
    } 

    return res;
}
