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

#include <alibabacloud/vpc/model/ModifySslVpnClientCertRequest.h>

using AlibabaCloud::Vpc::Model::ModifySslVpnClientCertRequest;

ModifySslVpnClientCertRequest::ModifySslVpnClientCertRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifySslVpnClientCert")
{}

ModifySslVpnClientCertRequest::~ModifySslVpnClientCertRequest()
{}

long ModifySslVpnClientCertRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySslVpnClientCertRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySslVpnClientCertRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySslVpnClientCertRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifySslVpnClientCertRequest::getRegionId()const
{
	return regionId_;
}

void ModifySslVpnClientCertRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifySslVpnClientCertRequest::getSslVpnClientCertId()const
{
	return sslVpnClientCertId_;
}

void ModifySslVpnClientCertRequest::setSslVpnClientCertId(const std::string& sslVpnClientCertId)
{
	sslVpnClientCertId_ = sslVpnClientCertId;
	setCoreParameter("SslVpnClientCertId", sslVpnClientCertId);
}

std::string ModifySslVpnClientCertRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySslVpnClientCertRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySslVpnClientCertRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySslVpnClientCertRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifySslVpnClientCertRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySslVpnClientCertRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySslVpnClientCertRequest::getName()const
{
	return name_;
}

void ModifySslVpnClientCertRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

