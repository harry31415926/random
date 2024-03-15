#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int numbers[10] = { 0 }, temp, x;
    srand(time(NULL));
    bool arr[100] = { 0 };

    for (int i = 0; i < 10; i++)
    {
        x = rand() % 100;
        while (arr[x])
            x = rand() % 100;
        numbers[i] = x + 1;
        arr[x] = 1;
    }
    cout << "排序前: ";
    for (int i = 0; i < 10; i++)
        cout << numbers[i] << "  ";
    
    for (int i = 9; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    cout << "\n\n排序後: ";
    for (int i = 0; i < 10; i++)
        cout << numbers[i] << "  ";
    cout << endl << endl;
}