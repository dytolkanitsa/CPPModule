#ifndef ARRAY_H
# define ARRAY_H

template<typename T>
class Array
{
private:
	int _size;
	T *arr;
public:
	Array()
	{
		arr = NULL;
		this->_size = 0;
	}

	Array(unsigned int n)
	{
		arr = new T[n];
		this->_size = n;
	}

	Array(const Array<T> &copy)
	{
		*this = copy;
	}

	Array& operator=(const Array<T> &other)
	{
		if (this == &other)
			return *this;
		this->_size = other._size;
		this->arr = new T[_size];
		for (int i = 0; i < _size; i++)
		{
			arr[i] = other.arr[i];
		}
		return *this;
	}

	T& operator [](const int index)
	{
		if (index < 0 || index > this->_size)
			throw ElementIsOutOfTheLimits();
		return arr[index];
	}
	
	int size(void) const
	{
		return this->_size;
	}

	~Array()
	{
		delete [] arr;
	}

	class ElementIsOutOfTheLimits : public std::exception
	{
		const char* what() const throw()
		{
			return "Element is out of the limits";
		}
	};
};

#endif