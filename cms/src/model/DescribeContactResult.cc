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

#include <alibabacloud/cms/model/DescribeContactResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeContactResult::DescribeContactResult() :
	ServiceResult()
{}

DescribeContactResult::DescribeContactResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContactResult::~DescribeContactResult()
{}

void DescribeContactResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto datapointsNode = value["Datapoints"];
	if(!datapointsNode["Name"].isNull())
		datapoints_.name = datapointsNode["Name"].asString();
	auto allChannelsNode = datapointsNode["Channels"]["Channel"];
	for (auto datapointsNodeChannelsChannel : allChannelsNode)
	{
		Datapoints::Channel channelObject;
		if(!datapointsNodeChannelsChannel["Type"].isNull())
			channelObject.type = datapointsNodeChannelsChannel["Type"].asString();
		if(!datapointsNodeChannelsChannel["Value"].isNull())
			channelObject.value = datapointsNodeChannelsChannel["Value"].asString();
		datapoints_.channels.push_back(channelObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeContactResult::getMessage()const
{
	return message_;
}

DescribeContactResult::Datapoints DescribeContactResult::getDatapoints()const
{
	return datapoints_;
}

int DescribeContactResult::getCode()const
{
	return code_;
}

bool DescribeContactResult::getSuccess()const
{
	return success_;
}

