// prakt2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void task1();
void task2();
void task3();
void task4();


int main()
{
    setlocale(LC_ALL, "rus");
    int task;
    std::cout << "Введите номер задания (1-4): ";
    std::cin >> task;
    if (task == 1)
        task1();
    else if (task == 2)
        task2();
    else if (task == 3)
        task3();
    else if (task == 4)
        task4();
    else
        std::cout << "Такого задания нет ";
    
}
void task1()
{
    const int size = 6;
    int numbers[size] = { 4,0,6,-3,3,12 };
    
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 3 == 0)
            sum += numbers[i];
    }
    std::cout << "Сумма элементов массива, кратных 3: " << sum;
}

void task2()
{
    const int size1 = 3;
    const int size2 = 4;
    int sum = 0;
    int numbers[size1][size2] = {
        { 4,0,6,-3 },
        { 3, 7,2,1 },
        { 12, -3, 8,20,}
    };
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (numbers[i][j] % 4 == 0)
            sum += numbers[i][j];
        }
        std::cout << "Сумма элементов " << i+1 << " подмассива, кратных 4: " << sum << "\n";
        sum = 0;
    }
}
struct Triangle
{
    double side1;
    double side2;
    double side3;
};
void task3()
{
    Triangle triangle;
    std::cout << "Введите первую сторону: ";
    std::cin >> triangle.side1;
    std::cout << "Введите вторую сторону: ";
    std::cin >> triangle.side2;
    std::cout << "Введите третью сторону: ";
    std::cin >> triangle.side3;
    double s1 = triangle.side1;
    double s2 = triangle.side2;
    double s3 = triangle.side3;
    if (s1 <= 0 || s2 <= 0 || s3 <= 0)
        std::cout << "Введено некорректное значение";
    else
    {
        if (s1 * s1 == s2 * s2 + s3 * s3 || s2 * s2 == s1 * s1 + s3 * s3 || s3 * s3 == s1 * s1 + s2 * s2)
        {
            std::cout << "Данный треугольник прямоугольный ";
        }
        else
        {
            std::cout << "Этот треугольник не прямоугольный ";
        }
    }
    
}
class BinarySearch
{
private:
    int data[10] = { 2,6,7,8,11,12,14,17,18,21 };
public:
    void binarySearchNumber(int number)
    {
        bool check = false;
        int left = 0;
        int right = 9;
        int mid;
        while (left <= right && check != true)
        {
            mid = (left + right) / 2;
            if (data[mid] == number)
                check = true;
            if (data[mid] > number)
                right = mid - 1;
            else left = mid + 1;
        }
        if (check)
            std::cout << "Данный элемент есть в массиве";
        else
            std::cout << "Этого элемента нет в массиве";
    }
};
void task4()
{
    BinarySearch search;
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    search.binarySearchNumber(num);
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
