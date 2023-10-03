#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   double a[50][50];
   int n;
   double y,predict;

   cout<<"Enter The Value OF N "<<endl;
   cin>>n;

   cout<<"Enter Value Of X "<<endl;
   for(int i=0;i<n;i++){
    cin>>a[i][0];
   }

   cout<<"Enter Value Of Y "<<endl;
   for(int i=0;i<n;i++){
    cin>>a[i][1];
   }

   for(int i=2;i<n+1;i++)
   {
    for(int j=0;j<n-i+1;j++)
    {
        a[j][i]=a[j+1][i-1]-a[j][i-1];
    }
}
cout<<"The Difference Table Is :"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i+1;j++)
    {
        cout<<a[i][j]<<"|";
    }
    cout<<endl;
}

y=a[n/2][1];
cout<<"Enter Value To Be Predicted "<<endl;
cin>>predict;

double u=(predict-a[n/2][0])/(a[1][0]-a[0][0]);
double u1=u;
int fact=1;

for(int i=2;i<=n;i++)
{
    
    y+=(u/fact)*a[(n-1)/i][i];
    fact=fact*i;
    if(i%2==0) u1=u1*(u-(i/2));
    else u1=u1*(u+(i/2));
}
  cout<<"Predicted Value Is "<<y;







    return 0;
}