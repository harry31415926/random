#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
int main()
{
    int arr[9] = { 0 }, x = 0;
    bool IsCout = false;
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //cout<<rand()%10<<' ';
            while (IsCout == false)
            {
                x = rand() % 10;
                if (arr[x] == 0)
                {
                    cout << x << ' ';
                    arr[x] = 1;
                    IsCout = true;
                }
            }
            IsCout = false;
        }
        for (int i = 0; i < 9; i++)
            arr[i] = 0;

        cout << endl;
        Sleep(500);
    }
    system("pause");
    return 0;
}