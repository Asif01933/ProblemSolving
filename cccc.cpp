#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a1=0,a2=0,a3=0,b=0,b2=0,b3=0,c=0,c2=0,d=0,f=0;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<40)
        {
            f++;
        }
        else if(a[i]>=40 && a[i]<=44)
        {
            d++;
        }
        else if(a[i]>=45 && a[i]<=49)
        {
            c2++;
        }
        else if(a[i]>=50 && a[i]<=54)
        {
            c++;
        }
        else if(a[i]>=55 && a[i]<=59)
        {
            b3++;
        }
        else if(a[i]>=60 && a[i]<=64)
        {
            b2++;
        }
        else if(a[i]>=65 && a[i]<=69)
        {
            b++;
        }
        else if(a[i]>=70 && a[i]<=74)
        {
            a3++;
        }
        else if(a[i]>=75 && a[i]<=79)
        {
            a2++;
        }
        else if(a[i]>=80 && a[i]<=100)
        {
            a1++;
        }
    }
  cout<<"Passed in Exam: "<<n-f<<endl;
  cout<<"Failed in Exam: "<<f<<endl;
  cout<<a1<<" Studen(s) get A+ Grade and Grade point 4.00 "<<endl;

  cout<<a2<<" Studen(s) get A Grade and Grade point 3.75 "<<endl;

  cout<<a3<<" Studen(s) get A- Grade and Grade point 3.50 "<<endl;

  cout<<b<<" Studen(s) get B+ Grade and Grade point 3.25"<<f<<endl;

  cout<<b2<<" Studen(s) get B Grade and Grade point 3.00"<<f<<endl;

  cout<<b3<<" Studen(s) get B- Grade and Grade point 2.75"<<f<<endl;

  cout<<c<<" Studen(s) get C+ Grade and Grade point 2.50"<<f<<endl;

  cout<<c2<<" Studen(s) get C Grade and Grade point 2.25"<<f<<endl;

  cout<<d<<" Studen(s) get D Grade and Grade point 2.00"<<f<<endl;

  cout<<f<<" Studen(s) get F Grade and Grade point 0.0"<<f<<endl;


}
