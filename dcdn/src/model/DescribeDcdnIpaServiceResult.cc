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

#include <alibabacloud/dcdn/model/DescribeDcdnIpaServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnIpaServiceResult::DescribeDcdnIpaServiceResult() :
	ServiceResult()
{}

DescribeDcdnIpaServiceResult::DescribeDcdnIpaServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnIpaServiceResult::~DescribeDcdnIpaServiceResult()
{}

void DescribeDcdnIpaServiceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allOperationLocks = value["OperationLocks"]["LockReason"];
	for (auto value : allOperationLocks)
	{
		LockReason operationLocksObject;
		if(!value["LockReason"].isNull())
			operationLocksObject.lockReason = value["LockReason"].asString();
		operationLocks_.push_back(operationLocksObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["InternetChargeType"].isNull())
		internetChargeType_ = value["InternetChargeType"].asString();
	if(!value["OpeningTime"].isNull())
		openingTime_ = value["OpeningTime"].asString();
	if(!value["ChangingChargeType"].isNull())
		changingChargeType_ = value["ChangingChargeType"].asString();
	if(!value["ChangingAffectTime"].isNull())
		changingAffectTime_ = value["ChangingAffectTime"].asString();

}

std::string DescribeDcdnIpaServiceResult::getChangingChargeType()const
{
	return changingChargeType_;
}

std::string DescribeDcdnIpaServiceResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeDcdnIpaServiceResult::getOpeningTime()const
{
	return openingTime_;
}

std::vector<DescribeDcdnIpaServiceResult::LockReason> DescribeDcdnIpaServiceResult::getOperationLocks()const
{
	return operationLocks_;
}

std::string DescribeDcdnIpaServiceResult::getChangingAffectTime()const
{
	return changingAffectTime_;
}

std::string DescribeDcdnIpaServiceResult::getInternetChargeType()const
{
	return internetChargeType_;
}
