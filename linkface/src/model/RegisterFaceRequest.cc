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

#include <alibabacloud/linkface/model/RegisterFaceRequest.h>

using AlibabaCloud::LinkFace::Model::RegisterFaceRequest;

RegisterFaceRequest::RegisterFaceRequest() :
	RpcServiceRequest("linkface", "2018-07-20", "RegisterFace")
{}

RegisterFaceRequest::~RegisterFaceRequest()
{}

std::string RegisterFaceRequest::getImage()const
{
	return image_;
}

void RegisterFaceRequest::setImage(const std::string& image)
{
	image_ = image;
	setCoreParameter("Image", image);
}

std::string RegisterFaceRequest::getGroupId()const
{
	return groupId_;
}

void RegisterFaceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string RegisterFaceRequest::getUserId()const
{
	return userId_;
}

void RegisterFaceRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string RegisterFaceRequest::getUserInfo()const
{
	return userInfo_;
}

void RegisterFaceRequest::setUserInfo(const std::string& userInfo)
{
	userInfo_ = userInfo;
	setCoreParameter("UserInfo", userInfo);
}

