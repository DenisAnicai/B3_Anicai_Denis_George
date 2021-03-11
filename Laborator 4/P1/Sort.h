#include <iostream>
#include <stdarg.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <initializer_list>
using namespace std;

class Sort

{

private:
    struct Node {
        int data;
        Node* prev;
        Node* next;

    };

    Node* head = nullptr, * tail = nullptr;

    void add_node(int value) {
        Node* n = new Node;
        n->data = value;

        if (head == nullptr)
        {
            head = n;
            tail = n;
            head->prev = nullptr;
            tail->next = nullptr;
        }
        else
        {
            tail->next = n;
            n->prev = tail;
            tail = n;
            tail->next = nullptr;

        }
    }

    void end_list()
    {
        tail->next = nullptr;
    }

    struct Node* partition(struct Node* head, struct Node* end,
        struct Node** newHead, struct Node** newEnd, int p)
    {
        struct Node* pivot = end;
        struct Node* prev = NULL, * curr = head, * tail = pivot;

        while (curr != pivot)
        {
            if (curr->data * p < pivot->data * p)
            {
                if ((*newHead) == NULL)
                    (*newHead) = curr;

                prev = curr;
                curr = curr->next;
            }
            else
            {
                if (prev)
                    prev->next = curr->next;
                struct Node* tmp = curr->next;
                curr->next = NULL;
                tail->next = curr;
                tail = curr;
                curr = tmp;
            }
        }

        if ((*newHead) == NULL)
            (*newHead) = pivot;

        (*newEnd) = tail;

        return pivot;
    }
    struct Node* quickSortRecur(struct Node* head, struct Node* end, int p)
    {
        if (!head || head == end)
            return head;

        Node* newHead = NULL, * newEnd = NULL;

        struct Node* pivot = partition(head, end, &newHead, &newEnd, p);

        if (newHead != pivot)
        {
            struct Node* tmp = newHead;
            while (tmp->next != pivot)
                tmp = tmp->next;
            tmp->next = NULL;

            newHead = quickSortRecur(newHead, tmp, p);

            tmp = get_tail(newHead);
            tmp->next = pivot;
        }

        pivot->next = quickSortRecur(pivot->next, newEnd, p);

        return newHead;
    }

    struct Node* get_tail(struct Node* x) {
        while (x != NULL && x->next != NULL)
            x = x->next;
        return x;

    }

public:

    //constructor 1
    Sort(int number_of_elements, int min, int max);

    //constructor 2
    Sort(std::initializer_list<int>);

    //constructor 3
    Sort(int array[], int number_of_elements);

    //costructor 4
    Sort(int n, ...);

    //constructor 5
    Sort(char  word[256]);


    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};