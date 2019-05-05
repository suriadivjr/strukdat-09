/*
Author    		: SURIADI VAJRAKARUNA
NPM		        : 140810180038
Deskripsi	    : exercise-01, strukdat-09
Tahun           : 2019
*/

#include <iostream>
using namespace std;

const int maxElement=225;

struct Stack
{
	char data[maxElement];
	int TOP;
};

Stack S;

void createStack (Stack& S)
{
	S.TOP=-1;
}

void push(Stack& S, char newElement)
{
	if (S.TOP == maxElement-1) cout << "Stack is full." << endl;
	else
	{
		S.TOP=S.TOP+1;
		S.data[S.TOP]=newElement;
	}
}

void print(Stack S)
{
	for (int i=0; i<=S.TOP; i++)
	{
		cout << S.data[i];
	}
}

void printReversed(Stack S)
{
	for (int i=S.TOP; i>=0; i--)
	{
		cout << S.data[i];
	}
}

int main(int argc, char** argv) 
{
	Stack S;
	int n;
	char newElement, savedElement;
	
	createStack(S);
	
	cout << "Banyak huruf yang menyusun kata anda: "; cin >> n;
	for (int i=0; i<n; i++)
	{
		cout << "Huruf " << i+1 << ": "; cin >> newElement;
		push(S,newElement);
	}
	cout << "Kata anda: ";
	print(S);
	cout << "\nKata anda yang sudah dibalik: ";
	printReversed(S);
}
