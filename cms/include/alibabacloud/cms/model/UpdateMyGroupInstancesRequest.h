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

#ifndef ALIBABACLOUD_CMS_MODEL_UPDATEMYGROUPINSTANCESREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_UPDATEMYGROUPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cms/CmsRequest.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT UpdateMyGroupInstancesRequest : public CmsRequest
			{

			public:
				UpdateMyGroupInstancesRequest();
				~UpdateMyGroupInstancesRequest();

				std::string getInstances()const;
				void setInstances(const std::string& instances);
				long getGroupId()const;
				void setGroupId(long groupId);

            private:
				std::string instances_;
				long groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_UPDATEMYGROUPINSTANCESREQUEST_H_