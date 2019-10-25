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

#include <alibabacloud/bssopenapi/model/QueryCostUnitRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryCostUnitRequest;

QueryCostUnitRequest::QueryCostUnitRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryCostUnit")
{}

QueryCostUnitRequest::~QueryCostUnitRequest()
{}

long QueryCostUnitRequest::getParentUnitId()const
{
	return parentUnitId_;
}

void QueryCostUnitRequest::setParentUnitId(long parentUnitId)
{
	parentUnitId_ = parentUnitId;
	setCoreParameter("ParentUnitId", std::to_string(parentUnitId));
}

int QueryCostUnitRequest::getPageNum()const
{
	return pageNum_;
}

void QueryCostUnitRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

int QueryCostUnitRequest::getPageSize()const
{
	return pageSize_;
}

void QueryCostUnitRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long QueryCostUnitRequest::getOwnerUid()const
{
	return ownerUid_;
}

void QueryCostUnitRequest::setOwnerUid(long ownerUid)
{
	ownerUid_ = ownerUid;
	setCoreParameter("OwnerUid", std::to_string(ownerUid));
}
