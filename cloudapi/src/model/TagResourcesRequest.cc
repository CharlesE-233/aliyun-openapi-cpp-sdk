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

#include <alibabacloud/cloudapi/model/TagResourcesRequest.h>

using AlibabaCloud::CloudAPI::Model::TagResourcesRequest;

TagResourcesRequest::TagResourcesRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "TagResources")
{}

TagResourcesRequest::~TagResourcesRequest()
{}

std::vector<std::string> TagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void TagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int i = 0; i!= resourceId.size(); i++)
		setCoreParameter("ResourceId."+ std::to_string(i), resourceId.at(i));
}

std::string TagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void TagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string TagResourcesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void TagResourcesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string TagResourcesRequest::getSecurityToken()const
{
	return securityToken_;
}

void TagResourcesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::vector<TagResourcesRequest::Tag> TagResourcesRequest::getTag()const
{
	return tag_;
}

void TagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

