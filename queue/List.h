#include<iostream>

using namespace std;

typedef struct Node {
	int value;
	struct Node* next;
}node;

class List {
	Node* head, * tail, *temp;

public:
	List() :head(NULL), tail(NULL), temp(NULL) {}; 

	~List();
	void InsertElem();
	void DeleteElem();
	void PrintList();
};

List::~List() {
	tail = head->next;
	delete head;
	head = tail;
}

void List::InsertElem()
{
	temp = new Node;
	cout << "Введите число:\n";
	cin >> temp->value;
	temp->next = NULL;

	if (head == NULL) {
		head = tail = temp;
	}
	else {
		tail->next = temp;
		tail = temp;
	}
}

void List::DeleteElem()
{
	if (head == NULL) {
		cout << "Очередь пуста!\n";
	}
	else {
		temp = head;
		head = head->next;
		cout << "Удален обьект " << temp->value << "\n";
		delete(temp);
	}
}

void List::PrintList()
{
	if (head == NULL) {
		cout << "Очередь пуста!\n";
	}
	else
	{
		temp = head;
		for(int i = 1; temp != NULL; i++) {
			cout << i << ") " << temp->value << endl;
			temp = temp->next;
		}
		cout << endl;
	}
}