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

#include <alibabacloud/green/model/DescribeKeywordRequest.h>

using AlibabaCloud::Green::Model::DescribeKeywordRequest;

DescribeKeywordRequest::DescribeKeywordRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeKeyword")
{}

DescribeKeywordRequest::~DescribeKeywordRequest()
{}

std::string DescribeKeywordRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeKeywordRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int DescribeKeywordRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeKeywordRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeKeywordRequest::getLang()const
{
	return lang_;
}

void DescribeKeywordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeKeywordRequest::getKeyword()const
{
	return keyword_;
}

void DescribeKeywordRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setCoreParameter("Keyword", keyword);
}

int DescribeKeywordRequest::getTotalCount()const
{
	return totalCount_;
}

void DescribeKeywordRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", std::to_string(totalCount));
}

int DescribeKeywordRequest::getKeywordLibId()const
{
	return keywordLibId_;
}

void DescribeKeywordRequest::setKeywordLibId(int keywordLibId)
{
	keywordLibId_ = keywordLibId;
	setCoreParameter("KeywordLibId", std::to_string(keywordLibId));
}

int DescribeKeywordRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeKeywordRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

