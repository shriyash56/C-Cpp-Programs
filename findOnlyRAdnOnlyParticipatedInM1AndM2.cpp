#include<iostream>
using namespace std;
int main()
{
	int m1,m2,r1;
	int m1m2,m1r1,m2r1;
	int m1m2r1;
	int unionM1M2R1,onlyR,onlyM1M2;
	cout<<"M1,M2,R1 =";
	cin>>m1>>m2>>r1;
	cout<<endl<<"(M1M2) (M1R1) (M2R1) =";
	cin>>m1m2>>m1r1>>m2r1;
	cout<<endl<<"(M1M2R1) =";
	cin>>m1m2r1;
	
	unionM1M2R1 = ((m1+m2+r1) - (m1m2+m1r1+m2r1) + m1m2r1);
	onlyR = m1+m2 - m1m2;
	onlyR = unionM1M2R1 - onlyR;
	cout<<endl<<onlyR;	
	
	onlyM1M2 = r1 - (onlyR + m2r1);
	onlyM1M2 = m1r1 - onlyM1M2;
	onlyM1M2 = m1m2 - onlyM1M2;
	cout<<endl<<onlyM1M2;
	
	return  0;
}
