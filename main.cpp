#include <iostream>
#include <cstdlib>
#include <ctime>
#include<algorithm>


//int main() {

	/*int taskVarCount = 20;
	int studentCode = 83994;
	int taskNr = studentCode % taskVarCount;
	std::cout << "Task number is: " << taskNr << std::endl;*/
	//task 14

	void fillManuallyArray(double arr[], int n){
		std:: cout << "Enter " << n << " real numbers/decimals:\n";
		int i = 0;
		while (i < n) {
			std:: cin >> arr[i];
			++i;
		}
		arr[0] = 0.0;
		arr[n - 1] = 0.0;
	}
	void fillWithRandomArray(double arr[], int n, double min, double max) {
		srand(time(0));
		int i = 0;
		while (i < n){
			arr[i] = min + (rand() % (int)((max - min) * 1000)) / 1000.0;
			++i;
		}
		arr[0] = 0.0;
		arr[n - 1] = 0.0;
	}
	void transformArray(double arr[], int n) {
		int positiveIndex = 0;
		int i = 0;
		while(i < n) {
			if (arr[i] > 0){
				std:: swap(arr[i], arr[positiveIndex]);
				++positiveIndex;
			}
			++i;
		}
	}
	void displayArray(double arr[], int n) {
		std::cout << "Array: {" << std::endl;
		int i = 0;
		while (i < n){
			std::cout << arr[i];
			if (i < n - 1) {
				std::cout << ", ";
			}
			++i;
		}
		std::cout << "}\n";
	}

	int findAfterMinElement(double arr[], int n) {
		int minIndex = 0;
		int i = 1;
		while (i < n) {
			if (arr[i] < arr[minIndex]) {
				minIndex = i;
			}
			++i;
		}
		return minIndex;
	}

	bool sortByAbsoluteValue(double a, double b) {
		return std::abs(a) < std::abs(b);
	}

	int main() {
		int n;
		std::cout << "Enter size of array: " << std::endl;
		std::cin >> n;

		double* arr = new double[n];

		int choose;
		std::cout << "Select way how to fill array:\n";
		std::cout << "Manually: 1 \n";
		std::cout << "Automatically: 2 \n";
		std::cout << "Enter your choice 1 or 2?:\n";
		std::cin >> choose;

		switch (choose)
		{
		case 1: {
			fillManuallyArray(arr, n);
			break;
		}
		case 2: {
			double min, max;
			std::cout << "Enter range for MIN and MAX random values: " << std::endl;
			std::cin >> min >> max;
			fillWithRandomArray(arr, n, min, max);
			break;
		}
		default:
			std::cout << "Invalid choice!\n";
			return 1;
		}

			  std::cout << "Array before transformation: " << std::endl;
			  displayArray(arr, n);

			  int minIndex = findAfterMinElement(arr, n);

			  if (minIndex < n - 1) {
				  double sum = 0;
				  int i = minIndex + 1;
				  while (i < n) {
					  sum += arr[i];
					  ++i;
				  }
				  std::cout << "Sum of elements after the minimum element: " << sum << std::endl;
			  }
			  else {
				  std::cout << "There are no elements after the minimum element." << std::endl;
			  }

			  std::sort(arr, arr + n, sortByAbsoluteValue);

			  transformArray(arr, n);

			  std::cout << "Array after transformation: " << std::endl;

			  delete[] arr;

			  return 0;
	}
	


	//Define elements count with value 0.
	// 
	// 
	//Calculate sum of elements that are located after minimum element.
	// 
	// 
	//Arrange array elements by its absolute values in ascending order.



	//Create 3 separate independent algorithms that solve individual task by using arrays. 
	//create one(!) console program in C / C++ based on created algorithms by using dynamic one - dimensional array of real(!) numbers with size n(n is entered by user).
	// 
	//Implement two ways of array filling: manual(array elements are entered by user) and automatic(array elements are random numbers generated in user specified range).
	// 
	// User should be able to select a way of filling(for this create a menu for the user).
	// 
	// Note N1 : if it is said that array should be transformed(!) (and not arranged) 
	// then after relocation of elements to some other part of the array elements should be placed in the same order as it was previously in relation to each other.
	// For example, if array was{ -5.2,  3,  -1.5,  10,  2 } and it is said that array should be transformed so that all positive elements are located in the beginning of array 
	// and then all negative elements then it does not (!) mean that array should be arranged in descending order.
	// 
	// After transformation array should look like this : {3, 10, 2, -5.2, -1.5}. 
	// 
	// Note N2 : 
	// it is not allowed to use additional array in task N3.
	//All transformations should be done in the same array.



