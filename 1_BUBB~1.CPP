//Program for the bubble sort
#include <iostream.h>
#include<conio.h>;
class BubbleSort
{
public:
    void sort(int arr[], int n)
    {
	for (int i = 0; i < n - 1; i++)
	{
	    for (int j = 0; j < n - i - 1; j++)
	     {
		if (arr[j] > arr[j + 1])
		  {
		    int temp = arr[j];
		    arr[j] = arr[j + 1];
		    arr[j + 1] = temp;
		}
	    }
	}
    }
};
void main()
{
    clrscr();
    BubbleSort bs;
    int n;
    cout <<"\nHow many elements do you want in the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    bs.sort(arr, n); //function call

    cout << "\nSorted array: ";
    for (i = 0; i < n; i++)
    {
	cout << arr[i] << " ";
    }

    cout << endl;
    getch();
}
