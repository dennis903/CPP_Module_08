#include "easyfind.hpp"

int			main()
{
	std::cout << "--------- vector test ---------" << std::endl;
	{
		std::vector<int> vt;
		for (int i = 0; i < 5; i++)
			vt.push_back(i * 10);
		try
		{
			if (easyfind(vt, 20) == vt.end())
				throw WrongContainer();
			std::cout << "find 20 : ";
			std::cout << *easyfind(vt, 20) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "------- list test --------" << std::endl;
	{
		std::list<char> lst(10, 65);
		std::list<char> lst2;
		
		for (int i = 0; i < 20; i++)
			lst2.push_back(i + 'A');
		try
		{
			if (easyfind(lst, 'A') == lst.end())
				throw WrongContainer();
			std::cout << "find A : ";
			std::cout << *easyfind(lst, 'A') << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			if (easyfind(lst2, 'A') == lst2.end())
				throw WrongContainer();
			std::cout << "find I : ";
			std::cout << *easyfind(lst2, 'I') << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------- deque test ------------" << std::endl;
	{
		std::deque<std::string> deq;

		deq.push_front("hello");
		deq.push_back("world");
		deq.push_front("what");
		deq.push_back("are");
		deq.push_back("you");
		deq.push_front("doing");
		try
		{
			if (easyfind(deq, "hello") == deq.end())
				throw WrongContainer();
			std::cout << "find hello : ";
			std::cout << *easyfind(deq, "hello") << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "----------- Empty container test ------------" << std::endl;
	{
		std::vector<int> vt;
		
		try
		{
			if (easyfind(vt, 5) == vt.end())
				throw WrongContainer();
			std::cout << "find 5 : ";
			std::cout << *easyfind(vt, 5) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}