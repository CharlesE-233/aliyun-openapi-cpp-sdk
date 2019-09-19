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

#include <alibabacloud/emr/model/GetJobInputStatisticInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetJobInputStatisticInfoResult::GetJobInputStatisticInfoResult() :
	ServiceResult()
{}

GetJobInputStatisticInfoResult::GetJobInputStatisticInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobInputStatisticInfoResult::~GetJobInputStatisticInfoResult()
{}

void GetJobInputStatisticInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobInputListNode = value["JobInputList"]["ClusterStatJobInput"];
	for (auto valueJobInputListClusterStatJobInput : allJobInputListNode)
	{
		ClusterStatJobInput jobInputListObject;
		if(!valueJobInputListClusterStatJobInput["ApplicationId"].isNull())
			jobInputListObject.applicationId = valueJobInputListClusterStatJobInput["ApplicationId"].asString();
		if(!valueJobInputListClusterStatJobInput["JobId"].isNull())
			jobInputListObject.jobId = valueJobInputListClusterStatJobInput["JobId"].asString();
		if(!valueJobInputListClusterStatJobInput["StartTime"].isNull())
			jobInputListObject.startTime = std::stol(valueJobInputListClusterStatJobInput["StartTime"].asString());
		if(!valueJobInputListClusterStatJobInput["FinishTime"].isNull())
			jobInputListObject.finishTime = std::stol(valueJobInputListClusterStatJobInput["FinishTime"].asString());
		if(!valueJobInputListClusterStatJobInput["Name"].isNull())
			jobInputListObject.name = valueJobInputListClusterStatJobInput["Name"].asString();
		if(!valueJobInputListClusterStatJobInput["Queue"].isNull())
			jobInputListObject.queue = valueJobInputListClusterStatJobInput["Queue"].asString();
		if(!valueJobInputListClusterStatJobInput["User"].isNull())
			jobInputListObject.user = valueJobInputListClusterStatJobInput["User"].asString();
		if(!valueJobInputListClusterStatJobInput["State"].isNull())
			jobInputListObject.state = valueJobInputListClusterStatJobInput["State"].asString();
		if(!valueJobInputListClusterStatJobInput["BytesInput"].isNull())
			jobInputListObject.bytesInput = std::stol(valueJobInputListClusterStatJobInput["BytesInput"].asString());
		jobInputList_.push_back(jobInputListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int GetJobInputStatisticInfoResult::getPageSize()const
{
	return pageSize_;
}

int GetJobInputStatisticInfoResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<GetJobInputStatisticInfoResult::ClusterStatJobInput> GetJobInputStatisticInfoResult::getJobInputList()const
{
	return jobInputList_;
}

int GetJobInputStatisticInfoResult::getTotal()const
{
	return total_;
}

