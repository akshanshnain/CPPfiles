#include <iostream>
using namespace std;

void SelectionSort(int input[], int n)
{
    for(int i = 0; i< n-1; i++)
    {
        //Find min element in the array
        int min = input[i], minIndex = i;
        for(int j = i+1; j < n; j++)
        {
            if(input[j]< min)
            {
                min=input[j];
                minIndex = j;
            }
        }
        //swap
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex] = temp;
    }
}
int main()
{
    int input[] = {7,3,5,6,9,8};
    SelectionSort(input,6);

    for(int i = 0; i<6; i++)
    {

        cout << input[i] << " ";

    }
    cout << endl;
}
