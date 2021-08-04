#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack<T> &_mutant);
		~MutantStack();
		MutantStack	&operator = (const MutantStack<T> &_mutant);
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};
#endif