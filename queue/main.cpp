#include "List.h"
#include<iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	List queue;
	short answer;
	while (true) {
		cout << "\n\t...:::������� ����:::...\n";
		cout << "\t1 | ���������� � �������\n\t2 | ��������\n\t3 | ����� �������\n\t4 | �����";
		cout << "\n\n�������� �����:\n";
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
			cout << "�������� ����!\n";
		}
	}
}