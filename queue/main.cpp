#include "List.h"
#include<iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	List queue;
	short answer;
	while (true) {
		cout << "\n\t...:::ГЛАВНОЕ МЕНЮ:::...\n";
		cout << "\t1 | Добавление в очередь\n\t2 | Удаление\n\t3 | Вывод очереди\n\t4 | Выход";
		cout << "\n\nВыберите число:\n";
		cin >> answer;
		cout << "\n";

		switch (answer) {
		case 1: 
			queue.InsertElem();
			break;
		case 2: 
			queue.DeleteElem();
			break;
		case 3: 
			queue.PrintList();
			break;
		case 4: 
			exit(0);
			break;
		default: 
			cout << "Неверный ввод!\n";
		}
	}
}