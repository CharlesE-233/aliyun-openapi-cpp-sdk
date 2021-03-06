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

#include <alibabacloud/afs/model/DescribeEarlyWarningRequest.h>

using AlibabaCloud::Afs::Model::DescribeEarlyWarningRequest;

DescribeEarlyWarningRequest::DescribeEarlyWarningRequest() :
	RpcServiceRequest("afs", "2018-01-12", "DescribeEarlyWarning")
{}

DescribeEarlyWarningRequest::~DescribeEarlyWarningRequest()
{}

std::string DescribeEarlyWarningRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeEarlyWarningRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

