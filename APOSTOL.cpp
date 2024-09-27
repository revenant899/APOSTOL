//#include <iostream>
//using namespace std;
//int main() {
//    int rows, cols, num;
//
//    cout << "Введіть кількість рядків: ";
//    cin >> rows;
//    cout << "Введіть кількість стовпців: ";
//    cin >> cols;
//    cout << "Введіть початкове число: ";
//    cin >> num;
//
//    int arr[rows][cols];
//
//    arr[0][0] = num;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            if (i == 0 && j == 0) continue;
//            if (j == 0) {
//                arr[i][j] = arr[i - 1][cols - 1] * 2;
//            }
//            else {
//                arr[i][j] = arr[i][j - 1] * 2;
//            }
//        }
//    }
//
//    cout << "Створений масив:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main() {
//    int rows, cols, num;
//
//    cout << "Введіть кількість рядків: ";
//    cin >> rows;
//    cout << "Введіть кількість стовпців: ";
//    cin >> cols;
//    cout << "Введіть початкове число: ";
//    cin >> num;
//
//    int arr[rows][cols];
//
//    arr[0][0] = num;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            if (i == 0 && j == 0) continue;
//            if (j == 0) {
//                arr[i][j] = arr[i - 1][cols - 1] + 1;
//            }
//            else {
//                arr[i][j] = arr[i][j - 1] + 1;
//            }
//        }
//    }
//
//    cout << "Створений масив:" << endl;
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//void printArray(int arr[][100], int rows, int cols) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}
//
//void shiftRight(int arr[][100], int rows, int cols, int shifts) {
//    for (int i = 0; i < rows; i++) {
//        for (int s = 0; s < shifts; s++) {
//            int last = arr[i][cols - 1];
//            for (int j = cols - 1; j > 0; j--) {
//                arr[i][j] = arr[i][j - 1];
//            }
//            arr[i][0] = last;
//        }
//    }
//}
//
//void shiftLeft(int arr[][100], int rows, int cols, int shifts) {
//    for (int i = 0; i < rows; i++) {
//        for (int s = 0; s < shifts; s++) {
//            int first = arr[i][0];
//            for (int j = 0; j < cols - 1; j++) {
//                arr[i][j] = arr[i][j + 1];
//            }
//            arr[i][cols - 1] = first;
//        }
//    }
//}
//
//void shiftDown(int arr[][100], int rows, int cols, int shifts) {
//    for (int s = 0; s < shifts; s++) {
//        for (int j = 0; j < cols; j++) {
//            int last = arr[rows - 1][j];
//            for (int i = rows - 1; i > 0; i--) {
//                arr[i][j] = arr[i - 1][j];
//            }
//            arr[0][j] = last;
//        }
//    }
//}
//
//void shiftUp(int arr[][100], int rows, int cols, int shifts) {
//    for (int s = 0; s < shifts; s++) {
//        for (int j = 0; j < cols; j++) {
//            int first = arr[0][j];
//            for (int i = 0; i < rows - 1; i++) {
//                arr[i][j] = arr[i + 1][j];
//            }
//            arr[rows - 1][j] = first;
//        }
//    }
//}
//
//int main() {
//    srand(time(0));
//
//    int rows, cols, shifts;
//    char direction;
//
//    cout << "Введіть кількість рядків: ";
//    cin >> rows;
//    cout << "Введіть кількість стовпців: ";
//    cin >> cols;
//
//    int arr[100][100];
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            arr[i][j] = rand() % 10;
//        }
//    }
//
//    cout << "Початковий масив:" << endl;
//    printArray(arr, rows, cols);
//
//    cout << "Введіть кількість зрушень: ";
//    cin >> shifts;
//    cout << "Введіть напрямок зсуву (L - вліво, R - вправо, U - вгору, D - вниз): ";
//    cin >> direction;
//
//    switch (direction) {
//    case 'R':
//    case 'r':
//        shiftRight(arr, rows, cols, shifts);
//        break;
//    case 'L':
//    case 'l':
//        shiftLeft(arr, rows, cols, shifts);
//        break;
//    case 'D':
//    case 'd':
//        shiftDown(arr, rows, cols, shifts);
//        break;
//    case 'U':
//    case 'u':
//        shiftUp(arr, rows, cols, shifts);
//        break;
//    default:
//        cout << "Неправильний напрямок!" << endl;
//        return 1;
//    }
//
//    cout << "Масив після зсуву:" << endl;
//    printArray(arr, rows, cols);
//
//    return 0;
//}
