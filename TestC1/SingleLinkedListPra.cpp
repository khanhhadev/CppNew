//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//struct node
//{
//	int value;
//	struct node* link;
//};
//
//typedef struct node* linkpoint;
//linkpoint head = NULL, tail = NULL;
//
//linkpoint createNode(int Value)
//{
//	linkpoint p = (linkpoint)malloc(sizeof(linkpoint));
//
//	p->value = Value;
//	p->link = NULL;
//
//	return p;
//}
//
//void printList(linkpoint head, linkpoint tail)
//{
//	linkpoint current = head;
//	
//	cout << "\n[";
//	if (head != NULL)
//		while (1)
//		{
//			cout << current->value << ", ";
//			if (current->link == NULL) break;
//			else current = current->link;
//		}
//	cout << "]";
//
//}
//
//void addFirstNode(int Value)
//{
//	linkpoint p = createNode(Value);
//	if (head == NULL)
//	{
//		head = tail = p;
//	}
//	else
//	{
//		p->link = head;
//		head = p;
//	}
//}
//
//void addLastNode(int Value)
//{
//	linkpoint p = createNode(Value);
//	if (head == NULL)
//	{
//		head = tail = p;
//	}
//	else
//	{
//		tail->link = p;
//		tail = p;
//	}
//}
//
//int main()
//{
//	int n;
//	scanf_s("%‚„", &n);
//	addFirstNode(6);
//	addFirstNode(5);
//	addFirstNode(4);
//	addFirstNode(3);
//	addFirstNode(2);
//	addFirstNode(1);
//
//	addLastNode(6);
//	addLastNode(5);
//	addLastNode(4);
//	addLastNode(3);
//	addLastNode(2);
//	addLastNode(1);
//
//	printList(head, tail);
//
//	system("pause");
//	return 0;
//}