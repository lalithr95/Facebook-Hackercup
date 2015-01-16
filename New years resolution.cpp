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
	int t;
	scanint(t);
	for(int k=0;k<t;k++)
	{
	    long long int j;
	    int gp,gc,gf;
	    long long int i;
	    int n;
	    int *a,*b,*c;
	    scanint(gp);
	    scanint(gc);
	    scanint(gf);
	    scanint(n);
	    a = new int[n];
	    b = new int[n];
	    c = new int[n];
	    int x,y,z;
	    for(i=0;i<n;i++)
	    {
	        scanint(a[i]);
	        scanint(b[i]);
	        scanint(c[i]);
	    }
	    long long int max = 1<<n;
	    for(i=0;i<max;i++)
	    {
	        x =0;
	        y =0;
	        z =0;
 
                    
                        for(j=0;j<n;++j){
                        if(i&(1<<j)){
                            x=x+a[j];
                            y=y+b[j];
                            z=z+c[j];
                        }
                        }
                    if(x==gp && y==gc && z==gf)
                        {
                            cout<<"case #"<<k+1<<": "<<"yes"<<endl;
                            break;
                        }
                    else
                        {
                            continue;
                        }
	                 
	    
	    }
	    if(i==max)
	        cout<<"case #"<<k+1<<": "<<"no"<<endl;
	}
	return 0;
}