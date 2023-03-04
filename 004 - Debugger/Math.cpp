/*
 * Math.cpp
 *
 *  Created on: 10 janv. 2023
 *      Author: G005872
 */

#include "Math.h"


int Add(int x, int y){
	int sum = x+ y ;
	std::cout << "Sum is : " << sum << std::endl ;
	return sum ;
}

void Print(char ch){
	for(int i = 0 ; i < 10 ; ++i){
		std::cout << ch ;
	}
	std::cout << std::endl ;
}
