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

#include <alibabacloud/mts/model/AddMediaRequest.h>

using AlibabaCloud::Mts::Model::AddMediaRequest;

AddMediaRequest::AddMediaRequest() :
	RpcServiceRequest("mts", "2014-06-18", "AddMedia")
{}

AddMediaRequest::~AddMediaRequest()
{}

long AddMediaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddMediaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddMediaRequest::getDescription()const
{
	return description_;
}

void AddMediaRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string AddMediaRequest::getTitle()const
{
	return title_;
}

void AddMediaRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", title);
}

bool AddMediaRequest::getInputUnbind()const
{
	return inputUnbind_;
}

void AddMediaRequest::setInputUnbind(bool inputUnbind)
{
	inputUnbind_ = inputUnbind;
	setCoreParameter("InputUnbind", inputUnbind ? "true" : "false");
}

std::string AddMediaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddMediaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddMediaRequest::getCoverURL()const
{
	return coverURL_;
}

void AddMediaRequest::setCoverURL(const std::string& coverURL)
{
	coverURL_ = coverURL;
	setCoreParameter("CoverURL", coverURL);
}

long AddMediaRequest::getCateId()const
{
	return cateId_;
}

void AddMediaRequest::setCateId(long cateId)
{
	cateId_ = cateId;
	setCoreParameter("CateId", std::to_string(cateId));
}

std::string AddMediaRequest::getMediaWorkflowId()const
{
	return mediaWorkflowId_;
}

void AddMediaRequest::setMediaWorkflowId(const std::string& mediaWorkflowId)
{
	mediaWorkflowId_ = mediaWorkflowId;
	setCoreParameter("MediaWorkflowId", mediaWorkflowId);
}

std::string AddMediaRequest::getMediaWorkflowUserData()const
{
	return mediaWorkflowUserData_;
}

void AddMediaRequest::setMediaWorkflowUserData(const std::string& mediaWorkflowUserData)
{
	mediaWorkflowUserData_ = mediaWorkflowUserData;
	setCoreParameter("MediaWorkflowUserData", mediaWorkflowUserData);
}

std::string AddMediaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddMediaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddMediaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddMediaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddMediaRequest::getOverrideParams()const
{
	return overrideParams_;
}

void AddMediaRequest::setOverrideParams(const std::string& overrideParams)
{
	overrideParams_ = overrideParams;
	setCoreParameter("OverrideParams", overrideParams);
}

long AddMediaRequest::getOwnerId()const
{
	return ownerId_;
}

void AddMediaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddMediaRequest::getTags()const
{
	return tags_;
}

void AddMediaRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string AddMediaRequest::getFileURL()const
{
	return fileURL_;
}

void AddMediaRequest::setFileURL(const std::string& fileURL)
{
	fileURL_ = fileURL;
	setCoreParameter("FileURL", fileURL);
}

