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

#include <alibabacloud/iot/model/QueryDeviceGroupByTagsRequest.h>

using AlibabaCloud::Iot::Model::QueryDeviceGroupByTagsRequest;

QueryDeviceGroupByTagsRequest::QueryDeviceGroupByTagsRequest() :
	RpcServiceRequest("iot", "2018-01-20", "QueryDeviceGroupByTags")
{}

QueryDeviceGroupByTagsRequest::~QueryDeviceGroupByTagsRequest()
{}

int QueryDeviceGroupByTagsRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryDeviceGroupByTagsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryDeviceGroupByTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryDeviceGroupByTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QueryDeviceGroupByTagsRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void QueryDeviceGroupByTagsRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

int QueryDeviceGroupByTagsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDeviceGroupByTagsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<QueryDeviceGroupByTagsRequest::Tag> QueryDeviceGroupByTagsRequest::getTag()const
{
	return tag_;
}

void QueryDeviceGroupByTagsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".TagValue", obj.tagValue);
		setCoreParameter(str + ".TagKey", obj.tagKey);
	}
}

