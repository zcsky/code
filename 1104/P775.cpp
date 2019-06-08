#include<iostream>
#include<stack>
#include<string>
#include<map>
#include<vector>
using namespace std;

/*int js(string s,int a,int b)
{
    switch(s)
    {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
        case '^':return pow(a,b);
    }
} 
*/
int main()
{
	vector<string>tokens;
	map<char, int> m;
	m['*']=3;
	m['/']=3;
	m['+']=2;
	m['-']=2;
	m['^']=1;
	m['(']=0;
	m[')']=0;
	stack<char> t;
	string s,tmp;
	cin>>s;
	int ans=0;
	int lz = s.size();
	//cout<<"1111";
	for(int i = 0;i < lz;++i)
	{
		if(isdigit(s[i])||(s[i]=='-'&&isdigit(s[i+1])))
			{
			cout<<s[i]<<" ";
			tokens[ans++]=s[i];
			continue;
			}

		if(t.empty())
			{
				t.push(s[i]);
				continue;
			}

		if(s[i]=='(')
		{
			t.push(s[i]);
			continue;
		}

		if(s[i]==')')
		{
			while(t.top()!='(')
			{
				//if(t.top()==")") t.pop;
					cout<<t.top()<<" ";
					tokens[ans++]=t.top();
					t.pop();
			}
			t.pop();
			continue;
		}

		while(!t.empty()&&m[s[i]]<=m[t.top()])
			{
				cout<<t.top()<<" ";
				tokens[ans++]=t.top();
				t.pop();
			}
		t.push(s[i]);

	}
	while(!t.empty())
		{
			cout<<t.top()<<" ";
			tokens[ans++]=t.top();
			t.pop();
		}
		cout<<endl;
	cout<<"%%%";
	for(int i=0;i<ans;++i) cout<<tokens[i];
	//cout<<endl<<tmp;
	//int n=tokens.size();
	return 0;
}

