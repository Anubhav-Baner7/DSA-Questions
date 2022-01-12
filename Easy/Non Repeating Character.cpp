//Problem Link:https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&page=1&query=company[]Goldman%20Sachspage1company[]Goldman%20Sachs#

   char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<int,int> m;
       for(int i=0;i<S.length();i++)
       {
           m[S[i]]++;
       }
       for(int i=0;i<S.length();i++)
       {
           if(m[S[i]]==1)
           return S[i];
       }
       return '$';
       
    }
//TC:O(n)
//SC:O(no. of distinct characters)
