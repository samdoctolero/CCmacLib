#include "CmacFactory.h"
#include <stdexcept>
// GenericCmac
#include "GenericCmacFactoryArg.h"
#include "GenericCmac.h"

std::shared_ptr<CCmacLib::ICmac> CCmacLib::CmacFactory::CreateCmac(CCmacLib::CmacType type, CCmacLib::ICmacFactoryArg& arg)
{
	
	switch(type)
	{
	case CCmacLib::CmacType::GENERIC:
		if (dynamic_cast<GenericCmacFactoryArg*>(&arg) != nullptr)
		{
			GenericCmacFactoryArg* genericArg = dynamic_cast<GenericCmacFactoryArg*>(&arg);
			return std::make_shared<GenericCmac>(*genericArg);
		}
		else
		{
			throw std::invalid_argument("Expecting a base type of GenericCmacFactoryArg. Invalid combination.");
		}
		break;

	default:
		throw std::invalid_argument("Not a supported Cmac type.");
		break;
	}
	return nullptr;
}
