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

#include <alibabacloud/ros/model/ExecuteChangeSetRequest.h>

using AlibabaCloud::ROS::Model::ExecuteChangeSetRequest;

ExecuteChangeSetRequest::ExecuteChangeSetRequest() :
	RoaServiceRequest("ros", "2015-09-01")
{}

ExecuteChangeSetRequest::~ExecuteChangeSetRequest()
{}

std::string ExecuteChangeSetRequest::getChangeSetName()const
{
	return changeSetName_;
}

void ExecuteChangeSetRequest::setChangeSetName(const std::string& changeSetName)
{
	changeSetName_ = changeSetName;
	setCoreParameter("ChangeSetName", changeSetName);
}

std::string ExecuteChangeSetRequest::getStackId()const
{
	return stackId_;
}

void ExecuteChangeSetRequest::setStackId(const std::string& stackId)
{
	stackId_ = stackId;
	setCoreParameter("StackId", stackId);
}

std::string ExecuteChangeSetRequest::getStackName()const
{
	return stackName_;
}

void ExecuteChangeSetRequest::setStackName(const std::string& stackName)
{
	stackName_ = stackName;
	setCoreParameter("StackName", stackName);
}

