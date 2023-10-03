#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    double y,u,u1;
    int a[50][50];

    cout<<"Enter Number Of Entries:"<<endl;
    cin>>n;
    
    double predict;
    
    cout<<"Enter Year:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];
    }
    cout<<"Enter Population : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][1];
    }
    
    for(int i=2;i<n+1;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            a[j][i]=a[j+1][i-1]-a[j][i-1];
        }
    }  

    cout<<"The Difference Table Is "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1-i;j++)
        {
            cout<<a[i][j]<<"|";
        }
        cout<<endl;
    }
 
    cout<<"Enter Value To Be Predicted "<<endl;
    cin>>predict;

    
    if(predict>a[0][0] && predict<a[1][0]) // Newton Forward
    {
        u=(predict-a[0][0])/(a[1][0]-a[0][0]);
        u1=u;
        y=a[0][1];
        int fact=1;
        for(int i=2;i<=n;i++)
        {
            y+=(u/fact)*a[0][i];
            fact=fact*i;
            u=u*(u1-(i-1));

        }
    }
    
    else{
        u=(predict-a[n-1][0])/(a[n-1][0]-a[n-2][0]); // Newton Backward
        u1=u;
        int fact=1;
        y=a[n-1][1];
        for(int i=2;i<=n;i++)
        {
            y+=(u/fact)*a[n-i][i];
            fact=fact*i;
            u=u*(u1+(i-1));
        }
    }
    
    cout<<"Predicted Population of "<<predict<<" is "<<y<<endl;


    

    return 0;
}