#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s,int n)
{
    // if(s[0]!=s[n-1])return false;
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        if(s[left]!=s[right])return false;
        left++;
        right--;
    }
    return true;
}
int main()
{    // this is the program for palindrome string or not 
    string s ;
    cout<<" enter the string ";
    getline(cin,s);
    int n=s.size(); 
    
    if(palindrome(s,n))cout<<" yes this is palindrom string ";
    else cout<<"  this is not palindrome ";
    return 0;
}