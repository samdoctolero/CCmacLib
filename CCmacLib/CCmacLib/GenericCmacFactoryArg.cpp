#include "GenericCmacFactoryArg.h"
#include "GenericCmacFactoryArgImpl.h"

CCmacLib::GenericCmacFactoryArg::GenericCmacFactoryArg(unsigned int numout, unsigned int numlayers, unsigned int numq, std::vector<double> max, std::vector<double> min)
{
	this->pImpl = std::make_unique<GenericCmacFactoryArgImpl>(numout, numlayers, numq, max, min);
}

CCmacLib::GenericCmacFactoryArg::~GenericCmacFactoryArg()
{
	this->pImpl.reset();
}

unsigned int CCmacLib::GenericCmacFactoryArg::GetNumOutputs()
{
	return this->pImpl->GetNumOutputs();
}

unsigned int CCmacLib::GenericCmacFactoryArg::GetNumLayers()
{
	return this->pImpl->GetNumLayers();
}

unsigned int CCmacLib::GenericCmacFactoryArg::GetNumQ()
{
	return this->pImpl->GetNumQ();
}

std::vector<double> CCmacLib::GenericCmacFactoryArg::GetMaxStates()
{
	return this->pImpl->GetMaxStates();
}

std::vector<double> CCmacLib::GenericCmacFactoryArg::GetMinStates()
{
	return this->pImpl->GetMinStates();
}
