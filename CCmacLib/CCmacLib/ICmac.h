#ifndef ICMAC_HEADER
#define ICMAC_HEADER

#include <vector>

namespace CCmacLib
{
	class ICmac
	{
	public:
		virtual ~ICmac(){}
		virtual std::vector<double> Predict(std::vector<double> states) = 0;
	};
}

#endif