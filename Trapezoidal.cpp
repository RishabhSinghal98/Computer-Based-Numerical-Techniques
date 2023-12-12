#include<iostream>
using namespace std;

#define F(x) (1.0/(1.0+x*x))


int main()
{

  float lower_limit,upper_limit,n,h,k;
  float integration_ans;

  cout<<"Enter Lower Limit : "<<endl;
  cin>>lower_limit;

  cout<<"Enter Upper Limit : "<<endl;
  cin>>upper_limit;

  cout<<"Enter No Of Sub Intervals i.e n : "<<endl;
  cin>>n;


  h=(upper_limit-lower_limit)/n;

  cout<<"The Value of StepSize Is :  "<< h<<endl;

  integration_ans=F(lower_limit)+F(upper_limit);// to Calculate (y0+yn)
  integration_ans/=2;

 for(int i=1;i<n;i++)   //starting with 1 because we dont need y0 as not required in formaula
  {

   k=lower_limit+i*h;  //i.e we are calculating x1;

  integration_ans+=F(k);
        
  }
  integration_ans*=h;

  cout<<"The Integration Value Of The Given Equation Is "<<integration_ans<<endl;




    return 0;
}