#include<iostream>

using namespace std;
int main()
{
   int num, i=1, sum=0;
   cout<<"Enter a Number: ";
   cin>>num;
   while(i<num)
   {
      if(num%i==0)
         sum = sum+i;
      i++;
   }
   if(num==sum)
      cout<<endl<<num<<" is a Perfect Number.";
   else
      cout<<endl<<num<<" is not a Perfect Number.";
   cout<<endl;
   return 0;
}
