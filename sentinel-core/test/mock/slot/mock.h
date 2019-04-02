
#pragma once

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "sentinel-core/slot/base/rule_checker_slot.h"
#include "sentinel-core/slot/base/stats_slot.h"
#include "sentinel-core/slot/base/token_result.h"

namespace Sentinel {
namespace Slot {
class MockRuleCheckerSlot : public RuleCheckerSlot {
 public:
  MockRuleCheckerSlot();
  ~MockRuleCheckerSlot();
  MOCK_METHOD5(Entry, TokenResultSharedPtr(Context&, const ResourceWrapper&,
                                           Stat::Node&, int, int));
  MOCK_METHOD3(Exit, void(Context&, const ResourceWrapper&, int));
  MOCK_CONST_METHOD0(Name, const std::string&(void));
};

class MockStatsSlot : public StatsSlot {
 public:
  MockStatsSlot();
  ~MockStatsSlot();
  MOCK_METHOD5(Entry, TokenResultSharedPtr(Context&, const ResourceWrapper&,
                                           Stat::Node&, int, int));
  MOCK_METHOD3(Exit, void(Context&, const ResourceWrapper&, int));
  MOCK_CONST_METHOD0(Name, const std::string&(void));
};

}  // namespace Slot
}  // namespace Sentinel
