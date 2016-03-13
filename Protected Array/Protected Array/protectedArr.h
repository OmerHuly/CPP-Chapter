template <class T>
class proArr {
public:
	proArr(int arr_size);	//c'tor
	~proArr();	//d'tor
	int getSize() const {return size;};
	T operator [] (const int i) const;	//direct get
	T& operator [] (const int i);	//direct set
		//pointer get
		//pointer set

private:
	T *array;
	int size;
	static int const OutOfRange = 0;	//out of range error
};

template <class T>
proArr<T>::proArr(int arr_size)	//c'tor
{
	size = arr_size;
	array = new T[arr_size];
	for (int j = 0; j < arr_size; ++j) {
		array[j] = 0;	//initialize array with 0/NULL/...
	}
}

template <class T>
proArr<T>::~proArr()	//d'tor
{
	delete[] array;
}

template <class T>
T proArr<T>::operator [] (const int i) const	//direct get
{
	if (i >= size) {
		throw OutOfRange;
	}
	return array[i];
}

template <class T>
T& proArr<T>::operator [] (const int i)	//direct set
{
	if (i >= size) {
		throw OutOfRange;
	}
	return array[i];
}