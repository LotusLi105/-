#include<iostream>
#include<ctime>
using namespace std;
clock_t  Begin, End;
double duration;
int sum1=0，sum2=0,mysum=0;
int main(){
int n;
cin>>n;
int * a=new int [n];
for(int i=0;i<n;i++)
a[i]=i;
 Begin = clock();
for(int i=0;i<n;i+=2){
sum1+=a[i];
sum2+=a[i+1]
}
mysum=sum1+sum2;
 End = clock();
   duration = double(End - Begin) / CLOCKS_PER_SEC;
   cout<<duration<<"s"<<endl;
    return 0;
}
