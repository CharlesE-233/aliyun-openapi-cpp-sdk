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

#include <alibabacloud/cloudwf/model/GetStaRunHistoryTimeSerRequest.h>

using AlibabaCloud::Cloudwf::Model::GetStaRunHistoryTimeSerRequest;

GetStaRunHistoryTimeSerRequest::GetStaRunHistoryTimeSerRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "GetStaRunHistoryTimeSer")
{}

GetStaRunHistoryTimeSerRequest::~GetStaRunHistoryTimeSerRequest()
{}

std::string GetStaRunHistoryTimeSerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetStaRunHistoryTimeSerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long GetStaRunHistoryTimeSerRequest::getId()const
{
	return id_;
}

void GetStaRunHistoryTimeSerRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

