//Problem Link: https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&page=1&query=company[]Goldman%20Sachspage1company[]Goldman%20Sachs#

//1st Approach(Using extra space)
  string reverseWords(string S) 
    { 
        // code here 
        stack<string> st;
        string t="";
        for(int i=0;i<S.length();i++)
        {
            if(S[i]!='.')
            t+=S[i];
            else
            {
                st.push(t);
            t="";
            }
        }
        st.push(t);
        string res="";
        while(!st.empty())
        {
            string temp=st.top();
            res+=temp;
            res+=".";
            st.pop();
        }
        res.erase(res.end()-1);
        return res;
    }
//TC:O(n);
//SC:O(m) where m is the number of words;

//2nd Approach(Without using extra space)
 string reverseWords(string S) 
    { 
        // code here 
        int j=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='.')
            {
             reverse(S.begin()+j,S.begin()+i);
             j=i+1;
            }
        }
        reverse(S.begin()+j,S.end());
        reverse(S.begin(),S.end());
        return S;
    }
//TC:O(n);
//SC:O(1);
