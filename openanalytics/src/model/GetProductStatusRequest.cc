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

#include <alibabacloud/openanalytics/model/GetProductStatusRequest.h>

using AlibabaCloud::Openanalytics::Model::GetProductStatusRequest;

GetProductStatusRequest::GetProductStatusRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "GetProductStatus")
{}

GetProductStatusRequest::~GetProductStatusRequest()
{}

std::string GetProductStatusRequest::getRegionID()const
{
	return regionID_;
}

void GetProductStatusRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setCoreParameter("RegionID", regionID);
}

std::string GetProductStatusRequest::getProductCode()const
{
	return productCode_;
}

void GetProductStatusRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setCoreParameter("ProductCode", productCode);
}

std::string GetProductStatusRequest::getProductAccessKey()const
{
	return productAccessKey_;
}

void GetProductStatusRequest::setProductAccessKey(const std::string& productAccessKey)
{
	productAccessKey_ = productAccessKey;
	setCoreParameter("ProductAccessKey", productAccessKey);
}

std::string GetProductStatusRequest::getTargetUid()const
{
	return targetUid_;
}

void GetProductStatusRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setCoreParameter("TargetUid", targetUid);
}

std::string GetProductStatusRequest::getTargetArnRole()const
{
	return targetArnRole_;
}

void GetProductStatusRequest::setTargetArnRole(const std::string& targetArnRole)
{
	targetArnRole_ = targetArnRole;
	setCoreParameter("TargetArnRole", targetArnRole);
}

