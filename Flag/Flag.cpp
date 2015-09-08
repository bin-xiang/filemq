#include "Flag.h"

using namespace llc;

Flag::Flag(int argc, char *argv[])
{
	for (int i = 0; i < argc; ++i)
	{
		m_args.push_back(argv[i]);
	}
}


Flag::Flag()
{

}

Flag::~Flag()
{

}

int Flag::Parse()
{
	return -1;
}

