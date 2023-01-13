#include "bits/stdc++.h"
using namespace std;

void towerOfHanoi(long long source,long long helper,long long dest,long long n)
{
    if(n==0)
    return;
towerOfHanoi(source,dest,helper,n-1);
cout<<source<<" "<<dest<<endl;
towerOfHanoi(helper,source,dest,n-1);

}
int main()
{
long long n;
cin>>n;
cout<<pow(2,n)-1<<endl;
towerOfHanoi(1,2,3,n);
}
