
#include<iostream>   //Header file
using namespace std;
class cppArray
{
public:
  int cp[20],n;
  public:
        friend istream &operator>>(istream&in,cppArray&c);
        friend ostream &operator<<(ostream&out,cppArray&c);
        int size();
        void operator=(cppArray c);
        int &operator[](int subscript);

};
istream &operator>>(istream&in,cppArray&c)
{
 for(int i=0;i<c.n;i++)
{
c.cp[i]=0;
}
 cout<<"\n Enter element of array:";
 for(int i=0;i<c.n;i++)
 {
   in>>c.cp[i];
 }
}
ostream &operator<<(ostream&out,cppArray&c)
{
 for(int i=0;i<c.n;i++)
 {
   out<<c.cp[i]<<"\t";
 }
}
int cppArray::size()
{
   cout<<"\n Enter the number of elements:";
   cin>>n;
   return n;
}
void cppArray::operator=(cppArray c)
{
  n=c.n;
  for(int i=0;i<n;i++)
  {
    cp[i]=c.cp[i];
  }
}
int &cppArray::operator[](int subscript)
{
  if(subscript<0||subscript>n)
  {
   cout<<"\n error out of range";
   return cp[subscript-1];
  }
   else
    return cp[subscript];
}

int main()
{
 cppArray c1,c2;
 c1.n = 5;
 c2.n = 5;
 c1.size();
 cin>>c1;
 cout<<c1;
 c2=c1;
 cout<<"\n";
 cout<<c2;
 c1[1]=50;
 cout<<"\n";
 cout<<c1;
 return 0;
}
/********************************OUT PUT*******************/
/*
 Enter the number of elements:5

 Enter element of array:1
2
3
4
5
1       2       3       4       5
1       2       3       4       5
 error out of range     1       2       3       4       5
*/
