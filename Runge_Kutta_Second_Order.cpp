#include<iostream>
using namespace std;
#define F(x,y) (x+y)


int main()
{

   float x0,y0,xn,n,h;
   float K,k1,k2,k3,k4,yn;

   cout<<"Enter Initial Value Of X ie Xo : "<<endl;
   cin>>x0;

   cout<<"Enter Initial Value Of Y ie Yo : "<<endl;
   cin>>y0;

   cout<<"Enter Calculation Point i.e Xn : "<<endl;
   cin>>xn;

   cout<<"Enter Number Of Steps i.e n : "<<endl;
   cin>>n;

   h=(xn-x0)/n;

   cout<<"The Value Of H is : "<<h<<endl;

   for(int i=0;i<n;i++)
   {
     
     k1=h * (F(x0,y0));
     k2=h * (F(x0+h,y0+k1));
     

     K=(k1+k2)/2;

     yn=y0+K;

    cout<< x0<<"\t"<< y0<<"\t"<<  endl;

     x0=x0+h;
     y0=yn;

   }
   cout<< x0<<"\t"<< y0<<"\t"<<  endl;
  
  cout<<"The Value Of Y at Calculation Point "<< xn <<" Is : "<< yn <<endl;

    return 0;
}
