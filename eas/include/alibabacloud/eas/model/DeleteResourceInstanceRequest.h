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

#ifndef ALIBABACLOUD_EAS_MODEL_DELETERESOURCEINSTANCEREQUEST_H_
#define ALIBABACLOUD_EAS_MODEL_DELETERESOURCEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT DeleteResourceInstanceRequest : public RoaServiceRequest
			{

			public:
				DeleteResourceInstanceRequest();
				~DeleteResourceInstanceRequest();

				std::string getCluster_id()const;
				void setCluster_id(const std::string& cluster_id);
				std::string getResource_name()const;
				void setResource_name(const std::string& resource_name);

            private:
				std::string cluster_id_;
				std::string resource_name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DELETERESOURCEINSTANCEREQUEST_H_