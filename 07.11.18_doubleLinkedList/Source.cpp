#include"List_.h"
#include<string>
using namespace std;

void main()
{
	List_<int> s;
	for (size_t i = 0; i < 5; i++)
	{
		s.push_back(i);
	}
	for (size_t i = 0; i < 10; i++)
	{
		s.push_front(i*i);
	}
	cout << s;
	s.insert(5,2);
	cout << endl;
	cout << s;
	cout << endl;
	List_<int> s1(s);
	cout << s1 << endl << s << endl;
	system("pause");
}