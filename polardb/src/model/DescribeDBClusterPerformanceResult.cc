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

#include <alibabacloud/polardb/model/DescribeDBClusterPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBClusterPerformanceResult::DescribeDBClusterPerformanceResult() :
	ServiceResult()
{}

DescribeDBClusterPerformanceResult::DescribeDBClusterPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterPerformanceResult::~DescribeDBClusterPerformanceResult()
{}

void DescribeDBClusterPerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPerformanceKeysNode = value["PerformanceKeys"]["PerformanceItem"];
	for (auto valuePerformanceKeysPerformanceItem : allPerformanceKeysNode)
	{
		PerformanceItem performanceKeysObject;
		if(!valuePerformanceKeysPerformanceItem["DBNodeId"].isNull())
			performanceKeysObject.dBNodeId = valuePerformanceKeysPerformanceItem["DBNodeId"].asString();
		if(!valuePerformanceKeysPerformanceItem["Measurement"].isNull())
			performanceKeysObject.measurement = valuePerformanceKeysPerformanceItem["Measurement"].asString();
		if(!valuePerformanceKeysPerformanceItem["MetricName"].isNull())
			performanceKeysObject.metricName = valuePerformanceKeysPerformanceItem["MetricName"].asString();
		auto allPointsNode = allPerformanceKeysNode["Points"]["PerformanceItemValue"];
		for (auto allPerformanceKeysNodePointsPerformanceItemValue : allPointsNode)
		{
			PerformanceItem::PerformanceItemValue pointsObject;
			if(!allPerformanceKeysNodePointsPerformanceItemValue["Value"].isNull())
				pointsObject.value = allPerformanceKeysNodePointsPerformanceItemValue["Value"].asString();
			if(!allPerformanceKeysNodePointsPerformanceItemValue["Timestamp"].isNull())
				pointsObject.timestamp = std::stol(allPerformanceKeysNodePointsPerformanceItemValue["Timestamp"].asString());
			performanceKeysObject.points.push_back(pointsObject);
		}
		performanceKeys_.push_back(performanceKeysObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["DBType"].isNull())
		dBType_ = value["DBType"].asString();
	if(!value["DBVersion"].isNull())
		dBVersion_ = value["DBVersion"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::vector<DescribeDBClusterPerformanceResult::PerformanceItem> DescribeDBClusterPerformanceResult::getPerformanceKeys()const
{
	return performanceKeys_;
}

std::string DescribeDBClusterPerformanceResult::getDBVersion()const
{
	return dBVersion_;
}

std::string DescribeDBClusterPerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBClusterPerformanceResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::string DescribeDBClusterPerformanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDBClusterPerformanceResult::getDBType()const
{
	return dBType_;
}

std::string DescribeDBClusterPerformanceResult::getEngine()const
{
	return engine_;
}

