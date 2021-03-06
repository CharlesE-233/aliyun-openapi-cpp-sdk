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

#include <alibabacloud/emr/model/CreateBackupPlanRequest.h>

using AlibabaCloud::Emr::Model::CreateBackupPlanRequest;

CreateBackupPlanRequest::CreateBackupPlanRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateBackupPlan")
{}

CreateBackupPlanRequest::~CreateBackupPlanRequest()
{}

long CreateBackupPlanRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupPlanRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateBackupPlanRequest::getDescription()const
{
	return description_;
}

void CreateBackupPlanRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateBackupPlanRequest::getClusterId()const
{
	return clusterId_;
}

void CreateBackupPlanRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateBackupPlanRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBackupPlanRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateBackupPlanRequest::getRegionId()const
{
	return regionId_;
}

void CreateBackupPlanRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateBackupPlanRequest::getName()const
{
	return name_;
}

void CreateBackupPlanRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateBackupPlanRequest::getRootPath()const
{
	return rootPath_;
}

void CreateBackupPlanRequest::setRootPath(const std::string& rootPath)
{
	rootPath_ = rootPath;
	setCoreParameter("RootPath", rootPath);
}

