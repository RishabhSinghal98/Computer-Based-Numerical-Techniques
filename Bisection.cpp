#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;
double calculate(vector<int>&eq,int highest_deg,double number)
{
    double ans=0;
    for(int i=0;i<eq.size();i++)
    {
        ans+=double(eq[i]*pow(number,highest_deg-i));
    }
    return ans;
}
int main()
{
    int highest_deg,coeff;
    double a,b,avg;
    double tolerate_val=0;
    double f_avg=0;
    cout<<"Enter Highest Degree in the equation"<<endl;
    cin>>highest_deg;

    vector<int> eq;
    for(int i=highest_deg;i>=0;i--)
    {
        cout<<"Enter Coeffection of x"<<i<<endl;
        cin>>coeff;
        eq.push_back(coeff);
    }

   cout<<"Enter two values"<<endl;
   cin>>a;
   cin>>b;

   double f_a=calculate(eq,highest_deg,a);
   double f_b=calculate(eq,highest_deg,b);

   cout<<"Enter Tolerate Value "<<endl;
   cin>>tolerate_val;
    
do{
    avg=(a+b)/2;
    f_avg=calculate(eq,highest_deg,avg);
    cout<<f_a<<" "<<f_b<<" "<<" "<<avg<<" "<<f_avg<<endl;

    if(f_avg<0) a=avg;
    else b=avg;
} while(fabs(f_avg)>tolerate_val);

cout<<"The Root is "<<avg<<endl;

return 0;

}
