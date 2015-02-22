#include <VPerformanceElapsedTimer>
#include "mytest.h"

TEST (ElapsedTimer, loopTest)
{
  MyTest<VPerformanceElapsedTimer, Loop>();
}

TEST (ElapsedTimer, noneTest)
{
  MyTest<VPerformanceElapsedTimer, None>();
}

TEST (ElapsedTimer, usleepTest)
{
  MyTest<VPerformanceElapsedTimer, USleep>();
}

TEST (ElapsedTimer, msleepTest)
{
  MyTest<VPerformanceElapsedTimer, MSleep>();
}

TEST (ElapsedTimer, sleepTest)
{
  MyTest<VPerformanceElapsedTimer, Sleep, 1>();
}