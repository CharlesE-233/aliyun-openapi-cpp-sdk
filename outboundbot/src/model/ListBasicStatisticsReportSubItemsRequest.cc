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

#include <alibabacloud/outboundbot/model/ListBasicStatisticsReportSubItemsRequest.h>

using AlibabaCloud::OutboundBot::Model::ListBasicStatisticsReportSubItemsRequest;

ListBasicStatisticsReportSubItemsRequest::ListBasicStatisticsReportSubItemsRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ListBasicStatisticsReportSubItems")
{
	setMethod(HttpRequest::Method::Post);
}

ListBasicStatisticsReportSubItemsRequest::~ListBasicStatisticsReportSubItemsRequest()
{}

std::string ListBasicStatisticsReportSubItemsRequest::getTitle()const
{
	return title_;
}

void ListBasicStatisticsReportSubItemsRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

int ListBasicStatisticsReportSubItemsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListBasicStatisticsReportSubItemsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListBasicStatisticsReportSubItemsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListBasicStatisticsReportSubItemsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListBasicStatisticsReportSubItemsRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void ListBasicStatisticsReportSubItemsRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

int ListBasicStatisticsReportSubItemsRequest::getPageSize()const
{
	return pageSize_;
}

void ListBasicStatisticsReportSubItemsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

