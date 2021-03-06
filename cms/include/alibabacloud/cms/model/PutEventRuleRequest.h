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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTEVENTRULEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTEVENTRULEREQUEST_H_

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
			class ALIBABACLOUD_CMS_EXPORT PutEventRuleRequest : public RpcServiceRequest
			{
				struct EventPattern
				{
					std::vector<std::string> levelList;
					std::string product;
					std::vector<std::string> statusList;
					std::vector<std::string> nameList;
					std::vector<std::string> eventTypeList;
				};

			public:
				PutEventRuleRequest();
				~PutEventRuleRequest();

				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::vector<EventPattern> getEventPattern()const;
				void setEventPattern(const std::vector<EventPattern>& eventPattern);
				std::string getEventType()const;
				void setEventType(const std::string& eventType);
				std::string getState()const;
				void setState(const std::string& state);

            private:
				std::string groupId_;
				std::string description_;
				std::string ruleName_;
				std::vector<EventPattern> eventPattern_;
				std::string eventType_;
				std::string state_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_PUTEVENTRULEREQUEST_H_