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

#include <alibabacloud/r-kvstore/model/DescribeAccountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeAccountsResult::DescribeAccountsResult() :
	ServiceResult()
{}

DescribeAccountsResult::DescribeAccountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountsResult::~DescribeAccountsResult()
{}

void DescribeAccountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccountsNode = value["Accounts"]["Account"];
	for (auto valueAccountsAccount : allAccountsNode)
	{
		Account accountsObject;
		if(!valueAccountsAccount["InstanceId"].isNull())
			accountsObject.instanceId = valueAccountsAccount["InstanceId"].asString();
		if(!valueAccountsAccount["AccountName"].isNull())
			accountsObject.accountName = valueAccountsAccount["AccountName"].asString();
		if(!valueAccountsAccount["AccountStatus"].isNull())
			accountsObject.accountStatus = valueAccountsAccount["AccountStatus"].asString();
		if(!valueAccountsAccount["AccountType"].isNull())
			accountsObject.accountType = valueAccountsAccount["AccountType"].asString();
		if(!valueAccountsAccount["AccountDescription"].isNull())
			accountsObject.accountDescription = valueAccountsAccount["AccountDescription"].asString();
		if(!valueAccountsAccount["PrivExceeded"].isNull())
			accountsObject.privExceeded = valueAccountsAccount["PrivExceeded"].asString();
		auto allDatabasePrivilegesNode = allAccountsNode["DatabasePrivileges"]["DatabasePrivilege"];
		for (auto allAccountsNodeDatabasePrivilegesDatabasePrivilege : allDatabasePrivilegesNode)
		{
			Account::DatabasePrivilege databasePrivilegesObject;
			if(!allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].isNull())
				databasePrivilegesObject.accountPrivilege = allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilege"].asString();
			if(!allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilegeDetail"].isNull())
				databasePrivilegesObject.accountPrivilegeDetail = allAccountsNodeDatabasePrivilegesDatabasePrivilege["AccountPrivilegeDetail"].asString();
			accountsObject.databasePrivileges.push_back(databasePrivilegesObject);
		}
		accounts_.push_back(accountsObject);
	}

}

std::vector<DescribeAccountsResult::Account> DescribeAccountsResult::getAccounts()const
{
	return accounts_;
}

