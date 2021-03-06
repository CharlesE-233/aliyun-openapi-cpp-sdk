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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEINDEXRECOMMENDATIONRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEINDEXRECOMMENDATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeIndexRecommendationResult : public ServiceResult
			{
			public:
				struct Analyzation
				{
					struct Recommendation
					{
						std::string recmdType;
						std::string content;
					};
					long averageReturnRowCount;
					std::string query;
					long totalExecutionTime;
					std::vector<std::string> indexCombines;
					long averageDocsExaminedCount;
					std::string _namespace;
					std::string operation;
					long count;
					std::vector<Analyzation::Recommendation> indexRecommendations;
					long averageKeysExaminedCount;
					std::string executionPlan;
					std::string inMemorySort;
					std::string database;
					std::string lastExecutionTime;
					std::string sort;
					long averageExecutionTime;
				};


				DescribeIndexRecommendationResult();
				explicit DescribeIndexRecommendationResult(const std::string &payload);
				~DescribeIndexRecommendationResult();
				int getTotalRecordCount()const;
				int getPageRecordCount()const;
				std::vector<Analyzation> getAnalyzations()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::vector<Analyzation> analyzations_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEINDEXRECOMMENDATIONRESULT_H_