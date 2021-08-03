#include "Span.hpp"

int			main()
{
	std::cout << "-------- default test ---------" << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "--------- iterator test ------------" << std::endl;
	{
		Span sp = Span(10000);
		std::vector<int> vt;
		for (int i = 0; i < 10000; i++)
		{
			vt.push_back(i * 5);
		}
		sp.addNumber(vt.begin(), vt.end());
		std::cout << "Shortest span : ";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : ";
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "--------- Exception test ---------" << std::endl;
	{
		std::cout << "< empty >" << std::endl;
		try
		{
			Span sp(5);
			sp.shortestSpan();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "< Add_number exceededs N >" << std::endl;
		try
		{
			Span sp(3);
			sp.addNumber(4);
			std::cout << "success" << std::endl;
			sp.addNumber(3);
			std::cout << "success" << std::endl;
			sp.addNumber(2);
			std::cout << "success" << std::endl;
			sp.addNumber(1);
			std::cout << "success" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}