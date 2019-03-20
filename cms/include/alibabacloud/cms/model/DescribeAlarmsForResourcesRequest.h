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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSFORRESOURCESREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSFORRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeAlarmsForResourcesRequest : public RpcServiceRequest
			{

			public:
				DescribeAlarmsForResourcesRequest();
				~DescribeAlarmsForResourcesRequest();

				bool getEnableState()const;
				void setEnableState(bool enableState);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getAlertState()const;
				void setAlertState(const std::string& alertState);
				std::string getPage()const;
				void setPage(const std::string& page);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				std::string getDimensions()const;
				void setDimensions(const std::string& dimensions);

            private:
				bool enableState_;
				std::string groupId_;
				std::string _namespace_;
				std::string pageSize_;
				std::string alertState_;
				std::string page_;
				std::string metricName_;
				std::string dimensions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEALARMSFORRESOURCESREQUEST_H_