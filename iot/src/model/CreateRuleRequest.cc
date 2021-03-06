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

#include <alibabacloud/iot/model/CreateRuleRequest.h>

using AlibabaCloud::Iot::Model::CreateRuleRequest;

CreateRuleRequest::CreateRuleRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateRule")
{}

CreateRuleRequest::~CreateRuleRequest()
{}

std::string CreateRuleRequest::getSelect()const
{
	return select_;
}

void CreateRuleRequest::setSelect(const std::string& select)
{
	select_ = select;
	setCoreParameter("Select", select);
}

std::string CreateRuleRequest::getRuleDesc()const
{
	return ruleDesc_;
}

void CreateRuleRequest::setRuleDesc(const std::string& ruleDesc)
{
	ruleDesc_ = ruleDesc;
	setCoreParameter("RuleDesc", ruleDesc);
}

std::string CreateRuleRequest::getProductKey()const
{
	return productKey_;
}

void CreateRuleRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string CreateRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateRuleRequest::getShortTopic()const
{
	return shortTopic_;
}

void CreateRuleRequest::setShortTopic(const std::string& shortTopic)
{
	shortTopic_ = shortTopic;
	setCoreParameter("ShortTopic", shortTopic);
}

std::string CreateRuleRequest::getDataType()const
{
	return dataType_;
}

void CreateRuleRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setCoreParameter("DataType", dataType);
}

std::string CreateRuleRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateRuleRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string CreateRuleRequest::getName()const
{
	return name_;
}

void CreateRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateRuleRequest::getWhere()const
{
	return where_;
}

void CreateRuleRequest::setWhere(const std::string& where)
{
	where_ = where;
	setCoreParameter("Where", where);
}

int CreateRuleRequest::getTopicType()const
{
	return topicType_;
}

void CreateRuleRequest::setTopicType(int topicType)
{
	topicType_ = topicType;
	setCoreParameter("TopicType", std::to_string(topicType));
}

