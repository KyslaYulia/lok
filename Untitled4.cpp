#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
 
 
stack<int> s;
char str[100];
int n;
int main(void)
{
  while(scanf("%s",&str))
  {
    if (strcmp(str,"push") == 0)
    {
      cin>>n;;
      s.push(n);
      cout<<"ok"<<"\n";
    } else
    if (strcmp(str,"pop") == 0)
    {
       cout<<s.top()<<"\n";
      s.pop();
    } else
    if (strcmp(str,"back") == 0)
    {
       cout<<s.top()<<"\n";;
    } else
    if (strcmp(str,"size") == 0)
    {
       cout<<s.size()<<"\n";
    } else
    if (strcmp(str,"clear") == 0)
    {
      while(!s.empty()) 
	s.pop();
      cout<<"ok"<<"\n";
    } else
    {
      cout<<"bye"<<"\n";
      break;
    }
  }
  return 0;
}
