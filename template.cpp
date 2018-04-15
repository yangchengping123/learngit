#include "template.h"

template<class T1,class T2> 
base<T1,T2>::base(T1 i,T2 j)
{
	this.i  = i;
	this.j  = j;
	printf("base\n");
}

template<class T1,class T2> 
base<T1,T2>::~base()
{
	printf("~base\n");
}

template<class T1,class T2> 
T1 base<T1,T2>::get_i() const
{
	return i;
}

template<class T1,class T2> 
T2 base<T1,T2>::get_j() const
{
	return j;
}



