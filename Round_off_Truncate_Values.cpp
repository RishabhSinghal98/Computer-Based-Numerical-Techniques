#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

   double true_val,truncate_val,round_val;
   int decimal;
   cout<<"Enter True Value :"<<endl;
   cin>>true_val;

   cout<<"Enter The Number Of Decimal Places You Want Upto :"<<endl;
   cin>>decimal;

   double factor=pow(10.0,decimal);

   truncate_val=int(true_val*factor)/factor;
   round_val=round(true_val*factor)/factor;

   cout<<"Original True Value : "<<true_val<<endl;
   cout<<"Truncated Value : "<<truncate_val<<endl;
   cout<<"Round-off Value : "<<round_val<<endl;

    return 0;
}