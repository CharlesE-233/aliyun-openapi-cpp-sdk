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

#include <alibabacloud/live/model/AddLiveSnapshotDetectPornConfigRequest.h>

using AlibabaCloud::Live::Model::AddLiveSnapshotDetectPornConfigRequest;

AddLiveSnapshotDetectPornConfigRequest::AddLiveSnapshotDetectPornConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddLiveSnapshotDetectPornConfig")
{}

AddLiveSnapshotDetectPornConfigRequest::~AddLiveSnapshotDetectPornConfigRequest()
{}

std::string AddLiveSnapshotDetectPornConfigRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void AddLiveSnapshotDetectPornConfigRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setCoreParameter("OssEndpoint", ossEndpoint);
}

std::string AddLiveSnapshotDetectPornConfigRequest::getOssObject()const
{
	return ossObject_;
}

void AddLiveSnapshotDetectPornConfigRequest::setOssObject(const std::string& ossObject)
{
	ossObject_ = ossObject;
	setCoreParameter("OssObject", ossObject);
}

std::vector<std::string> AddLiveSnapshotDetectPornConfigRequest::getScene()const
{
	return scene_;
}

void AddLiveSnapshotDetectPornConfigRequest::setScene(const std::vector<std::string>& scene)
{
	scene_ = scene;
	for(int i = 0; i!= scene.size(); i++)
		setCoreParameter("Scene."+ std::to_string(i), scene.at(i));
}

std::string AddLiveSnapshotDetectPornConfigRequest::getAppName()const
{
	return appName_;
}

void AddLiveSnapshotDetectPornConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string AddLiveSnapshotDetectPornConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveSnapshotDetectPornConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AddLiveSnapshotDetectPornConfigRequest::getOssBucket()const
{
	return ossBucket_;
}

void AddLiveSnapshotDetectPornConfigRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setCoreParameter("OssBucket", ossBucket);
}

std::string AddLiveSnapshotDetectPornConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddLiveSnapshotDetectPornConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long AddLiveSnapshotDetectPornConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveSnapshotDetectPornConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int AddLiveSnapshotDetectPornConfigRequest::getInterval()const
{
	return interval_;
}

void AddLiveSnapshotDetectPornConfigRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

