#ifndef ITRAINER_HEADER
#define ITRAINER_HEADER

#include "ICmac.h"

namespace CCmacLib
{
	class ITrainerArg
	{
	public:
		virtual ~ITrainerArg(){}
	};

	class ITrainer
	{
	public:
		virtual ~ITrainer(){}
		virtual void Train(ICmac& cmac, ITrainerArg& arg) = 0;
	};
}

#endif