#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int numN = 15000;
    const int arrN = numN * 2;

    srand(time(NULL));
    int num[numN] = { 0 },temp, x, index;
    bool arr[arrN] = { 0 };
    // 產生不重複亂數
    for (int i = 0; i < numN; i++)
    {
        x = rand() % arrN + 1;
        while (arr[x - 1])
            x = rand() % arrN + 1;
        num[i] = x;
        arr[x - 1] = true;
    }
    cout << "排序前: ";
    for (int i = 0; i < numN; i++)
        cout << num[i] << ' ';
    cout <<"\n\n\n\n";
    // 插入排序
    float start = clock();
    for (int i = 0; i < numN; i++)
    {
        index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (num[index] < num[j])
            {
                temp = num[index];
                num[index] = num[j];
                num[j] = temp;
                index = j;
            }
        }
    }
    float end = clock();
    cout << "排序後: ";
    for (int i = 0; i < numN; i++)
    cout << num[i] << ' ';
    cout << endl << "插入排序共花費" << (end - start) / 1000.000 << "秒\n";
    system("pause");
}