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

#include <alibabacloud/iot/model/DeleteRuleRequest.h>

using AlibabaCloud::Iot::Model::DeleteRuleRequest;

DeleteRuleRequest::DeleteRuleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteRule")
{}

DeleteRuleRequest::~DeleteRuleRequest()
{}

std::string DeleteRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteRuleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteRuleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

long DeleteRuleRequest::getRuleId()const
{
	return ruleId_;
}

void DeleteRuleRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

