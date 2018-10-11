//
//
//
//

#include<iostream>
using namespace std;

void creat_stack(Stack&)
int empty(Stack&)
void push(Stack&, const inforec&)
void pop(Stack&, inforec&)
int top_item(const Stack&)
void purge(Stack&)

int main()
{

	const int SIZE = 8;

	struct inforec {
		int number;
	};

	struct Stack {
		inforec i[SIZE];
		int top;
	};

	Stack s;
	inforec i;


	int input;
	
	cout << "1. Create Stack\n";
	cout << "2. Push onto Stack\n";
	cout << "3. Pop off Stack\n";
	cout << "4. Display top of Stack\n";
	cout << "5. Check if Stack empty\n";
	cout << "6. Purge Stack\n";
	cin >> input;

	switch (input)
	{
	case 1: {
		creat_stack(s);
		break;
	}
	case 2: {
		push(s, i);
		break;
	}
	case 3: {
		pop(s, i);
		break;
	}
	case 4: {
		top_item(s);
		break;
	}
	case 5: {
		empty(s);
		break;
	}
	case 6: {
		purge(s);
		break;
	}
	default: {
		cout << "Please enter a number listed on the menu.\n";
	}
	}
	

	return 0;
}

void creat_stack(Stack &s)
{
	s.top = NULL;
}

int empty(Stack &s)
{
	return (s.top == -1);
}

void push(Stack &s, const inforec &i)
{
	++s.top;
	s.i[s.top] = i;
}

void pop(Stack &s, inforec &item)
{
	item = s.i[s.top--];
}

int top_item(const Stack &s)
{
	return (s.top);
}

void purge(Stack &s)
{
	for (int i = 0; i < SIZE; i++)
	{
		pop(s);
	}
}