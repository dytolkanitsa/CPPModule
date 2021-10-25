#ifndef ITER_H
# define ITER_H

template<typename T>
void iter(T *mas, int len, void(*f)(T const &t))
{
	for (int i = 0; i < len; i++)
	{
		f(mas[i]);
	}
}

#endif