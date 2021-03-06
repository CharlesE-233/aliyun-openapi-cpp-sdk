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

#include <alibabacloud/emr/model/RunClusterServiceActionRequest.h>

using AlibabaCloud::Emr::Model::RunClusterServiceActionRequest;

RunClusterServiceActionRequest::RunClusterServiceActionRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RunClusterServiceAction")
{}

RunClusterServiceActionRequest::~RunClusterServiceActionRequest()
{}

std::vector<std::string> RunClusterServiceActionRequest::getHostGroupIdList()const
{
	return hostGroupIdList_;
}

void RunClusterServiceActionRequest::setHostGroupIdList(const std::vector<std::string>& hostGroupIdList)
{
	hostGroupIdList_ = hostGroupIdList;
	for(int i = 0; i!= hostGroupIdList.size(); i++)
		setCoreParameter("HostGroupIdList."+ std::to_string(i), hostGroupIdList.at(i));
}

long RunClusterServiceActionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RunClusterServiceActionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RunClusterServiceActionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RunClusterServiceActionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RunClusterServiceActionRequest::getRegionId()const
{
	return regionId_;
}

void RunClusterServiceActionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RunClusterServiceActionRequest::getServiceActionName()const
{
	return serviceActionName_;
}

void RunClusterServiceActionRequest::setServiceActionName(const std::string& serviceActionName)
{
	serviceActionName_ = serviceActionName;
	setCoreParameter("ServiceActionName", serviceActionName);
}

bool RunClusterServiceActionRequest::getIsRolling()const
{
	return isRolling_;
}

void RunClusterServiceActionRequest::setIsRolling(bool isRolling)
{
	isRolling_ = isRolling;
	setCoreParameter("IsRolling", isRolling ? "true" : "false");
}

int RunClusterServiceActionRequest::getTotlerateFailCount()const
{
	return totlerateFailCount_;
}

void RunClusterServiceActionRequest::setTotlerateFailCount(int totlerateFailCount)
{
	totlerateFailCount_ = totlerateFailCount;
	setCoreParameter("TotlerateFailCount", std::to_string(totlerateFailCount));
}

std::string RunClusterServiceActionRequest::getServiceName()const
{
	return serviceName_;
}

void RunClusterServiceActionRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

std::string RunClusterServiceActionRequest::getExecuteStrategy()const
{
	return executeStrategy_;
}

void RunClusterServiceActionRequest::setExecuteStrategy(const std::string& executeStrategy)
{
	executeStrategy_ = executeStrategy;
	setCoreParameter("ExecuteStrategy", executeStrategy);
}

bool RunClusterServiceActionRequest::getOnlyRestartStaleConfigNodes()const
{
	return onlyRestartStaleConfigNodes_;
}

void RunClusterServiceActionRequest::setOnlyRestartStaleConfigNodes(bool onlyRestartStaleConfigNodes)
{
	onlyRestartStaleConfigNodes_ = onlyRestartStaleConfigNodes;
	setCoreParameter("OnlyRestartStaleConfigNodes", onlyRestartStaleConfigNodes ? "true" : "false");
}

int RunClusterServiceActionRequest::getNodeCountPerBatch()const
{
	return nodeCountPerBatch_;
}

void RunClusterServiceActionRequest::setNodeCountPerBatch(int nodeCountPerBatch)
{
	nodeCountPerBatch_ = nodeCountPerBatch;
	setCoreParameter("NodeCountPerBatch", std::to_string(nodeCountPerBatch));
}

std::string RunClusterServiceActionRequest::getClusterId()const
{
	return clusterId_;
}

void RunClusterServiceActionRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string RunClusterServiceActionRequest::getCustomCommand()const
{
	return customCommand_;
}

void RunClusterServiceActionRequest::setCustomCommand(const std::string& customCommand)
{
	customCommand_ = customCommand;
	setCoreParameter("CustomCommand", customCommand);
}

std::string RunClusterServiceActionRequest::getComponentNameList()const
{
	return componentNameList_;
}

void RunClusterServiceActionRequest::setComponentNameList(const std::string& componentNameList)
{
	componentNameList_ = componentNameList;
	setCoreParameter("ComponentNameList", componentNameList);
}

std::string RunClusterServiceActionRequest::getComment()const
{
	return comment_;
}

void RunClusterServiceActionRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setCoreParameter("Comment", comment);
}

std::string RunClusterServiceActionRequest::getCustomParams()const
{
	return customParams_;
}

void RunClusterServiceActionRequest::setCustomParams(const std::string& customParams)
{
	customParams_ = customParams;
	setCoreParameter("CustomParams", customParams);
}

long RunClusterServiceActionRequest::getInterval()const
{
	return interval_;
}

void RunClusterServiceActionRequest::setInterval(long interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

std::string RunClusterServiceActionRequest::getHostIdList()const
{
	return hostIdList_;
}

void RunClusterServiceActionRequest::setHostIdList(const std::string& hostIdList)
{
	hostIdList_ = hostIdList;
	setCoreParameter("HostIdList", hostIdList);
}

bool RunClusterServiceActionRequest::getTurnOnMaintenanceMode()const
{
	return turnOnMaintenanceMode_;
}

void RunClusterServiceActionRequest::setTurnOnMaintenanceMode(bool turnOnMaintenanceMode)
{
	turnOnMaintenanceMode_ = turnOnMaintenanceMode;
	setCoreParameter("TurnOnMaintenanceMode", turnOnMaintenanceMode ? "true" : "false");
}

