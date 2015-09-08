#ifndef llc_Flag_h__
#define llc_Flag_h__

#include <string>
#include <vector>

namespace llc
{
	class Flag
	{
	public:
		Flag(int argc, char *argv[]);
		Flag();
		~Flag();

		int Parse();

	private:
		std::vector<std::string> m_args;
	};
}

#endif // llc_Flag_h__
