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

#include <alibabacloud/sddp/model/DescribeAccountDetailRequest.h>

using AlibabaCloud::Sddp::Model::DescribeAccountDetailRequest;

DescribeAccountDetailRequest::DescribeAccountDetailRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeAccountDetail")
{}

DescribeAccountDetailRequest::~DescribeAccountDetailRequest()
{}

long DescribeAccountDetailRequest::getUserId()const
{
	return userId_;
}

void DescribeAccountDetailRequest::setUserId(long userId)
{
	userId_ = userId;
	setCoreParameter("UserId", std::to_string(userId));
}

long DescribeAccountDetailRequest::getAccountTypeId()const
{
	return accountTypeId_;
}

void DescribeAccountDetailRequest::setAccountTypeId(long accountTypeId)
{
	accountTypeId_ = accountTypeId;
	setCoreParameter("AccountTypeId", std::to_string(accountTypeId));
}

std::string DescribeAccountDetailRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAccountDetailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string DescribeAccountDetailRequest::getLang()const
{
	return lang_;
}

void DescribeAccountDetailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

