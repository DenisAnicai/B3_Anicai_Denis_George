#include "Sort.h"

//RANDOM constructor
Sort::Sort(int number_of_elements, int min, int max)
{
	srand(time(NULL));
	int value;

	for (int i = 1; i <= number_of_elements; i++)
	{
		value = (rand() % (max - min) + min);
		add_node(value);
	}

	end_list();
}

//INITIALIZATION LIST constructor
Sort::Sort(std::initializer_list<int> l)
{
	for (int i : l) {

		add_node(i);
	}
	

	end_list();
}

//ARRAY constructor
Sort::Sort(int array[], int number_of_elements)
{
	for (int i = 0; i < number_of_elements; i++)
		add_node(array[i]);

	end_list();
}

//INFINITE LIST constructor
Sort::Sort(int n, ...)
{
	va_list list;
	va_start(list, n);
	for (int i = 1; i <= n; i++)
	{
		int value = va_arg(list, int);
		add_node(value);
	}
	va_end(list);

	end_list();
}

//CHAR constructor
Sort::Sort(char word[256])
{
	stringstream s(word);
	while (s.good())
	{
		string substr;
		getline(s, substr, ',');
		add_node(stoi(substr));
	}

	end_list();

}

//INSERT SORT

void Sort::InsertSort(bool ascendent)
{
	int p;
	//stabilim daca se ordoneaza crescator sau descrescator
	if (ascendent == false)
		p = -1;
	else
		p = 1;

	Node* nextNode = head->next;
	while (nextNode != NULL)
	{
		int sec_data = nextNode->data;
		int found = 0;
		Node* currentNode = head;
		while (currentNode != nextNode)
		{
			if (currentNode->data * p > nextNode->data * p && found == 0)
			{
				sec_data = currentNode->data;
				currentNode->data = nextNode->data;
				found = 1;
				currentNode = currentNode->next;
			}
			else
			{
				if (found == 1)
				{
					int temp = sec_data;
					sec_data = currentNode->data;
					currentNode->data = temp;
				}
				currentNode = currentNode->next;
			}
		}
		currentNode->data = sec_data;
		nextNode = nextNode->next;
	}
}

//QUICK SORT
void Sort::QuickSort(bool ascendent)
{
	int p;
	if (ascendent)
		p = 1;
	else
		p = -1;

	head = quickSortRecur(head, get_tail(head), p);
	return;
}

//BUBBLE SORT
void Sort::BubbleSort(bool ascendent)
{
	int i = 1, p;
	Node* currentNode, * nextNode;

	//stabilim daca se ordoneaza crescator sau descrescator
	if (ascendent == false)
		p = -1;
	else
		p = 1;

	//se executa for pana cand toate nodurile sunt in ordine crescatoare
	for (int i = GetElementsCount() - 1; i >= 0; i--)
	{
		//vom lucra cu nodul curent si succesorul acestuia
		currentNode = head;
		nextNode = currentNode->next;

		//aducem cea mai mica valoare la inceput
		for (int j = 0; j <= i; j++)
		{
			if (GetElementFromIndex(j) * p > GetElementFromIndex(j + 1) * p)
				swap(currentNode->data, nextNode->data);
			currentNode = nextNode;
			nextNode = nextNode->next;
		}
	}
}

void Sort::Print()
{
	Node* p;
	p = head;
	while (p != nullptr)
	{
		cout << p->data << " ";
		p = p->next;
	}

}

int Sort::GetElementsCount()
{
	int count = 0;
	Node* p;
	p = head;
	while (p->next != nullptr)
	{
		count++;
		p = p->next;
	}
	return count;
}

int Sort::GetElementFromIndex(int index)
{
	int count = 0;
	Node* p;
	p = head;
	while (p->next != nullptr && count != index)
	{
		count++;
		p = p->next;
	}
	return p->data;
}