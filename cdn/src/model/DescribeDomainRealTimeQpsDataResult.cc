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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeQpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainRealTimeQpsDataResult::DescribeDomainRealTimeQpsDataResult() :
	ServiceResult()
{}

DescribeDomainRealTimeQpsDataResult::DescribeDomainRealTimeQpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainRealTimeQpsDataResult::~DescribeDomainRealTimeQpsDataResult()
{}

void DescribeDomainRealTimeQpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["QpsModel"];
	for (auto valueDataQpsModel : allDataNode)
	{
		QpsModel dataObject;
		if(!valueDataQpsModel["Qps"].isNull())
			dataObject.qps = std::stof(valueDataQpsModel["Qps"].asString());
		if(!valueDataQpsModel["TimeStamp"].isNull())
			dataObject.timeStamp = valueDataQpsModel["TimeStamp"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeDomainRealTimeQpsDataResult::QpsModel> DescribeDomainRealTimeQpsDataResult::getData()const
{
	return data_;
}

