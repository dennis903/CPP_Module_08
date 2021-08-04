#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &_mutant) : std::stack<T>(_mutant)
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator = (const MutantStack<T> &_mutant)
{
	if (this == &_mutant)
		return (*this);
	this->c = _mutant.c;
	return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return (this->c.end());
}