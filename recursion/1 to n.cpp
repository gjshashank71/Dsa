//print n linearly i to n
#include <iostream>
using namespace std;

void f(int i,int n)
{
    if(i>n)  //base case
        return;
    cout<<i<<" ";
    f(i+1,n);
}


int main() {
	int n;
	cin>>n;
	f(1,n); 
	return 0;
}

