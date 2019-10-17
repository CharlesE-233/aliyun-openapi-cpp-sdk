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

#ifndef ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTTEMPLATESREQUEST_H_
#define ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivision/IvisionExport.h>

namespace AlibabaCloud
{
	namespace Ivision
	{
		namespace Model
		{
			class ALIBABACLOUD_IVISION_EXPORT DescribePredictTemplatesRequest : public RpcServiceRequest
			{

			public:
				DescribePredictTemplatesRequest();
				~DescribePredictTemplatesRequest();

				std::string getTemplateIds()const;
				void setTemplateIds(const std::string& templateIds);
				std::string getNextPageToken()const;
				void setNextPageToken(const std::string& nextPageToken);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getSortOrder()const;
				void setSortOrder(const std::string& sortOrder);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				long getCurrentPage()const;
				void setCurrentPage(long currentPage);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);

            private:
				std::string templateIds_;
				std::string nextPageToken_;
				long pageSize_;
				std::string sortOrder_;
				std::string showLog_;
				long currentPage_;
				long ownerId_;
				std::string sortBy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_DESCRIBEPREDICTTEMPLATESREQUEST_H_