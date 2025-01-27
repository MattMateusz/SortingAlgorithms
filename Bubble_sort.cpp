#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "randnumb.h"

using namespace std;

vector<int> sort_numbers(vector<int> numbers, int& ex_loop_counter, int& int_loop_counter, int *swap_counter) {
	for(int i=0;i<numbers.size();i++) {
		for(int k=0;k<numbers.size()-1 ;k++) {
			if(numbers[k] > numbers[k+1]) {	
			swap(numbers[k],numbers[k+1]);
			*swap_counter += 1;
			}
			int_loop_counter++;
	    }
		ex_loop_counter++;
	}
	print_numbers(numbers);
	return numbers;
}

int main() {
	int size;
	int swap_counter = 0;
	int ex_loop_counter = 0;
	int int_loop_counter = 0;
	cout << "Podaj ilosc liczb: ";
	cin >> size;
	vector<int> real_numbers = get_numbers(size);
	print_numbers(real_numbers);
	sort_numbers(real_numbers, ex_loop_counter, int_loop_counter, &swap_counter);
	cout << "Aby posortować cały vector, pętla zamieniała liczby " << swap_counter << " razy" << endl;
	cout << "Oraz porownywała wartości " << int_loop_counter << " razy" << endl;
	cout << "A zewnętrzna pętla wykonała się " << ex_loop_counter << " razy" << endl; 
	return 0;	
}