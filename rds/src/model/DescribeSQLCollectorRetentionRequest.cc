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

#include <alibabacloud/rds/model/DescribeSQLCollectorRetentionRequest.h>

using AlibabaCloud::Rds::Model::DescribeSQLCollectorRetentionRequest;

DescribeSQLCollectorRetentionRequest::DescribeSQLCollectorRetentionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeSQLCollectorRetention")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSQLCollectorRetentionRequest::~DescribeSQLCollectorRetentionRequest()
{}

long DescribeSQLCollectorRetentionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSQLCollectorRetentionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSQLCollectorRetentionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSQLCollectorRetentionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSQLCollectorRetentionRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSQLCollectorRetentionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSQLCollectorRetentionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeSQLCollectorRetentionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeSQLCollectorRetentionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSQLCollectorRetentionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSQLCollectorRetentionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSQLCollectorRetentionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSQLCollectorRetentionRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSQLCollectorRetentionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

