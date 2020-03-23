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

#ifndef ALIBABACLOUD_RDS_MODEL_UPGRADEDBPROXYINSTANCEKERNELVERSIONREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_UPGRADEDBPROXYINSTANCEKERNELVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT UpgradeDBProxyInstanceKernelVersionRequest : public RpcServiceRequest
			{

			public:
				UpgradeDBProxyInstanceKernelVersionRequest();
				~UpgradeDBProxyInstanceKernelVersionRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getUpgradeTime()const;
				void setUpgradeTime(const std::string& upgradeTime);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getSwitchTime()const;
				void setSwitchTime(const std::string& switchTime);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string accessKeyId_;
				std::string upgradeTime_;
				std::string dBInstanceId_;
				std::string switchTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_UPGRADEDBPROXYINSTANCEKERNELVERSIONREQUEST_H_