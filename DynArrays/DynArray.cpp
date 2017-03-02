#include "DynArray.h"

DynArray::DynArray(void)
{
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = DYN_ARRAY_DEFAULT_SIZE;
		
}

DynArray::DynArray( size_t size)
{
	m_capacity = size;
	m_size = size;
	m_data = new int[m_capacity];
}

DynArray::DynArray(size_t size, const int & value)
{
	m_capacity = size;
	m_size = size;
	*m_data = value;

}

DynArray::DynArray(int * arr, size_t size)
{
	m_capacity = size;
	m_size = size;
	m_data = arr;
}

DynArray::~DynArray(void)
{

}


