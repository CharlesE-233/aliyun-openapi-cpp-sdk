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

#include <alibabacloud/slb/model/ModifyVServerGroupBackendServersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

ModifyVServerGroupBackendServersResult::ModifyVServerGroupBackendServersResult() :
	ServiceResult()
{}

ModifyVServerGroupBackendServersResult::ModifyVServerGroupBackendServersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyVServerGroupBackendServersResult::~ModifyVServerGroupBackendServersResult()
{}

void ModifyVServerGroupBackendServersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackendServersNode = value["BackendServers"]["BackendServer"];
	for (auto valueBackendServersBackendServer : allBackendServersNode)
	{
		BackendServer backendServersObject;
		if(!valueBackendServersBackendServer["ServerId"].isNull())
			backendServersObject.serverId = valueBackendServersBackendServer["ServerId"].asString();
		if(!valueBackendServersBackendServer["Port"].isNull())
			backendServersObject.port = std::stoi(valueBackendServersBackendServer["Port"].asString());
		if(!valueBackendServersBackendServer["Weight"].isNull())
			backendServersObject.weight = std::stoi(valueBackendServersBackendServer["Weight"].asString());
		if(!valueBackendServersBackendServer["Type"].isNull())
			backendServersObject.type = valueBackendServersBackendServer["Type"].asString();
		if(!valueBackendServersBackendServer["ServerIp"].isNull())
			backendServersObject.serverIp = valueBackendServersBackendServer["ServerIp"].asString();
		if(!valueBackendServersBackendServer["VpcId"].isNull())
			backendServersObject.vpcId = valueBackendServersBackendServer["VpcId"].asString();
		if(!valueBackendServersBackendServer["Description"].isNull())
			backendServersObject.description = valueBackendServersBackendServer["Description"].asString();
		backendServers_.push_back(backendServersObject);
	}
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();

}

std::string ModifyVServerGroupBackendServersResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

std::vector<ModifyVServerGroupBackendServersResult::BackendServer> ModifyVServerGroupBackendServersResult::getBackendServers()const
{
	return backendServers_;
}

