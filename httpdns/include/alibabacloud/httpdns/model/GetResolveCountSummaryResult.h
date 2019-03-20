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

#ifndef ALIBABACLOUD_HTTPDNS_MODEL_GETRESOLVECOUNTSUMMARYRESULT_H_
#define ALIBABACLOUD_HTTPDNS_MODEL_GETRESOLVECOUNTSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/httpdns/HttpdnsExport.h>

namespace AlibabaCloud
{
	namespace Httpdns
	{
		namespace Model
		{
			class ALIBABACLOUD_HTTPDNS_EXPORT GetResolveCountSummaryResult : public ServiceResult
			{
			public:
				struct ResolveSummary
				{
					long http6;
					long https;
					long http;
					long https6;
				};


				GetResolveCountSummaryResult();
				explicit GetResolveCountSummaryResult(const std::string &payload);
				~GetResolveCountSummaryResult();
				ResolveSummary getResolveSummary()const;

			protected:
				void parse(const std::string &payload);
			private:
				ResolveSummary resolveSummary_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HTTPDNS_MODEL_GETRESOLVECOUNTSUMMARYRESULT_H_