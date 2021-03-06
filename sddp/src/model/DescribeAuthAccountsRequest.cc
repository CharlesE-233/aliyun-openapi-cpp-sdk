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

#include <alibabacloud/sddp/model/DescribeAuthAccountsRequest.h>

using AlibabaCloud::Sddp::Model::DescribeAuthAccountsRequest;

DescribeAuthAccountsRequest::DescribeAuthAccountsRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "DescribeAuthAccounts")
{}

DescribeAuthAccountsRequest::~DescribeAuthAccountsRequest()
{}

int DescribeAuthAccountsRequest::getFeatureType()const
{
	return featureType_;
}

void DescribeAuthAccountsRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setCoreParameter("FeatureType", std::to_string(featureType));
}

int DescribeAuthAccountsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeAuthAccountsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeAuthAccountsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeAuthAccountsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeAuthAccountsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAuthAccountsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAuthAccountsRequest::getLang()const
{
	return lang_;
}

void DescribeAuthAccountsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

