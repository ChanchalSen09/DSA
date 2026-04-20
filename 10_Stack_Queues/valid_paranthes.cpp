class Valid_Paranthes{
    function CheckValid (string s){
     stack <char > st;
     for(ch :s  ){
        if(ch =='(' || ch == '{' || ch == '['){
            st.push(ch);
        }else {
            if(st.empty())return true;
            char top = st.top()
            if((ch==')' && top == '(') || (ch=='{' && ch == '}')||(ch=='[' && ch == ']')){ // this is wrong Condition plz check once again ok sysbol checking 
                st.pop();
            }else{
                return false;
            }        }
     } 
     return st.empty();
    }
}