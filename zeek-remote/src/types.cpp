/**
 *  Copyright (c) 2019-present, The International Computer Science Institute
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

#include <zeek-remote/types.h>

namespace zeek {
// This should be renamed to "/zeek/osquery/", but the osquery framework
// has to be updated first
#define ZEEK_TOPIC_PREFIX "/bro/osquery/"

const std::string BrokerTopics::ALL{ZEEK_TOPIC_PREFIX "hosts"};
const std::string BrokerTopics::ANNOUNCE{ZEEK_TOPIC_PREFIX "host_announce"};
const std::string BrokerTopics::PRE_INDIVIDUALS{ZEEK_TOPIC_PREFIX "host/"};
const std::string BrokerTopics::PRE_GROUPS{ZEEK_TOPIC_PREFIX "group/"};
const std::string BrokerTopics::PRE_CUSTOMS{ZEEK_TOPIC_PREFIX "custom/"};

const std::string BrokerEvents::HOST_NEW{"osquery::host_new"};
const std::string BrokerEvents::HOST_JOIN{"osquery::host_join"};
const std::string BrokerEvents::HOST_LEAVE{"osquery::host_leave"};
const std::string BrokerEvents::HOST_EXECUTE{"osquery::host_execute"};
const std::string BrokerEvents::HOST_SUBSCRIBE{"osquery::host_subscribe"};
const std::string BrokerEvents::HOST_UNSUBSCRIBE{"osquery::host_unsubscribe"};
} // namespace zeek