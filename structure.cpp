#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

struct specs
{
char name[10];
int st;
int roll;
};
int main (void)
{
specs s1, s2, s3;
cout <<"Student #1 : "<<endl;
cin >>s1.name>>s1.st>>s1.roll;
cout<<"Student #2  : "<<endl;
cin >>s2.name>>s2.st>>s2.roll;
cout<<"Student #3 : "<<endl;
cin >>s3.name>>s3.st>>s3.roll;
cout<<"\n\nProcessed Data :\n\n"<<endl;
cout<<"\tName\tClass\tRollno."<<endl;
cout<<"       --------------------------\n"<<endl;
cout<<setw(12)<<s1.name<<"\t"<<setw(4)<<s1.st<<"\t"<<setw(4)<<s1.roll<<endl;
cout<<setw(12)<<s2.name<<"\t"<<setw(4)<<s2.st<<"\t"<<setw(4)<<s2.roll<<endl;
cout<<setw(12)<<s3.name<<"\t"<<setw(4)<<s3.st<<"\t"<<setw(4)<<s3.roll<<endl;
return 0;
}