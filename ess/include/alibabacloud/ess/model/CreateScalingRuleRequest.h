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

#ifndef ALIBABACLOUD_ESS_MODEL_CREATESCALINGRULEREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_CREATESCALINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT CreateScalingRuleRequest : public RpcServiceRequest
			{
				struct StepAdjustment
				{
					float metricIntervalLowerBound;
					float metricIntervalUpperBound;
					int scalingAdjustment;
				};

			public:
				CreateScalingRuleRequest();
				~CreateScalingRuleRequest();

				std::vector<StepAdjustment> getStepAdjustment()const;
				void setStepAdjustment(const std::vector<StepAdjustment>& stepAdjustment);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				bool getDisableScaleIn()const;
				void setDisableScaleIn(bool disableScaleIn);
				int getInitialMaxSize()const;
				void setInitialMaxSize(int initialMaxSize);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getScalingRuleName()const;
				void setScalingRuleName(const std::string& scalingRuleName);
				int getCooldown()const;
				void setCooldown(int cooldown);
				std::string getPredictiveValueBehavior()const;
				void setPredictiveValueBehavior(const std::string& predictiveValueBehavior);
				std::string getScalingRuleType()const;
				void setScalingRuleType(const std::string& scalingRuleType);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);
				std::string getPredictiveScalingMode()const;
				void setPredictiveScalingMode(const std::string& predictiveScalingMode);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getAdjustmentValue()const;
				void setAdjustmentValue(int adjustmentValue);
				int getEstimatedInstanceWarmup()const;
				void setEstimatedInstanceWarmup(int estimatedInstanceWarmup);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getPredictiveTaskBufferTime()const;
				void setPredictiveTaskBufferTime(int predictiveTaskBufferTime);
				std::string getAdjustmentType()const;
				void setAdjustmentType(const std::string& adjustmentType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPredictiveValueBuffer()const;
				void setPredictiveValueBuffer(int predictiveValueBuffer);
				int getMinAdjustmentMagnitude()const;
				void setMinAdjustmentMagnitude(int minAdjustmentMagnitude);
				float getTargetValue()const;
				void setTargetValue(float targetValue);

            private:
				std::vector<StepAdjustment> stepAdjustment_;
				std::string scalingGroupId_;
				bool disableScaleIn_;
				int initialMaxSize_;
				std::string accessKeyId_;
				std::string scalingRuleName_;
				int cooldown_;
				std::string predictiveValueBehavior_;
				std::string scalingRuleType_;
				std::string metricName_;
				std::string predictiveScalingMode_;
				std::string resourceOwnerAccount_;
				int adjustmentValue_;
				int estimatedInstanceWarmup_;
				std::string ownerAccount_;
				int predictiveTaskBufferTime_;
				std::string adjustmentType_;
				long ownerId_;
				int predictiveValueBuffer_;
				int minAdjustmentMagnitude_;
				float targetValue_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_CREATESCALINGRULEREQUEST_H_