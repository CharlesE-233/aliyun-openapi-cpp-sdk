/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/vpc/model/CreateNetworkAclResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateNetworkAclResult::CreateNetworkAclResult() :
	ServiceResult()
{}

CreateNetworkAclResult::CreateNetworkAclResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNetworkAclResult::~CreateNetworkAclResult()
{}

void CreateNetworkAclResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto networkAclAttributeNode = value["NetworkAclAttribute"];
	if(!networkAclAttributeNode["NetworkAclId"].isNull())
		networkAclAttribute_.networkAclId = networkAclAttributeNode["NetworkAclId"].asString();
	if(!networkAclAttributeNode["RegionId"].isNull())
		networkAclAttribute_.regionId = networkAclAttributeNode["RegionId"].asString();
	if(!networkAclAttributeNode["NetworkAclName"].isNull())
		networkAclAttribute_.networkAclName = networkAclAttributeNode["NetworkAclName"].asString();
	if(!networkAclAttributeNode["Description"].isNull())
		networkAclAttribute_.description = networkAclAttributeNode["Description"].asString();
	if(!networkAclAttributeNode["VpcId"].isNull())
		networkAclAttribute_.vpcId = networkAclAttributeNode["VpcId"].asString();
	if(!networkAclAttributeNode["CreationTime"].isNull())
		networkAclAttribute_.creationTime = networkAclAttributeNode["CreationTime"].asString();
	if(!networkAclAttributeNode["Status"].isNull())
		networkAclAttribute_.status = networkAclAttributeNode["Status"].asString();
	auto allIngressAclEntriesNode = networkAclAttributeNode["IngressAclEntries"]["IngressAclEntry"];
	for (auto networkAclAttributeNodeIngressAclEntriesIngressAclEntry : allIngressAclEntriesNode)
	{
		NetworkAclAttribute::IngressAclEntry ingressAclEntryObject;
		if(!networkAclAttributeNodeIngressAclEntriesIngressAclEntry["NetworkAclEntryId"].isNull())
			ingressAclEntryObject.networkAclEntryId = networkAclAttributeNodeIngressAclEntriesIngressAclEntry["NetworkAclEntryId"].asString();
		if(!networkAclAttributeNodeIngressAclEntriesIngressAclEntry["Policy"].isNull())
			ingressAclEntryObject.policy = networkAclAttributeNodeIngressAclEntriesIngressAclEntry["Policy"].asString();
		if(!networkAclAttributeNodeIngressAclEntriesIngressAclEntry["Protocol"].isNull())
			ingressAclEntryObject.protocol = networkAclAttributeNodeIngressAclEntriesIngressAclEntry["Protocol"].asString();
		if(!networkAclAttributeNodeIngressAclEntriesIngressAclEntry["SourceCidrIp"].isNull())
			ingressAclEntryObject.sourceCidrIp = networkAclAttributeNodeIngressAclEntriesIngressAclEntry["SourceCidrIp"].asString();
		if(!networkAclAttributeNodeIngressAclEntriesIngressAclEntry["Port"].isNull())
			ingressAclEntryObject.port = networkAclAttributeNodeIngressAclEntriesIngressAclEntry["Port"].asString();
		if(!networkAclAttributeNodeIngressAclEntriesIngressAclEntry["EntryType"].isNull())
			ingressAclEntryObject.entryType = networkAclAttributeNodeIngressAclEntriesIngressAclEntry["EntryType"].asString();
		if(!networkAclAttributeNodeIngressAclEntriesIngressAclEntry["NetworkAclEntryName"].isNull())
			ingressAclEntryObject.networkAclEntryName = networkAclAttributeNodeIngressAclEntriesIngressAclEntry["NetworkAclEntryName"].asString();
		if(!networkAclAttributeNodeIngressAclEntriesIngressAclEntry["Description"].isNull())
			ingressAclEntryObject.description = networkAclAttributeNodeIngressAclEntriesIngressAclEntry["Description"].asString();
		networkAclAttribute_.ingressAclEntries.push_back(ingressAclEntryObject);
	}
	auto allEgressAclEntriesNode = networkAclAttributeNode["EgressAclEntries"]["EgressAclEntry"];
	for (auto networkAclAttributeNodeEgressAclEntriesEgressAclEntry : allEgressAclEntriesNode)
	{
		NetworkAclAttribute::EgressAclEntry egressAclEntryObject;
		if(!networkAclAttributeNodeEgressAclEntriesEgressAclEntry["NetworkAclEntryId"].isNull())
			egressAclEntryObject.networkAclEntryId = networkAclAttributeNodeEgressAclEntriesEgressAclEntry["NetworkAclEntryId"].asString();
		if(!networkAclAttributeNodeEgressAclEntriesEgressAclEntry["Policy"].isNull())
			egressAclEntryObject.policy = networkAclAttributeNodeEgressAclEntriesEgressAclEntry["Policy"].asString();
		if(!networkAclAttributeNodeEgressAclEntriesEgressAclEntry["Protocol"].isNull())
			egressAclEntryObject.protocol = networkAclAttributeNodeEgressAclEntriesEgressAclEntry["Protocol"].asString();
		if(!networkAclAttributeNodeEgressAclEntriesEgressAclEntry["DestinationCidrIp"].isNull())
			egressAclEntryObject.destinationCidrIp = networkAclAttributeNodeEgressAclEntriesEgressAclEntry["DestinationCidrIp"].asString();
		if(!networkAclAttributeNodeEgressAclEntriesEgressAclEntry["Port"].isNull())
			egressAclEntryObject.port = networkAclAttributeNodeEgressAclEntriesEgressAclEntry["Port"].asString();
		if(!networkAclAttributeNodeEgressAclEntriesEgressAclEntry["EntryType"].isNull())
			egressAclEntryObject.entryType = networkAclAttributeNodeEgressAclEntriesEgressAclEntry["EntryType"].asString();
		if(!networkAclAttributeNodeEgressAclEntriesEgressAclEntry["Description"].isNull())
			egressAclEntryObject.description = networkAclAttributeNodeEgressAclEntriesEgressAclEntry["Description"].asString();
		if(!networkAclAttributeNodeEgressAclEntriesEgressAclEntry["NetworkAclEntryName"].isNull())
			egressAclEntryObject.networkAclEntryName = networkAclAttributeNodeEgressAclEntriesEgressAclEntry["NetworkAclEntryName"].asString();
		networkAclAttribute_.egressAclEntries.push_back(egressAclEntryObject);
	}
	auto allResourcesNode = networkAclAttributeNode["Resources"]["Resource"];
	for (auto networkAclAttributeNodeResourcesResource : allResourcesNode)
	{
		NetworkAclAttribute::Resource resourceObject;
		if(!networkAclAttributeNodeResourcesResource["ResourceId"].isNull())
			resourceObject.resourceId = networkAclAttributeNodeResourcesResource["ResourceId"].asString();
		if(!networkAclAttributeNodeResourcesResource["ResourceType"].isNull())
			resourceObject.resourceType = networkAclAttributeNodeResourcesResource["ResourceType"].asString();
		if(!networkAclAttributeNodeResourcesResource["Status"].isNull())
			resourceObject.status = networkAclAttributeNodeResourcesResource["Status"].asString();
		networkAclAttribute_.resources.push_back(resourceObject);
	}
	if(!value["NetworkAclId"].isNull())
		networkAclId_ = value["NetworkAclId"].asString();

}

std::string CreateNetworkAclResult::getNetworkAclId()const
{
	return networkAclId_;
}

CreateNetworkAclResult::NetworkAclAttribute CreateNetworkAclResult::getNetworkAclAttribute()const
{
	return networkAclAttribute_;
}

