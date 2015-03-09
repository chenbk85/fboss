/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/state/NdpResponseTable.h"

#include "fboss/agent/state/NeighborResponseTable-defs.h"

namespace facebook { namespace fboss {

template class NeighborResponseTable<folly::IPAddressV6, NdpResponseTable>;

}} // facebook::fboss