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

#include <alibabacloud/imagesearch/model/AddItemRequest.h>

using AlibabaCloud::ImageSearch::Model::AddItemRequest;

AddItemRequest::AddItemRequest() :
	RoaServiceRequest("imagesearch", "2018-01-20")
{}

AddItemRequest::~AddItemRequest()
{}

std::string AddItemRequest::getInstanceName()const
{
	return instanceName_;
}

void AddItemRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

