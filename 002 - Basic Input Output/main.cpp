/*
 * main.cpp
 *
 *  Created on: 23 déc. 2022
 *      Author: g005872
 */
#include <iostream>
#include <ios>
int main()
{
	using namespace std ;
	short age = 0 ;
	char buff[512] ;
	//char buff2[512];
	cout << "Give your age please : " << endl ;
	cin >> age ;
	cout << "Oh ! So your age is : " << age << endl ;
	cout << " What's your name ? " << endl ;
	cin >> buff ;
	cout << "Your name is : " << buff << endl ; // this method doesn't allow whitespaces...
	cin.clear();
	cin.ignore(INT_MAX,'\n'); // this is how I flushed the content of cin, shows how much cin << is unpractical without getline()
	cout << endl ;
	cout << "Whoops I only catched your first name, please tell me your full name again" << endl ;
	cin.getline(buff, 64, '\n'); // 64 characters maximum , cin will stop reading the input as soon as we press "ENTER"
	cout << "Oh ! So your full name is : " << buff << " !" << endl ;
	cout << "Am I correct ? " << endl ;
	cin.getline(buff,64, '\n');
	cout << "You said " << buff << " ." << endl ;
	return 0 ;

}


