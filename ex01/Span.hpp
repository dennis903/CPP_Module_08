#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class		Span
{
	private:
		unsigned int n;
		std::vector<int> vt;
		Span();
	public:
		Span(unsigned int _n);
		Span(const Span &_Span);
		~Span();
		Span &operator = (const Span &_Span);
		void	addNumber(int n);
		void	addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
		int		shortestSpan(void);
		int		longestSpan(void);
		class Exception : public std::exception
		{
			public:
				const char *what() const throw();
		};
};
#endif