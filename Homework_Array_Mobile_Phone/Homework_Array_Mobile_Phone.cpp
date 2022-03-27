#include <conio.h>
#include <iostream>
using namespace std;

//создадим пузырьковую функцию для массива

template <class T> void bubbleSort(T arr[], long size) {
    long i, j;
    T x;
    for (i = 0; i < size; i++) {
        for (j = size - 1; j > i; j--) {
            if (arr[j - 1] > arr[j]) {
                x = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = x;
            }
        }
    }
}
int main()
{
    /*
    Написать программу «справочник». Создать два одномерных
     массива. Один массив хранит номера мобильных телефонов,
     второй — домашние телефонные номера.
     Реализовать меню для пользователя:
     ■ Отсортировать по номерам мобильных
     ■ Отсортировать по домашним номерам телефонов;
     ■ Вывести пользовательский данные;
     ■ Выход.
    */
    setlocale(LC_ALL, "Rus");
    long long mobile[ ] = { 79063453456,79075673456,79026547832,79053458790 };//мобильные номера
    int size = 4;
    int size1 = 4;
    long domestic[] = { 456789,640123,345678,345678 };//Домашние номера


    // цикл для мобильных номеров
    for (int i = 0; i < size; i++) {
        //Выведем массив мобильных номеров
        cout << " Мобильный номер [ " << i << " ] " << mobile[i] << endl;
    }
    cout << endl;

    // цикл для домашних номеро
    for (int j = 0; j < size1; j++) {
        //Выведем массив мобильных номеров
        cout << " Домашний номер  [ " << j << " ] " << domestic[j] << endl;
    }
    //сортируем по возрастанию мобильных номеров

    cout << endl;
    cout << " Сортировка мобильных номеров по возрастанию \n";
    cout << endl;

    //Вызовем нашу функцию для мобильных номеров
    bubbleSort(mobile,4);
    for (int i = 0; i < 4; i++) {
        cout << " Мобильный номер " << mobile[i] << endl;
    }
    //сортируем по возрастанию домашних номеров

    cout << endl;
    cout << " Сортировка домашних номеров по возрастанию \n";
    cout << endl;

    //Вызовем нашу функцию для домашних номеров
    bubbleSort(domestic, 4);
    for (int i = 0; i < 4; i++) {
        cout << " Домашние номера номер " << domestic[i] << endl;
    }
    cout << endl;
    cout << " Выберете одного из четырех пользователей \n";
    cout << " 1 - Иван \n";
    cout << " 2 - Виктор\n";
    cout << " 3 - Андрей\n";
    cout << " 4 - Света\n";

    int piople ;//Переменная которую будет вводить
    bool var = true;// управляющая переменная цикла do while 
    do {
        cin >> piople;
        switch (piople)
        {
        case 1:
            cout << " Иван\n " << mobile[0]<< " Мобильный \n" << " " << domestic[0] << " Домашний \n" << endl;
            break;
        case 2:
            cout << " Виктор\n " << mobile[1] << " Мобильный \n" << " " << domestic[1] << " Домашний \n" << endl;
            break;

        case 3:
            cout << " Андрей\n " << mobile[3] << " Мобильный \n" << " " << domestic[3] << " Домашний \n" << endl;
            break;

        case 4:
            cout << " Света\n " << mobile[4] << " Мобильный \n" << " " << domestic[4] << " Домашний \n" << endl;
            break;

        default:
            cout << "Выберете число от 1 до 4 ";
            break;

        }
        if (piople >= 1 && piople <= 4)
            var = false;
    } while (var);
    cout << "Выход";
    return 0;
   
}