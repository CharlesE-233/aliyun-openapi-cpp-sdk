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

#include <alibabacloud/live/model/AddCasterEpisodeGroupRequest.h>

using AlibabaCloud::Live::Model::AddCasterEpisodeGroupRequest;

AddCasterEpisodeGroupRequest::AddCasterEpisodeGroupRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddCasterEpisodeGroup")
{}

AddCasterEpisodeGroupRequest::~AddCasterEpisodeGroupRequest()
{}

std::string AddCasterEpisodeGroupRequest::getClientToken()const
{
	return clientToken_;
}

void AddCasterEpisodeGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string AddCasterEpisodeGroupRequest::getStartTime()const
{
	return startTime_;
}

void AddCasterEpisodeGroupRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string AddCasterEpisodeGroupRequest::getSideOutputUrl()const
{
	return sideOutputUrl_;
}

void AddCasterEpisodeGroupRequest::setSideOutputUrl(const std::string& sideOutputUrl)
{
	sideOutputUrl_ = sideOutputUrl;
	setCoreParameter("SideOutputUrl", sideOutputUrl);
}

std::vector<AddCasterEpisodeGroupRequest::Item> AddCasterEpisodeGroupRequest::getItem()const
{
	return item_;
}

void AddCasterEpisodeGroupRequest::setItem(const std::vector<Item>& item)
{
	item_ = item;
	int i = 0;
	for(int i = 0; i!= item.size(); i++)	{
		auto obj = item.at(i);
		std::string str ="Item."+ std::to_string(i);
		setCoreParameter(str + ".ItemName", obj.itemName);
		setCoreParameter(str + ".VodUrl", obj.vodUrl);
	}
}

std::string AddCasterEpisodeGroupRequest::getDomainName()const
{
	return domainName_;
}

void AddCasterEpisodeGroupRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long AddCasterEpisodeGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void AddCasterEpisodeGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int AddCasterEpisodeGroupRequest::getRepeatNum()const
{
	return repeatNum_;
}

void AddCasterEpisodeGroupRequest::setRepeatNum(int repeatNum)
{
	repeatNum_ = repeatNum;
	setCoreParameter("RepeatNum", std::to_string(repeatNum));
}

std::string AddCasterEpisodeGroupRequest::getCallbackUrl()const
{
	return callbackUrl_;
}

void AddCasterEpisodeGroupRequest::setCallbackUrl(const std::string& callbackUrl)
{
	callbackUrl_ = callbackUrl;
	setCoreParameter("CallbackUrl", callbackUrl);
}

