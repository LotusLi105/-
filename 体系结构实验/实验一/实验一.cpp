#include <iostream>
#include<ctime>
using namespace std;
clock_t  Begin, End;
double duration;
int * sum;
int **b;
int * a;
void ordinary(int n){
    for(int i=0;i<n;i++)
    {
        sum[i]=0;
        for(int j=0;j<n;j++)
            sum[i]+=b[j][i]*a[j];
    }
}
void pro(int n){
    for(int i=0;i<n;i++)
        sum[i]=0;
        for(int j=0;j<n;j++){
    for(int i=0;i<n;i++)
        sum[i]+=b[j][i]*a[j];
        }
}

int main()
{
int n;
cin>>n;
sum=new int[n];
a=new int[n];
b=new int* [n];
for(int i=0;i<n;i++){
    b[i]=new int[n];
    a[i]=i;
}
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    b[i][j]=i+j;
    Begin = clock();
   pro(n);
   End = clock();
   duration = double(End - Begin) / CLOCKS_PER_SEC;
   cout<<duration<<"s"<<endl;
    return 0;
}
