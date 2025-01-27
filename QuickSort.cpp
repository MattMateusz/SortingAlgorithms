#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>


using namespace std;

int partition(vector<int>& numbers, int low, int high) {
    int pivot = numbers[high];
    int i = low - 1; //indeks z mniejszym elementem
    for(int j = low; j <= high - 1; j++) {
        if(numbers[j] < pivot) {
            i++;
            swap(numbers[i], numbers[j]);
        }
    }
    swap(numbers[i+1], numbers[high]);
    return i + 1;
}

void quick_sort(vector<int>& numbers, int low, int high) {
    if(low < high) {
        int pivot = 0;
        quick_sort(numbers, low, pivot - 1);
        quick_sort(numbers, pivot + 1, high);
    }
}

int get_random_number() {
	return 1+(rand() % 50) + 1+(rand() % 50);
}

vector<int> get_numbers(int size) {
	vector<int> numbers;
	
	for(int i=0;i<size;i++) {
		numbers.push_back(get_random_number());	
	}
	return numbers;		
}

int main() {
    //robie konflikt hehehe
    vector<int> numbers = get_numbers(12);
    quick_sort(numbers, 0, numbers.size() - 1);
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers.at(i) << endl;
    }
return 0;
}