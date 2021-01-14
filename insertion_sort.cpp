//Implement insertion sort (The program should report number of comparisons).

#include<iostream>

using namespace std;

void insert_sort(int arr[], int s)
{
    int i, j, temp, count=0;
    for (i = 1; i < s; i++, count=0)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {

            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = temp;
        cout << "\nThe no. of comparisons for " << i << " iterations: " << count;
    }
}


int main()
{
    int a[20], i, n;
    cout << "Enter number of data elements: ";
    cin >> n;
    cout << "Enter data elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    insert_sort(a, n);
    cout << "\n\nSorted Data Elements:-\n";
    cout << "--------------------------\n";
    for (i = 0; i < n; i++)
        cout << a[i] << endl;

    return 0;
}

