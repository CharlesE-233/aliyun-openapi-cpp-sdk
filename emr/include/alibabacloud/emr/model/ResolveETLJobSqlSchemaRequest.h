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

#ifndef ALIBABACLOUD_EMR_MODEL_RESOLVEETLJOBSQLSCHEMAREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_RESOLVEETLJOBSQLSCHEMAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ResolveETLJobSqlSchemaRequest : public RpcServiceRequest
			{

			public:
				ResolveETLJobSqlSchemaRequest();
				~ResolveETLJobSqlSchemaRequest();

				std::string getStageName()const;
				void setStageName(const std::string& stageName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEtlJobId()const;
				void setEtlJobId(const std::string& etlJobId);
				std::string getDataSourceId()const;
				void setDataSourceId(const std::string& dataSourceId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSql()const;
				void setSql(const std::string& sql);

            private:
				std::string stageName_;
				long resourceOwnerId_;
				std::string regionId_;
				std::string etlJobId_;
				std::string dataSourceId_;
				std::string accessKeyId_;
				std::string sql_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_RESOLVEETLJOBSQLSCHEMAREQUEST_H_