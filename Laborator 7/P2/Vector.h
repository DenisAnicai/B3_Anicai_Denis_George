#pragma once
#include <iostream>

using namespace std;

template <class T>
class Vector
{
	int lungime;
	int vDim;
	T* v;
	void resize()
	{
		vDim *= 2;
		T* vAux = new T[vDim];

		for (int i = 0; i < lungime; i++)
		{
			vAux[i] = v[i];
		}

		delete[] v;
		v = vAux;
	}

public:

	Vector() : lungime(0), vDim(1), v(new T[1]) {}

	void push(T elem)
	{
		if (vDim <= lungime + 1)
		{
			resize();
		}

		v[lungime++] = elem;
	}

	T pop()
	{
		if (lungime - 1 >= 0)
		{
			return v[lungime - 1];
		}
	}

	void remove(int index)
	{
		if (index >= 0 && index <= lungime - 1)
		{

			while (index != lungime)
			{
				v[index] = v[index + 1];
				index++;
			}
			lungime--;

		}
	}

	void insert(T elem, int index)
	{
		int lg = lungime;
		if (index < 0 || index >= lg)
		{
			return;
		}
		if (lg + 1 >= vDim)
		{
			resize();
		}

		while (lg > index)
		{
			v[lg] = v[lg - 1];
			lg--;
		}

		v[index] = elem;
		lungime++;
	}

	void sort(bool (*sortFunction)(T& elem1, T& elem2) = nullptr)
	{
		for (int i = 0; i < lungime - 1; i++)
		{
			for (int j = i + 1; j < lungime; j++)
			{
				if (sortFunction == nullptr)
				{
					if (v[i] < v[j] == false)
					{
						swap(v[i], v[j]);
					}
				}
				else
				{
					bool rez = sortFunction(v[i], v[j]);
					if (!rez)
					{
						swap(v[i], v[j]);
					}
				}
			}
		}
	}

	T& get(int index) const
	{
		if (index >= 0 && index <= lungime - 1)
		{
			return v[index];
		}
	}

	void set(T elem, int index)
	{
		if (index >= 0 && index <= lungime - 1)
		{
			v[index] = elem;
		}
	}

	int count()
	{
		return lungime;
	}

	int firstIndexOf(T& elem, bool (*isEqual)(T& elem1, T& elem2) = nullptr)
	{
		for (int i = 0; i < lungime; i++)
		{
			if (isEqual == nullptr)
			{
				if (elem == v[i])
				{
					return i;
				}
			}
			else
			{
				bool rez = isEqual(v[i], elem);
				if (rez)
				{
					return i;
				}
			}
		}
		return -1;
	}

	void getElements()
	{

		for (int i = 0; i < lungime; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl << endl;
	}

};

