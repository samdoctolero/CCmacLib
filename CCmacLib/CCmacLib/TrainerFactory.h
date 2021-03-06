#ifndef TRAINER_FACTORY_HEADER
#define TRAINER_FACTORY_HEADER

#include "ITrainer.h"
#include "ITrainerFactoryArg.h"
#include "ICmac.h"
#include "Enumerations.h"
#include <memory>

namespace CCmacLib
{
	class TrainerFactory
	{
	public:
		static std::shared_ptr<ITrainer> CreateTrainer(ICmac& cmac, TrainerType type, ITrainerFactoryArg& arg);
	};
}

#endif