#ifndef ICMAC_HEADER
#define ICMAC_HEADER

#include <vector>

namespace CCmacLib
{
	class ICmacInput
	{
	public:
		virtual ~ICmacInput(){}
	};

	class ICmac
	{
	public:
		virtual ~ICmac(){}
		virtual std::vector<double> Predict(ICmacInput& input) = 0;
	};
}

#endif