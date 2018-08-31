#ifndef UTILS_DFSPY_H
#define UTILS_DFSPY_H

#include <string>
#include <vector>
#include "/Users/ChristianHaroldNunez/Desktop/ftkcommon/ftkcommon/EventFragment.h"
#include "/Users/ChristianHaroldNunez/Desktop/ftkcommon/ftkcommon/EventFragmentFTKPacket.h"
#include "/Users/ChristianHaroldNunez/Desktop/ftkcommon/ftkcommon/EventFragmentHitClusters.h"
#include "/Users/ChristianHaroldNunez/Desktop/ftkcommon/ftkcommon/Utils.h"
#include "/Users/ChristianHaroldNunez/Desktop/ftkcommon/ftkcommon/Cluster.h"

namespace dfspy {

    // String manipulation
    unsigned int hexStringToInt(std::string hexString);
    unsigned long long hexStringToULL(std::string str);
    std::vector<std::string> split(std::string s);
    bool compareByL1ID(const std::shared_ptr<daq::ftk::EventFragmentHitClusters> &a, const std::shared_ptr<daq::ftk::EventFragmentHitClusters> &b);
}

#endif // UTILS_DFSPY_H