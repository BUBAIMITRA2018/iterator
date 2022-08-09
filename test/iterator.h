#pragma once
#ifndef iterator
#define iterator

template<typename Bidrectional>
bool isPalindrone(Bidrectional first, Bidrectional end);
//#include "iterator.cpp"



template<typename Bidrectional>
inline bool isPalindrone(Bidrectional first, Bidrectional last)
{
	while (true)
	{
		last--;
		if (first == last)
			break;

		if (*first != *last)
			return false;
		first++;

		if (first == last)
		{
			break;
		}


	}

	return true;



}

#endif