#include "GenericCmacFactoryArgImpl.h"

CCmacLib::GenericCmacFactoryArg::GenericCmacFactoryArgImpl::GenericCmacFactoryArgImpl(unsigned int numout, unsigned int numlayers, unsigned int numq, std::vector<double> max, std::vector<double> min)
	: mNumOutputs(numout), mNumLayers(numlayers), mNumQ(numq), mMaxStates(max), mMinStates(min){}

unsigned int CCmacLib::GenericCmacFactoryArg::GenericCmacFactoryArgImpl::GetNumOutputs()
{
	return this->mNumOutputs;
}

unsigned int CCmacLib::GenericCmacFactoryArg::GenericCmacFactoryArgImpl::GetNumLayers()
{
	return this->mNumLayers;
}

unsigned int CCmacLib::GenericCmacFactoryArg::GenericCmacFactoryArgImpl::GetNumQ()
{
	return this->mNumQ;
}

std::vector<double> CCmacLib::GenericCmacFactoryArg::GenericCmacFactoryArgImpl::GetMaxStates()
{
	return this->mMaxStates;
}

std::vector<double> CCmacLib::GenericCmacFactoryArg::GenericCmacFactoryArgImpl::GetMinStates()
{
	return this->mMinStates;
}


