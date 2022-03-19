#ifndef CMAC_FACTORY_HEADER
#define CMAC_FACTORY_HEADER

#include "ICmac.h"
#include "ICmacFactoryArg.h"
#include "Enumerations.h"
#include <memory>

namespace CCmacLib
{
	class CmacFactory
	{
	public:
		static std::shared_ptr<ICmac> CreateCmac(CmacType type, ICmacFactoryArg& arg);
	};
}

#endif