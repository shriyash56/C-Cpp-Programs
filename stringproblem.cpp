/*
Write a program that does a progressive string reversal as described
below. The program accepts a string of characters. In the first step, the
program reverses the first character and prints. In the second step, it
chooses next two characters, reverses them and prints. In the third step,
it chooses the next 3 characters, reverses them and prints. And so on
and so forth. Assume that the string passed to your program does NOT
have any whitespaces or punctuation marks in it.
For e.g., if the string “this is a sentence” is passed to your program as an
argument:
char str = {t, h, i, s, i, s, a, s, e, n, t, e, n, c, e};
Then, the output of your program should be:
t
ih
sis
nesa
ecnet

*/


#include<iostream>
#include<string.h>
using namespace std;

void reverse(int start, int end, char *s)
{
	 for(int i=end; i>=start; i--)
	 	 cout<<s[i];
	  
	 cout<<endl;
}
 
int main(void)
{
	 char s[100] ={'t','h','i','s','i','s','a','s','e','n','t','e','n','c','e'}; 
	 int i=2,start=0,end=0;
	 
	 while(i<=6)
	 {
	 	 reverse(start, end, s);
	 	 start=end+1;
	 	 end=end+i;
	 	 i++;	 	 
	 }	 
}