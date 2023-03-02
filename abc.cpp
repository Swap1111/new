#include<iostream>
using namespace std;
int main()
{
    string ch="abcdef";
    int len=ch.length();
    for(int i=0;i<len;i++)
    {
        int val=ch[i];
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            ch[i]=char(val-32);
        }
        else{
        ch[i]=char(val+1);
        }
    }
    cout<<ch;
}
