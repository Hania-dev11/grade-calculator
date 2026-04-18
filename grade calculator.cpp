#include<iostream>
using namespace std;
int main()
{
string name;
int marks;
char grade;
for(int i=1;i<=4;i++)
{
	cout<<"enter student name="<<endl;
	cin>>name;
	cout<<"enter marks of students="<<i<<endl;
	cin>>marks;
	if(marks>=80)
	{
		cout<<"Grade A"<<endl;
	}
	else if(marks>=70)
	{
		cout<<"Grade B"<<endl;
	}
	else if(marks<=50)
	{
		cout<<"Grade C"<<endl;
	}
	else
	{
		cout<<"Fail"<<endl;
	}
	if(marks>=40)
	{
	cout<<"student is passed"<<endl;
}
	else
	{
	cout<<"student may fail"<<endl;
}
cout<<"..."<<endl;
}
return 0;
}
