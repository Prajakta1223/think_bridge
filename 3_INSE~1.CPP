#include <iostream.h>
#include<conio.h>;
class InsertionSort
{
 public:
    void sort(int arr[], int n)
    {
	for (int i = 1; i < n; i++)
	{
	    int key = arr[i];
	    int j = i - 1;
	    while (j >= 0 && arr[j] > key)
	    {
		arr[j + 1] = arr[j];
		j--;
	    }
	    arr[j + 1] = key;
	}
    }
};

int main()
{
    int n;
    clrscr();
    cout << "\nHow many elements do you want in the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    InsertionSort ins_sort;  //Object Created of class
    ins_sort.sort(arr, n);   //Function call

    cout << "\nSorted array: ";
    for (i= 0; i < n; i++)
    {
	cout << arr[i] << " ";
    }

    cout << endl;
    getch();
}
