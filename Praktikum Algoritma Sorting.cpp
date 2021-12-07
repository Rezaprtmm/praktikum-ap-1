#include <iostream>
#include<iomanip>
using namespace std;
void header() {
	cout << "Program Array Sorting\n";
	cout << "\tBy Tama\n";
	cout << "----------------------------" << endl;
}
void heapify(int angka[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && angka[l] > angka[largest])
		largest = l;

	if (r < n && angka[r] > angka[largest])
		largest = r;

	if (largest != i) {
		swap(angka[i], angka[largest]);

		heapify(angka, n, largest);
	}
}

void heapSort(int angka[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(angka, n, i);

	for (int i = n - 1; i >= 0; i--) {
		swap(angka[0], angka[i]);

		heapify(angka, i, 0);
	}
}

void sortHeap(int angka[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << angka[i] << " ";
	cout << "\n";
}
int partition(int angka[], int low, int high)
{
	int pivot = angka[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (angka[j] < pivot)
		{
			i++;
			swap(angka[i], angka[j]);
		}
	}
	swap(angka[i + 1], angka[high]);
	return (i + 1);
}


void quickSort(int angka[], int low, int high)
{
	if (low < high)
	{

		int pi = partition(angka, low, high);

		quickSort(angka, low, pi - 1);
		quickSort(angka, pi + 1, high);
	}
}

void printArray(int angka[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << angka[i] << " ";
	cout << endl;
}

void swapping(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void display(int* angka, int n) {
	for (int i = 0; i < n; i++)
		cout << angka[i] << " ";
	cout << endl;
}
void merge(int* angka, int l, int m, int r) {
	int i, j, k, nl, nr;
	nl = m - l + 1; nr = r - m;
	int larr[nl], rarr[nr];
	for (i = 0; i < nl; i++)
		larr[i] = angka[l + i];
	for (j = 0; j < nr; j++)
		rarr[j] = angka[m + 1 + j];
	i = 0; j = 0; k = l;
	while (i < nl && j < nr) {
		if (larr[i] <= rarr[j]) {
			angka[k] = larr[i];
			i++;
		}
		else {
			angka[k] = rarr[j];
			j++;
		}
		k++;
	}
	while (i < nl) {
		angka[k] = larr[i];
		i++; k++;
	}
	while (j < nr) {
		angka[k] = rarr[j];
		j++; k++;
	}
}
void mergeSort(int* angka, int l, int r) {
	int m;
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(angka, l, m);
		mergeSort(angka, m + 1, r);
		merge(angka, l, m, r);
	}
}
int main() {
	int angka[] = {};
	int i, temp, j, n, min, k, l;
	int n1, n2, m, L, R, num;
	char pilih, ulang;

	do {
		header();
		cout << "Menu Sorting\n";
		cout << "1. Isi Array\n";
		cout << "2. Insertion Sort\n";
		cout << "3. Maximum Sort\n";
		cout << "4. Buble Sort\n";
		cout << "5. Minimum Sort\n";
		cout << "6. Merge Sort\n";
		cout << "7. Quick Sort\n";
		cout << "8. Heap Sort\n";
		cout << "9. Keluar\n";
		cout << "Pilih Menu : "; cin >> pilih;

		switch (pilih) {

		case '1':
			cout << "Masukan Indeks Yang di Inginkan : ";
			cin >> n;
			for (i = 0; i < n; i++) {
				cout << "Masukan Indeks Ke " << i + 1 << ": ";
				cin >> angka[i];
			}
			break;
		case '2':
			for (i = 1; i < n; i++)
			{
				temp = angka[i];
				j = i - 1;
				while (j >= 0 && angka[j] > temp)
				{
					angka[j + 1] = angka[j];
					j--;
				}
				angka[j + 1] = temp;
			}
			for (int i = 0; i < n; i++)
			{
				cout << angka[i] << " ";
			}
			break;
		case '3':
			for (i = n; i >= 0; --i)
			{
				int max = 0;
				for (j = 0; j <= i; ++j) {
					if (angka[i] > angka[max])
					{
						max = j;
					}
				}
				temp = angka[i];
				angka[i] = angka[max];
				angka[max] = temp;
			}
			for (int i = 0; i < n; i++)
			{
				cout << angka[i] << " ";
			}
			break;
		case '4':
			for (i = 0; i < n - 1; i++)
			{
				for (j = 0; j < n + 1; j++)
				{
					if (angka[j] > angka[j + 1])
					{
						temp = angka[j + 1];
						angka[j + 1] = angka[j];
						angka[j] = temp;
					}
				}
			}
			for (int i = 0; i < n; i++)
			{
				cout << angka[i] << " ";
			}
			break;
		case '5':
			cout << "Array Sebelum Sorting : ";
			for (int i = 0; i < n; i++)
				cout << angka[i] << " ";
			cout << endl;
			for (i = 0; i <= n - 2; i++)
			{
				min = i;
				for (j = i + 1; j < n; j++)
				{
					if (angka[j] < angka[min])
					{
						min = j;
					}
				}
				temp = angka[i];
				angka[i] = angka[min];
				angka[min] = temp;
				cout << endl;

				for (k = 0; k < n; k++)
					cout << setw(3) << angka[k];
			}
			cout << "\nArray Sesudah Sorting : ";
			for (i = 0; i < n; i++) {
				cout << setw(3) << angka[i];
			}
			cout << endl;
			break;
		case '6':
			cout << "\nArray Sebelum Sorting : ";
			display(angka, n);
			mergeSort(angka, 0, n - 1);     //(n-1) for last index
			cout << "\nArray Sesudah Sorting : ";
			display(angka, n);
			break;
		case '7':
			quickSort(angka, 0, n - 1);
			cout << "\nHasil Sorting: \n";
			printArray(angka, n);
			break;
		case '8':
			heapSort(angka, n);

			cout << "Hasil Sorting \n";
			sortHeap(angka, n);
			break;
		case '9':
			return 0;
			break;

		default:
			cout << "Pilihan Tidak Ada Dalam Sistem\n";
		}
		cout << "Kembali Ke Menu Utama? [y/n] : ";
		cin >> ulang;
	} while (ulang == 'y' || ulang == 'Y');
}