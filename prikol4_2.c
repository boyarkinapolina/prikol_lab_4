#include <math.h>
#include <stdio.h>
#include <string.h>


int perevod(char a[])    //вводим массив 
{
    int total = 0;
    char hexmaxi[16] = { '0', '1', '2','3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' }; //массив с 16тиричными элементами 
    char hexmini[16] = {'0', '1', '2','3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};  //для маленьких букв
    int i, j, degree = 0;
    for (i = strlen(a) - 1; i >= 0; i--) {  //цикл для прохода по массиву       
        for (j = 0; j < 16; j++) {      //перевод в 16тиричную сс
            if (a[i] == hexmaxi[j]) {     //сравнивает эл-ты в массивах 
                total += j * pow(16, degree);   //перевод
            }
            else if (a[i] == hexmini[j]) {     //сравнивает эл-ты в массивах 
                total += j * pow(16, degree);   //перевод
            }
        }
        degree++; //прибавляем к степени + 1
    }
    return total; //итоговое 10тичное число 
}


int perevodperevoda(int total) {
    int i = 0, k = 0;
    int dvoich[137] = {0};  //вводим массив и заполняем его ноликами 
    while (total != 0) {
        if (total % 2 == 0) {    //остаток от деления на 2, если 0 
            dvoich[i] = 0;      //на i место запишем нолик 
        }
        else {
            dvoich[i] = 1;    //если 1, запишем единичку 
        }
        total = total >> 1;      //побитовый сдвиг на 1 вправо 
        i++;   //двигаемся к след эл-ту массива 
    }
    i -= 1;
    for (int j = 0; j <= i; j= j + 2) {  //цикл, для суммы единичек на нечетных местах 
        if (dvoich[j] == 1) {
            k += 1; 
        }
    }
    return k;
}

