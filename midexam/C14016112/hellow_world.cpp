#include<iostream>
#include<string>
using namespace std;

int main()
{
	 string seperation = " " ; 
	 string str="Today, I want to show that the complexity time of determinant is n!. But by Gaussian elimination, we can complete it in O(n^3) ";
	 cout << str << endl ;
//	 str.erase(0,3);
//	 cout << str<< endl ;
	 while( str.length() > 0 )
	 {
	 	string substring;

	 	int i = str.find_first_of(seperation,0); 
	 	substring = str.substr(0,i) ; 
	 		 	
	 	cout << substring << endl ;
//	 	cout << str.length() << endl ;
	 	str.erase(0,i+1) ; 
	 	
	 }
	 
	 
}
