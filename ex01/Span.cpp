#include "Span.hpp"

Span::Span(void) : n(0)
{
}

Span::Span(unsigned int _n) : n(_n)
{
}

Span::~Span()
{
}

Span::Span(const Span &_Span)
{
	this->n = _Span.n;
	this->vt = _Span.vt;
}

Span& Span::operator = (const Span &_Span)
{
	if (this == &_Span)
		return (*this);
	this->n = _Span.n;
	this->vt = _Span.vt;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (vt.size() >= this->n)
		throw Exception();
	this->vt.push_back(n);
}

void	Span::addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end)
{
	for (std::vector<int>::iterator iter = begin; iter != end; iter++)
	{
		if (this->vt.size() >= this->n)
			throw Exception();
		this->vt.push_back(*iter);
	}
}

int		Span::shortestSpan(void)
{
	int		min;

	if (this->vt.size() < 2)
		throw Exception();
	std::sort(vt.begin(), vt.end());
	std::vector<int>::iterator prev = vt.begin();
	std::vector<int>::iterator curr = vt.begin() + 1;
	min = *curr - *prev;
	for (unsigned long i = 0; i < vt.size() - 1; i++)
	{
		min = std::min(min, *curr - *prev);
		curr++;
		prev++;
	}
	return (min);
}

int		Span::longestSpan(void)
{
	if (this->vt.size() < 2)
		throw Exception();
	std::sort(vt.begin(), vt.end());
	std::vector<int>::iterator start = vt.begin();
	std::vector<int>::iterator end = vt.end() - 1;
	return (*end - *start);
}

const char*	Span::Exception::what() const throw()
{
	return ("Error occured");
}