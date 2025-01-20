#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "randnumb.h"

using namespace std;

vector<int> sort_numbers(vector<int> numbers) {
	for(int i=0;i<numbers.size();i++) {
		for(int k=0;k<numbers.size()-1 ;k++) {
			if(numbers[k] > numbers[k+1]) {	
			swap(numbers[k],numbers[k+1]);
			}
	    }
	}
	print_numbers(numbers);
	return numbers;
}

int main() {
	int size;
	cout << "Podaj ilosc liczb: ";
	cin >> size;
	vector<int> real_numbers = get_numbers(size);
	print_numbers(real_numbers);
	sort_numbers(real_numbers);
	return 0;	
}