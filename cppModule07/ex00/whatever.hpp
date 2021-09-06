#ifndef WHATEVER_H
# define WHATEVER_H

template<typename T>
void swap(T& first_arg, T& second_arg)
{
	T temp;
	temp = first_arg;
	first_arg = second_arg;
	second_arg = temp;
}

template<typename T>
T min(T& first_arg, T& second_arg)
{
	return first_arg < second_arg ? first_arg : second_arg;
}

template<typename T>
T max(T& first_arg, T& second_arg)
{
	return first_arg > second_arg ? first_arg : second_arg;
}
#endif