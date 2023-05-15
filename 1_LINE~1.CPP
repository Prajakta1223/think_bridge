#include <iostream.h>
#include<conio.h>
class linear_Search
{
private:
    int array[20];
    int size;

public:
    void readArray()
    {
         cout << "\nHow many elements do you want in the list: ";
         cin >> size;

        cout << "Enter elements of the list: ";
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
    }

    void linearSearch(int value)
     {
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (array[i] == value)
            {
		cout << "Element found at index " << i <<endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
       {
	    cout << "Element is not found" << endl;
        }
    }
};

void main()
 {
    int value;
    clrscr();
    linear_Search lsearch; //object creation
    lsearch.readArray();

    cout << "\nEnter the element to search: ";
    cin >> value;
    lsearch.linearSearch(value); //function call
    getch();
}
