//print from  n to 1 using backtracking
#include <iostream>
using namespace std;

void f(int i,int n)
{
    if(i>n)  //base case
        return;
    f(i+1,n);
    cout<<i<<" ";
}


int main() {
	int n;
	cin>>n;
	f(1,n); 
	return 0;
}

