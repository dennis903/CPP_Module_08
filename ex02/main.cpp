#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top :";
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size :";
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "------- <char test> ------" << std::endl;

		MutantStack<char> cstack;
		for (char i = 'a'; i <= 'z'; i++)
		{
			cstack.push(i);
		}
		MutantStack<char>::iterator iter;
		iter = cstack.begin();
		while (iter != cstack.end())
		{
			std::cout << *iter << ' ';
			iter++;
		}
		std::cout << std::endl;
		std::cout << "top : ";
		std::cout << cstack.top() << std::endl;
		cstack.pop();
		cstack.pop();
		cstack.pop();
		std::cout << "top : ";
		std::cout << cstack.top() << std::endl;
	}
	return 0;
}