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

#include <alibabacloud/cloudapi/model/DescribeAppSecurityRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeAppSecurityRequest;

DescribeAppSecurityRequest::DescribeAppSecurityRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeAppSecurity")
{}

DescribeAppSecurityRequest::~DescribeAppSecurityRequest()
{}

std::string DescribeAppSecurityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAppSecurityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAppSecurityRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAppSecurityRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

long DescribeAppSecurityRequest::getAppId()const
{
	return appId_;
}

void DescribeAppSecurityRequest::setAppId(long appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::vector<DescribeAppSecurityRequest::Tag> DescribeAppSecurityRequest::getTag()const
{
	return tag_;
}

void DescribeAppSecurityRequest::setTag(const std::vector<Tag>& tag)
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

