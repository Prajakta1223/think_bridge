#include<iostream.h>
#include<conio.h>;
class BinarySearch
{
 public:
    void Binary_search(int arr[], int size, int num)
    {
        int first = 0;
        int last = size - 1;
        int middle = (first + last) / 2;
        
        while (first <= last)
        {
            if (arr[middle] < num)
                first = middle + 1;
            else if (arr[middle] == num)
            {
                cout << "\nThe number " << num << " found at Position " << middle + 1;
                return;
            }
            else
                last = middle - 1;
            
            middle = (first + last) / 2;
        }
        
        cout << "\nThe number " << num << " is not found in the given Array";
    }
};

int main()
{
    int size, num;
    clrscr();
    cout << "\nEnter the size of the array: ";
    cin >> size;
    
    int arr[100];
    cout << "Enter " << size << " Elements (in ascending order): ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    cout << "Enter Element to be Searched: ";
    cin >> num;
    
    BinarySearch bs;
    bs.Binary_search(arr, size, num);
    
    getch();
}
