﻿#include <iostream>
using namespace std;

//void drawLine(char symbol, int length, bool vertical) {
//    for (int i = 0; i < length; i++) {
//        cout << symbol;
//        if (vertical) cout << endl;
//    }
//    if (!vertical) cout << endl;
//}
//
//int main() {
//    char symbol;
//    int length, lineType;
//
//    cout << "Введіть символ: ";
//    cin >> symbol;
//    cout << "Введіть довжину лінії: ";
//    cin >> length;
//    cout << "Оберіть тип лінії (1 - горизонтальна, 2 - вертикальна): ";
//    cin >> lineType;
//
//    drawLine(symbol, length, lineType == 2);
//
//    return 0;
//}





#include <cstdlib>
#include <ctime>
//using namespace std;
//
//int rollDice() {
//    return rand() % 6 + 1 + rand() % 6 + 1;
//}
//
//int main() {
//    srand(time(0));
//    int userScore = 0, compScore = 0;
//
//    for (int i = 0; i < 3; i++) {
//        userScore += rollDice();
//        compScore += rollDice();
//    }
//
//    cout << "Ваші очки: " << userScore << endl;
//    cout << "Очки комп'ютера: " << compScore << endl;
//
//    if (userScore > compScore)
//        cout << "Ви перемогли!" << endl;
//    else if (userScore < compScore)
//        cout << "Комп'ютер переміг." << endl;
//    else
//        cout << "Нічия!" << endl;
//
//    return 0;
//}






//using namespace std;
//
//int main() {
//    const int SIZE = 10;
//    int arr[SIZE];
//
//    srand(time(0));
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = rand() % 100;
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    int min = arr[0], max = arr[0];
//    for (int i = 1; i < SIZE; i++) {
//        if (arr[i] < min) min = arr[i];
//        if (arr[i] > max) max = arr[i];
//    }
//
//    cout << "Мінімум: " << min << endl;
//    cout << "Максимум: " << max << endl;
//
//    return 0;
//}



//using namespace std;
//
//int main() {
//    double profit[12];
//    int start, end;
//
//    for (int i = 0; i < 12; i++) {
//        cout << "Прибуток за місяць " << i + 1 << ": ";
//        cin >> profit[i];
//    }
//
//    cout << "Введіть діапазон (наприклад, 3 і 6): ";
//    cin >> start >> end;
//
//    double maxProfit = profit[start - 1], minProfit = profit[start - 1];
//    for (int i = start; i <= end; i++) {
//        if (profit[i - 1] > maxProfit) maxProfit = profit[i - 1];
//        if (profit[i - 1] < minProfit) minProfit = profit[i - 1];
//    }
//
//    cout << "Максимальний прибуток: " << maxProfit << endl;
//    cout << "Мінімальний прибуток: " << minProfit << endl;
//
//    return 0;
//}











#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    double arr[N];

    for (int i = 0; i < N; i++) cin >> arr[i];

    double negativeSum = 0, productBetweenMinMax = 1, evenProduct = 1;
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) negativeSum += arr[i];
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
        if (i % 2 == 0) evenProduct *= arr[i];
    }

    if (minIndex > maxIndex) swap(minIndex, maxIndex);
    for (int i = minIndex + 1; i < maxIndex; i++) {
        productBetweenMinMax *= arr[i];
    }

    cout << "Сума від'ємних: " << negativeSum << endl;
    cout << "Добуток між min і max: " << productBetweenMinMax << endl;
    cout << "Добуток парних елементів: " << evenProduct << endl;

    return 0;
}