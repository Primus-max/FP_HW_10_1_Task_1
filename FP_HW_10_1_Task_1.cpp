// Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу:
// пользователь вводит число(например, 3) первый элемент
// массива принимает значение этого числа, последующий элемент массива принимает значение этого числа
// умноженного на 2 (т.е. 6 для нашего примера), третий
// элемент массива предыдущий элемент умноженный на
// 2 (т.е. 6 * 2 = 12 для нашего примера).Созданный массив
// вывести на экран


#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int sizeArray = 10;
    int userInput = 0;
    int TwoArray[sizeArray][sizeArray];


    for (int x = 0; x < sizeArray; x++)
    {
        cout << "Введите значение (всего 10 значений): ";
        cin >> userInput;

        TwoArray[x][0] = userInput;

        for (int y = 1; y < sizeArray; y++)
        {
            TwoArray[x][y] = TwoArray[x][y - 1] * 2;
        }
    }
  
    for (int x = 0; x < sizeArray; x++)
    {
        for (int y = 0; y < sizeArray; y++)
        {
            cout << TwoArray[x][y] << "\t";
        }
       cout << std::endl;
    }


}

