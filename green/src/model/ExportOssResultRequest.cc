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

#include <alibabacloud/green/model/ExportOssResultRequest.h>

using AlibabaCloud::Green::Model::ExportOssResultRequest;

ExportOssResultRequest::ExportOssResultRequest() :
	RpcServiceRequest("green", "2017-08-23", "ExportOssResult")
{}

ExportOssResultRequest::~ExportOssResultRequest()
{}

float ExportOssResultRequest::getMinScore()const
{
	return minScore_;
}

void ExportOssResultRequest::setMinScore(float minScore)
{
	minScore_ = minScore;
	setCoreParameter("MinScore", std::to_string(minScore));
}

float ExportOssResultRequest::getMaxScore()const
{
	return maxScore_;
}

void ExportOssResultRequest::setMaxScore(float maxScore)
{
	maxScore_ = maxScore;
	setCoreParameter("MaxScore", std::to_string(maxScore));
}

std::string ExportOssResultRequest::getStartDate()const
{
	return startDate_;
}

void ExportOssResultRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setCoreParameter("StartDate", startDate);
}

std::string ExportOssResultRequest::getScene()const
{
	return scene_;
}

void ExportOssResultRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setCoreParameter("Scene", scene);
}

std::string ExportOssResultRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExportOssResultRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int ExportOssResultRequest::getPageSize()const
{
	return pageSize_;
}

void ExportOssResultRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ExportOssResultRequest::getLang()const
{
	return lang_;
}

void ExportOssResultRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

bool ExportOssResultRequest::getStock()const
{
	return stock_;
}

void ExportOssResultRequest::setStock(bool stock)
{
	stock_ = stock;
	setCoreParameter("Stock", stock ? "true" : "false");
}

int ExportOssResultRequest::getTotalCount()const
{
	return totalCount_;
}

void ExportOssResultRequest::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
	setCoreParameter("TotalCount", std::to_string(totalCount));
}

std::string ExportOssResultRequest::getSuggestion()const
{
	return suggestion_;
}

void ExportOssResultRequest::setSuggestion(const std::string& suggestion)
{
	suggestion_ = suggestion;
	setCoreParameter("Suggestion", suggestion);
}

int ExportOssResultRequest::getCurrentPage()const
{
	return currentPage_;
}

void ExportOssResultRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string ExportOssResultRequest::getResourceType()const
{
	return resourceType_;
}

void ExportOssResultRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string ExportOssResultRequest::getBucket()const
{
	return bucket_;
}

void ExportOssResultRequest::setBucket(const std::string& bucket)
{
	bucket_ = bucket;
	setCoreParameter("Bucket", bucket);
}

std::string ExportOssResultRequest::getEndDate()const
{
	return endDate_;
}

void ExportOssResultRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setCoreParameter("EndDate", endDate);
}

