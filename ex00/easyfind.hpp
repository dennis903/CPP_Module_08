#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <exception>
# include <vector>
# include <iostream>
# include <list>
# include <deque>
# include <string>

class	WrongContainer : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("This container is wrong");
		}
};

template<typename T, typename C>
typename T::iterator	easyfind(T &container, C n)
{
	if (container.begin() == container.end())
		throw	WrongContainer();
	return (std::find(container.begin(), container.end(), n));
}
#endif