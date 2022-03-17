#ifndef GENRIC_CMAC_FACTORY_ARG_HEADER
#define GENRIC_CMAC_FACTORY_ARG_HEADER

#include "ICmacFactoryArg.h"
#include <memory>
#include <vector>

namespace CCmacLib
{
	class GenericCmacFactoryArg : public ICmacFactoryArg
	{
	protected:
		class GenericCmacFactoryArgImpl;
		std::unique_ptr<GenericCmacFactoryArgImpl> pImpl;
	public:
		GenericCmacFactoryArg(unsigned int numout, unsigned int numlayers
			, unsigned int numq, std::vector<double> max, std::vector<double> min);
		~GenericCmacFactoryArg();

	public: // getters
		unsigned int GetNumOutputs();
		unsigned int GetNumLayers();
		unsigned int GetNumQ();
		std::vector<double> GetMaxStates();
		std::vector<double> GetMinStates();
	};
}

#endif