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

#include <alibabacloud/rds/model/ModifyDBProxyRequest.h>

using AlibabaCloud::Rds::Model::ModifyDBProxyRequest;

ModifyDBProxyRequest::ModifyDBProxyRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBProxy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBProxyRequest::~ModifyDBProxyRequest()
{}

long ModifyDBProxyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBProxyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBProxyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBProxyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBProxyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBProxyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyDBProxyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBProxyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBProxyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBProxyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifyDBProxyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBProxyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBProxyRequest::getDBProxyInstanceNum()const
{
	return dBProxyInstanceNum_;
}

void ModifyDBProxyRequest::setDBProxyInstanceNum(const std::string& dBProxyInstanceNum)
{
	dBProxyInstanceNum_ = dBProxyInstanceNum;
	setParameter("DBProxyInstanceNum", dBProxyInstanceNum);
}

std::string ModifyDBProxyRequest::getConfigDBProxyService()const
{
	return configDBProxyService_;
}

void ModifyDBProxyRequest::setConfigDBProxyService(const std::string& configDBProxyService)
{
	configDBProxyService_ = configDBProxyService;
	setParameter("ConfigDBProxyService", configDBProxyService);
}

std::string ModifyDBProxyRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyDBProxyRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string ModifyDBProxyRequest::getVPCId()const
{
	return vPCId_;
}

void ModifyDBProxyRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setParameter("VPCId", vPCId);
}

std::string ModifyDBProxyRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void ModifyDBProxyRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setParameter("InstanceNetworkType", instanceNetworkType);
}

