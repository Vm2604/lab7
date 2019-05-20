#include "pch.h"
#include <iostream> 
#include <stack> 
#include <string>

using namespace std;

struct Book {
	string name;
	unsigned page;

	Book(const string& name, unsigned page) : name(name), page(page) { ; }
};

void showstack(stack<Book> s)
{
	while (!s.empty())
	{
		Book book = s.top();
		cout << '\t' << book.name << '\t' << book.page << endl;
		s.pop();
	}
	cout << '\n';
}

int main()
{
	stack<Book> s;
	s.push(Book("book one", 111));
	s.push(Book("book two", 222));
	s.push(Book("book three", 333));
	s.push(Book("book four", 444));
	s.push(Book("book five", 555));
	cout << "The stack is : " << endl;
	showstack(s);

	cout << "\ns.size() : " << s.size(); 
	//cout << "\ns.top() : " << s.top(); 

	cout << "\ns.pop() : " << endl;
	s.push(Book("book six", 666));
	showstack(s);
	cout << "\ns.size() : " << s.size();

	return 0;
}
