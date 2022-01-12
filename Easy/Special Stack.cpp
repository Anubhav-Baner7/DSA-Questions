//Problem link:https://practice.geeksforgeeks.org/problems/special-stack/1/?company[]=Goldman%20Sachs&company[]=Goldman%20Sachs&page=1&query=company[]Goldman%20Sachspage1company[]Goldman%20Sachs#


void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
	
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	return true;
	else
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.empty())
	return true;
	else
	return false;
}

int pop(stack<int>& s){
	// Your code goes here
	int x;
	if(!s.empty())
	{
	    x=s.top();
	    s.pop();
	}
	return x;
}

int getMin(stack<int>& s){
	// Your code goes here
	int mi=s.top();
	while(!s.empty())
	{
	    if(mi>s.top())
	    mi=s.top();
	    s.pop();
	}
	return mi;
}
