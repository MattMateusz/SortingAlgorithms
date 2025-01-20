#include "randnumb.h" 
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int get_random_number() {
	return 1+(rand() % 50) + 1+(rand() % 50);
}

void print_numbers(std::vector<int> number_list) {
	
	std::cout << "=-=-=-= START =-=-=-=" << std::endl;
	
	for(int i=0;i<number_list.size();i++) {
		std::cout << number_list.at(i) << std::endl;
	}
	std::cout << "=-=-=-= STOP =-=-=-=" << std::endl;
	std::cout << " " << std::endl;
}

std::vector<int> get_numbers(int size) {
	std::vector<int> numbers;
	
	for(int i=0;i<size;i++) {
		numbers.push_back(get_random_number());	
	}
	return numbers;		
}