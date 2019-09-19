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

#include <alibabacloud/aegis/model/DescribeCustomizeReportChartListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeCustomizeReportChartListResult::DescribeCustomizeReportChartListResult() :
	ServiceResult()
{}

DescribeCustomizeReportChartListResult::DescribeCustomizeReportChartListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCustomizeReportChartListResult::~DescribeCustomizeReportChartListResult()
{}

void DescribeCustomizeReportChartListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allChartListNode = value["ChartList"]["chart"];
	for (auto valueChartListchart : allChartListNode)
	{
		Chart chartListObject;
		if(!valueChartListchart["ChartId"].isNull())
			chartListObject.chartId = valueChartListchart["ChartId"].asString();
		if(!valueChartListchart["ChartName"].isNull())
			chartListObject.chartName = valueChartListchart["ChartName"].asString();
		if(!valueChartListchart["Area"].isNull())
			chartListObject.area = valueChartListchart["Area"].asString();
		chartList_.push_back(chartListObject);
	}

}

std::vector<DescribeCustomizeReportChartListResult::Chart> DescribeCustomizeReportChartListResult::getChartList()const
{
	return chartList_;
}

