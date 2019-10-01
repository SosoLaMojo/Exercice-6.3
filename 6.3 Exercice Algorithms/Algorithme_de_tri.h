#pragma once
#include<iostream>
#include<vector>

void bubbleSort(std::vector<int>& arr) {

	for (int step = 0; step < arr.size() - 1; ++step) {

		for (int i = 0; i < arr.size() - step - 1; ++i) {

			if (arr[i] > arr[i + 1]) {

				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;

			}
		}
	}
}

void insertionSort(std::vector<int>& arr) {

	int key = 0;

	for (int step = 1; step < arr.size(); step++) {

		key = arr[step];
		int j = step - 1;

		while (j >= 0 && key < arr[j]) {

			std::swap(arr[j + 1], arr[j]);
			--j;
		}

	}
}


int step(std::vector<int> &arr, int low, int high) {

	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {

		if (arr[j] < pivot) {

			i++;
			std::swap(arr[i], arr[j]);

		}

	}
	std::swap(arr[i + 1], arr[high]);
	return (i + 1);

}

void quickSort(std::vector<int>& arr, int low, int high) {

	if (low < high) {

		int pi = step(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);

	}

}

void printArray(std::vector<int>& arr) {

	for (int i = 0; i < arr.size(); ++i) {

		std::cout << arr[i] << "\n";

	}
}