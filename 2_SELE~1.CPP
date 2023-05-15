//Program for the Selection Sort
#include <iostream.h>
#include<conio.h>
class SelectionSort
{
  public:
    void sort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
             int temp = arr[i];
             arr[i] = arr[minIndex];
             arr[minIndex] = temp;
        }
    }
};

void main() 
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

    SelectionSort ss;
    ss.sort(arr, n);

    cout << "\nSorted array: ";
    for (i= 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    getch();
}
