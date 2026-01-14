#pragma once

class Vei2
{
public:
	Vei2(int x, int y);
	const Vei2 operator * (int val) const;
public:
	int x;
	int y;
};