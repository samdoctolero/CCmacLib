# CMakeList.txt : CMake project for CCmacLib, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_library(CCmacLib  STATIC  "ICmac.h" "ICmacFactoryArg.h" "CmacFactory.h" "CmacFactory.cpp" 
			"ITrainer.h" "ITrainerFactoryArg.h"  "TrainerFactory.h" "TrainerFactory.cpp" 
			"GenericCmacFactoryArg.h" "GenericCmacFactoryArg.cpp" "GenericCmacFactoryArgImpl.h" "GenericCmacFactoryArgImpl.cpp" 
			"GenericCmac.h" "GenericCmac.cpp" "Enumerations.h")
#add_library(CCmacLib  LINK  )

# TODO: Add tests and install targets if needed.
