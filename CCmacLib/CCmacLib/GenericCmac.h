#ifndef GENERIC_CMAC_HEADER
#define GENERIC_CMAC_HEADER

#include "ICmac.h"
#include "GenericCmacFactoryArg.h"

namespace CCmacLib
{
	class GenericCmac : public ICmac
	{
	protected:
		unsigned int mNumOutputs;
		unsigned int mNumLayers;
		unsigned int mNumQ;
		
		std::vector<double> mMaxStates;
		std::vector<double> mMinStates;
		std::vector<double> mDenominator;



	public: // constructors/destructor
		GenericCmac(GenericCmacFactoryArg& arg);
		~GenericCmac();

	public: // implement ICmac virtual methods
		std::vector<double> Predict(std::vector<double> states) override;
	};
}

#endif