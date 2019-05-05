/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : exercise-02, strukdat-09
Tahun           : 2019
*/

#include <iostream>
using namespace std;

struct stackList
{
	char data;
	stackList* next;
};
typedef stackList* pointer;
typedef pointer Stack;

void createStack (Stack& TOP)
{
	TOP=NULL;
}

void createElmnt(pointer& pBaru)
{
	pBaru=new stackList;
	cout << "Huruf: "; cin >> pBaru->data;
	pBaru->next=NULL;
}

void push (Stack& TOP, pointer& pBaru)
{
	if (TOP==NULL) TOP=pBaru;
	else
	{
		pBaru->next=TOP;
		TOP=pBaru;
	}
}

void reversed (Stack TOP)
{
	pointer pBantu=TOP;
	if (TOP==NULL) cout << "Stack is empty." << endl;
	else
	{
		while (pBantu!=NULL)
		{
			cout << pBantu->data;
			pBantu=pBantu->next;
		}
	}
}

void traversal (Stack TOP)
{
	pointer pBottom,pPrecBottom;
	if (TOP==NULL) cout << "Stack is empty." << endl;
	else
	{
		while (pBottom!=NULL)
		{
			pBottom=TOP;
			pPrecBottom=NULL;
			while (pBottom->next!=NULL)
			{
				pPrecBottom=pBottom;
				pBottom=pBottom->next;
			}
			cout << pBottom->data;
			if (pPrecBottom!=NULL) pPrecBottom->next=NULL;
			else break;
		}
	}
}

int main()
{
	int n;
	pointer p;
	Stack S;
	
	createStack(S);
	
	cout << "Banyak huruf yang menyusun kata anda: "; cin >> n;
	for (int i=0; i<n; i++)
	{
		createElmnt(p);
		push(S,p);
	}
	cout << "Kata anda yang sudah dibalik: ";
	reversed(S);
	cout << "\nKata anda sebenarnya: ";
	traversal(S);
}
