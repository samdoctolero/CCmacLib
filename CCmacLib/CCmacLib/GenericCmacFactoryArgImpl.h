#ifndef GENERIC_CMAC_FACTORY_ARG_IMPL_HEADER
#define GENERIC_CMAC_FACTORY_ARG_IMPL_HEADER

#include "GenericCmacFactoryArg.h"

namespace CCmacLib
{
	class GenericCmacFactoryArg::GenericCmacFactoryArgImpl
	{
	protected:
		unsigned int mNumOutputs; 
		unsigned int mNumLayers;
		unsigned int mNumQ;
		std::vector<double> mMaxStates;
		std::vector<double> mMinStates;

	public:
		GenericCmacFactoryArgImpl(unsigned int numout, unsigned int numlayers
			, unsigned int numq, std::vector<double> max, std::vector<double> min);
		~GenericCmacFactoryArgImpl(){}

	public: // getters
		unsigned int GetNumOutputs();
		unsigned int GetNumLayers();
		unsigned int GetNumQ();
		std::vector<double> GetMaxStates();
		std::vector<double> GetMinStates();
	};
}

#endif