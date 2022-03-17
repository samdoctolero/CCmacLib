#include "GenericCmac.h"

CCmacLib::GenericCmac::GenericCmac(GenericCmacFactoryArg& arg)
{
	this->mNumOutputs = arg.GetNumOutputs();
	this->mNumLayers = arg.GetNumLayers();
	this->mNumQ = arg.GetNumQ();
	
	this->mMaxStates = arg.GetMaxStates();
	this->mMinStates = arg.GetMinStates();
	this->mDenominator = arg.GetMaxStates();
}

CCmacLib::GenericCmac::~GenericCmac()
{
}

std::vector<double> CCmacLib::GenericCmac::Predict(std::vector<double> states)
{
	return std::vector<double>(this->mNumOutputs, 0.0);
}
