#include<bits/stdc++.h>
using namespace std;

// http://www.practice.geeksforgeeks.org/problem-page.php?pid=147
// http://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/


int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<char>st;
		bool flag=true;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(' || s[i]=='[' || s[i]=='{')
			{
				st.push(s[i]);
			}
			else if(st.empty())
			{
				flag=false;
			}
			else
			{
				if(s[i]==')' && !(st.top()=='('))
				{
					flag=false;
				}
				else if(s[i]==']' && !(st.top()=='['))
				{
					flag=false;
				}
				else if(s[i]=='}' && !(st.top()=='{'))
				{
					flag=false;
				}
				else
				{
					st.pop();
				}
			}
		}
		if(flag==true)
		{
			cout<<"balanced\n";
		}
		else
		{
			cout<<"not balanced\n";
		}
	}
	return 0;
}
