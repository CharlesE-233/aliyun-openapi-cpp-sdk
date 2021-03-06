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

#include <alibabacloud/dms-enterprise/model/GetUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetUserResult::GetUserResult() :
	ServiceResult()
{}

GetUserResult::GetUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserResult::~GetUserResult()
{}

void GetUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userNode = value["User"];
	if(!userNode["UserId"].isNull())
		user_.userId = userNode["UserId"].asString();
	if(!userNode["Uid"].isNull())
		user_.uid = std::stol(userNode["Uid"].asString());
	if(!userNode["NickName"].isNull())
		user_.nickName = userNode["NickName"].asString();
	if(!userNode["Mobile"].isNull())
		user_.mobile = userNode["Mobile"].asString();
	if(!userNode["ParentUid"].isNull())
		user_.parentUid = std::stol(userNode["ParentUid"].asString());
	if(!userNode["State"].isNull())
		user_.state = userNode["State"].asString();
		auto allRoleIdList = userNode["RoleIdList"]["RoleIds"];
		for (auto value : allRoleIdList)
			user_.roleIdList.push_back(value.asString());
		auto allRoleNameList = userNode["RoleNameList"]["RoleNames"];
		for (auto value : allRoleNameList)
			user_.roleNameList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetUserResult::User GetUserResult::getUser()const
{
	return user_;
}

std::string GetUserResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetUserResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetUserResult::getSuccess()const
{
	return success_;
}

