#pragma once
#include <vector>

class graph
{
public:
	graph()
	{
		u = 0;
		v = 0;
	}
	graph(const int u, const int v) :
		u(u),
		v(v)
	{	}

	virtual const void add_adge(const int& first, const int& sec, const int& value);
	virtual const void add_vertex();
	virtual const void del_edge(const int& value);
	virtual const void del_vertex(const int& first, const int& sec);
private:
	int u;
	int v;
};