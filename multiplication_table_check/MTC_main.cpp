#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int choise, ans;
	int grade = 0;
	int x, y;
	int maxnum = 0;
	int minnum = 0;
	int count_ans = 0;
	int questCount = 0;
	cout << "\t\t...::: Проверка на знание таблицы умножения :::..." << endl << endl;
	cout << "Уровни сложности:\n \n[  1 - Легкий   ]\n[  2 - Нормально ]\n[  3 - Сложный   ]" << endl << endl;
	cout << "Выберите уровень сложности: ";
	cin >> choise;

	switch (choise) {
	case 1: {
		cout << "Уровень сложности: Легкий." << endl << endl;
		questCount = 4;
		minnum = 0;
		maxnum = 4;
		break;
	}
	case 2: {
		cout << "Уровень сложности: Нормально." << endl << endl;
		questCount = 6;
		minnum = 3;
		maxnum = 6;
		break;
	}
	case 3: {
		cout << "Уровень сложности: Сложный." << endl << endl;
		questCount = 8;
		minnum = 3;
		maxnum = 9;
		break;
	}
	default:
		cout << "Ошибка!" << endl;
		break;
	}
	for (int i = 0; i < questCount; i++) {
		x = rand() % maxnum + minnum;
		y = rand() % maxnum + minnum;
		cout << "\t" << x << " * " << y << " = ";
		cin >> ans;
		if (x * y == ans) {
			count_ans++;
		}
	}
	if (choise == 1) {
		if (count_ans == 4) {
			grade = 5;
		}
		if (count_ans == 3) {
			grade = 3;
		}
		if (count_ans == 2) {
			grade = 2;
		}
		if (count_ans < 2) {
			grade = 0;
		}
	}
	if (choise == 2) {
		if (count_ans == 8) {
			grade = 5;
		}
		if (count_ans == 7) {
			grade = 4;
		}
		if (count_ans == 6) {
			grade = 4;
		}
		if (count_ans == 5) {
			grade = 4;
		}
		if (count_ans == 4) {
			grade = 3;
		}
		if (count_ans == 3) {
			grade = 3;
		}
		if (count_ans == 2) {
			grade = 2;
		}
		if (count_ans < 2) {
			grade = 0;
		}
	}
	if (choise == 3) {
		if (count_ans == 8) {
			grade = 5;
		}
		if (count_ans == 7) {
			grade = 4;
		}
		if (count_ans == 6) {
			grade = 4;
		}
		if (count_ans == 5) {
			grade = 4;
		}
		if (count_ans == 4) {
			grade = 3;
		}
		if (count_ans == 3) {
			grade = 3;
		}
		if (count_ans == 2) {
			grade = 2;
		}
		if (count_ans < 2) {
			grade = 0;
		}
	}
	cout << "\nПроверка завершена!" << endl << endl;
	cout << "*** Ваш результат ***" << endl;
	cout << "    Оценка: " << grade << endl << endl;
	return 0;
}