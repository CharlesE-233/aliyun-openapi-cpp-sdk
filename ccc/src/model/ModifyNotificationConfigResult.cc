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

#include <alibabacloud/ccc/model/ModifyNotificationConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ModifyNotificationConfigResult::ModifyNotificationConfigResult() :
	ServiceResult()
{}

ModifyNotificationConfigResult::ModifyNotificationConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyNotificationConfigResult::~ModifyNotificationConfigResult()
{}

void ModifyNotificationConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSubscriptionsNode = value["Subscriptions"]["SubscriptionsItem"];
	for (auto valueSubscriptionsSubscriptionsItem : allSubscriptionsNode)
	{
		SubscriptionsItem subscriptionsObject;
		if(!valueSubscriptionsSubscriptionsItem["Name"].isNull())
			subscriptionsObject.name = valueSubscriptionsSubscriptionsItem["Name"].asString();
		if(!valueSubscriptionsSubscriptionsItem["Selected"].isNull())
			subscriptionsObject.selected = valueSubscriptionsSubscriptionsItem["Selected"].asString() == "true";
		if(!valueSubscriptionsSubscriptionsItem["DisplayName"].isNull())
			subscriptionsObject.displayName = valueSubscriptionsSubscriptionsItem["DisplayName"].asString();
		subscriptions_.push_back(subscriptionsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ProducerId"].isNull())
		producerId_ = value["ProducerId"].asString();
	if(!value["AccessPoint"].isNull())
		accessPoint_ = value["AccessPoint"].asString();
	if(!value["Topic"].isNull())
		topic_ = value["Topic"].asString();

}

std::string ModifyNotificationConfigResult::getMessage()const
{
	return message_;
}

std::vector<ModifyNotificationConfigResult::SubscriptionsItem> ModifyNotificationConfigResult::getSubscriptions()const
{
	return subscriptions_;
}

std::string ModifyNotificationConfigResult::getProducerId()const
{
	return producerId_;
}

std::string ModifyNotificationConfigResult::getAccessPoint()const
{
	return accessPoint_;
}

int ModifyNotificationConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ModifyNotificationConfigResult::getTopic()const
{
	return topic_;
}

std::string ModifyNotificationConfigResult::getCode()const
{
	return code_;
}

bool ModifyNotificationConfigResult::getSuccess()const
{
	return success_;
}

