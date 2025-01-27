#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "randnumb.h"

using namespace std;

int find_index_with_smalest_value(vector<int> numbers, int cheating_number, int& internal_loop_counter) {
	int x;
	int index;
	for(int i = cheating_number; i < numbers.size(); i++) {
		if(i == cheating_number) {
			x = numbers[i];
			index = i;
		}
		else if(numbers[i] < x) {
			x = numbers[i];
			index = i;
		} 
		internal_loop_counter++;
	}
return index;
}

vector<int> sort_vector(vector<int> drunk_numbers, int& external_loop_counter, int& internal_loop_counter) {
	for(int i=0;i<drunk_numbers.size()-1;i++) {
		int index = find_index_with_smalest_value(drunk_numbers, i, internal_loop_counter);
		swap(drunk_numbers[index], drunk_numbers[i]);
		external_loop_counter++;
	}
return drunk_numbers;
}


int main() {
	//teraz serio robimy konflikty
	int size;
	int internal_loop_counter = 0;
	int external_loop_counter = 0;
	cout << "Podaj ilosc liczb: ";
	cin >> size;
	vector<int> real_numbers = get_numbers(size);
	print_numbers(real_numbers);
	print_numbers(sort_vector(real_numbers, external_loop_counter, internal_loop_counter));
	cout << "Aby posortować cały vector, pętla zamieniała liczby " << external_loop_counter << " razy" << endl;
	cout << "Oraz porwnywała wartości " << internal_loop_counter << " razy" << endl;
	return 0;	
}

/*
Do zrobienia:
 - Optymalizacja programu, poza szukaniem najmniejszej wartoci to niech szuka te największej. (Double selection sort)
 - Oganij sobie abyśmy mogli poruwnywać sobie te algorytmy sortujące. (liczenie ilości przejść pętli)
 - Zachować zdrowie psychiczne
*/