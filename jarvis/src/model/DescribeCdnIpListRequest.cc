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

#include <alibabacloud/jarvis/model/DescribeCdnIpListRequest.h>

using AlibabaCloud::Jarvis::Model::DescribeCdnIpListRequest;

DescribeCdnIpListRequest::DescribeCdnIpListRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DescribeCdnIpList")
{}

DescribeCdnIpListRequest::~DescribeCdnIpListRequest()
{}

std::string DescribeCdnIpListRequest::getSrcIP()const
{
	return srcIP_;
}

void DescribeCdnIpListRequest::setSrcIP(const std::string& srcIP)
{
	srcIP_ = srcIP;
	setCoreParameter("SrcIP", srcIP);
}

int DescribeCdnIpListRequest::getWlState()const
{
	return wlState_;
}

void DescribeCdnIpListRequest::setWlState(int wlState)
{
	wlState_ = wlState;
	setCoreParameter("WlState", std::to_string(wlState));
}

std::string DescribeCdnIpListRequest::getSourceCode()const
{
	return sourceCode_;
}

void DescribeCdnIpListRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setCoreParameter("SourceCode", sourceCode);
}

std::string DescribeCdnIpListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCdnIpListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeCdnIpListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCdnIpListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCdnIpListRequest::getLang()const
{
	return lang_;
}

void DescribeCdnIpListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

int DescribeCdnIpListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCdnIpListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

