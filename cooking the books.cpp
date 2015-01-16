#include <iostream>
#include <cstdlib>
#include <cstdio>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main() {
	// your code goes here
	int t,k;
	
	scanint(t);
	for(k=1;k<=t;k++)
	{
	    string n,n1;
	    int i;
	    cin>>n;
	    int min = 0;
	    int max = 0;
	    for(i=0;i<n.size();i++)
	    {
	        if((int)n[i]<n[min] && n[i]!='0')
	        {
	            min = i;
	        }
	        else if((int)n[i]>n[max] && n[i]!='0')
	        {
	            max = i;
	        }
	    }
	    
	    n1 = n;
	    int temp = (int)n[0];
	    n[0] = (char)n[min];
	    n[min] = (char)temp;
	    // for n1
	    temp = (int)n1[0];
	    n1[0] = (char)n1[max];
	    n1[max] = (char)temp;
	    cout<<"case #"<<k<<":"<<" "<<n<<" "<<n1<<endl;
	    
	    
	    
	}
	return 0;
}