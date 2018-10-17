//
//
//
//

#include <iostream>
using namespace std;
const int SIZE = 8;

struct inforec {
		int number;
	};

struct Stack {
	inforec i[SIZE];
	int top;
	};

void creat_stack(Stack &s)
{
	s.top = -1;
}

int empty(Stack &s)
{
	return (s.top == -1);
}

void push(Stack &s, inforec &i)
{
	++s.top;
	s.i[s.top] = i;
}

void pop(Stack &s, inforec &item)
{
	item = s.i[s.top--];
}

int top_item(const Stack &s, inforec &item)
{
	item = s.i[s.top];
	return (item);
}

void purge(Stack &s, inforec &i)
{
	for(int count = 0; count < SIZE; count++)
	{
		pop(s, i);
	}
}

int main()
{

	

	Stack s;
	inforec c;


	int input = 0;
do{	
	cout << "1. Create Stack\n";
	cout << "2. Push onto Stack\n";
	cout << "3. Pop off Stack\n";
	cout << "4. Display top of Stack\n";
	cout << "5. Check if Stack empty\n";
	cout << "6. Purge Stack\n";
	cout << "7. EXIT\n";
	cin >> input;

	switch (input)
	{
	case 1: {
		creat_stack(s);
		break;
	}
	case 2: {
		cout << "What would you like to push onto the stack? (integers only)\n";
		cin >> c.number;
		push(s, c);
		break;
	}
	case 3: {
		pop(s, c);
		break;
	}
	case 4: {
		cout << top_item(s, c) << endl;
		break;
	}
	case 5: {
		if(s.top == empty(s))
		cout << "Stack is empty.\n";
		else
		cout << "Stack is not empty.\n";
		break;
	}
	case 6: {
		purge(s, c);
		break;
	}
	case 7:{
		return 0;
		break;
	}
	default: {
		cout << "Please enter a number listed on the menu.\n";
	}
	}
}while (input != 7);

	return 0;
}
