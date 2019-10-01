#include<iostream>
#include<algorithm>
#include<vector>
#include"Algorithme_de_tri.h"

/*EXERCICE 6.3
En reprenant les 3 premiers exercices.
Il faut créer un programme qui demande à l’utilisateur de choisir le type de sort qu’il veut et le nombre d’éléments qu’il veut trier.
Il faut ensuite remplir un tableau avec n nombre de caractère aléatoire
*/

int main() {

	int choice;
	bool quit = false;
	
	std::vector<int> arr{};

	int low = 0;
	int high = arr.size() - 1;
	int n;



	while (!quit) {

		std::cout << "Entrez le nombre d'éléments \n";
		std::cin >> n;

		arr.resize(n);

		for (int i = 0; i < n; i++) {

			arr[i] = rand();

		}

		for (int i = 0; i < n; i++) {

			std::cout << "array [" << i << "] = " << arr[i] << "\n";

		}

		std::cout << "Choisir un algorithme de tri \n";

		std::cout << "BubbleSort: 1 \n";
		std::cout << "InsertionSort: 2 \n";
		std::cout << "QuickSort: 3 \n";
		std::cout << "Quitter: 4 \n";
		std::cin >> choice;

		switch (choice) {

			case 1: {


				bubbleSort(arr);
				for (int i = 0; i < n; i++) {

					std::cout << "array [" << i << "] = " << arr[i] << "\n";

				}

				break;
			}

			case 2: {

				insertionSort(arr);
				for (int i = 0; i < n; i++) {

					std::cout << "array [" << i << "] = " << arr[i] << "\n";

				}

				break;

			}

			case 3: {

				quickSort(arr, low, high);

				for (int i = 0; i < n; i++) {

					std::cout << "array [" << i << "] = " << arr[i] << "\n";

				}

				break;

			}

			case 4: {

				quit = true;

			}

		}

	}

	system("pause");
	return EXIT_SUCCESS;
}