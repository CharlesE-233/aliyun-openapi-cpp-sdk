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

#include <alibabacloud/lubancloud/model/SubmitGenerateTaskRequest.h>

using AlibabaCloud::Lubancloud::Model::SubmitGenerateTaskRequest;

SubmitGenerateTaskRequest::SubmitGenerateTaskRequest() :
	RpcServiceRequest("lubancloud", "2018-05-09", "SubmitGenerateTask")
{}

SubmitGenerateTaskRequest::~SubmitGenerateTaskRequest()
{}

int SubmitGenerateTaskRequest::getImageCount()const
{
	return imageCount_;
}

void SubmitGenerateTaskRequest::setImageCount(int imageCount)
{
	imageCount_ = imageCount;
	setCoreParameter("ImageCount", std::to_string(imageCount));
}

std::string SubmitGenerateTaskRequest::getActionPoint()const
{
	return actionPoint_;
}

void SubmitGenerateTaskRequest::setActionPoint(const std::string& actionPoint)
{
	actionPoint_ = actionPoint;
	setCoreParameter("ActionPoint", actionPoint);
}

std::string SubmitGenerateTaskRequest::getLogoImagePath()const
{
	return logoImagePath_;
}

void SubmitGenerateTaskRequest::setLogoImagePath(const std::string& logoImagePath)
{
	logoImagePath_ = logoImagePath;
	setCoreParameter("LogoImagePath", logoImagePath);
}

int SubmitGenerateTaskRequest::getType()const
{
	return type_;
}

void SubmitGenerateTaskRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::vector<std::string> SubmitGenerateTaskRequest::getMajorImagePath()const
{
	return majorImagePath_;
}

void SubmitGenerateTaskRequest::setMajorImagePath(const std::vector<std::string>& majorImagePath)
{
	majorImagePath_ = majorImagePath;
	for(int i = 0; i!= majorImagePath.size(); i++)
		setCoreParameter("MajorImagePath."+ std::to_string(i), majorImagePath.at(i));
}

int SubmitGenerateTaskRequest::getWidth()const
{
	return width_;
}

void SubmitGenerateTaskRequest::setWidth(int width)
{
	width_ = width;
	setCoreParameter("Width", std::to_string(width));
}

std::vector<std::string> SubmitGenerateTaskRequest::getCopyWrite()const
{
	return copyWrite_;
}

void SubmitGenerateTaskRequest::setCopyWrite(const std::vector<std::string>& copyWrite)
{
	copyWrite_ = copyWrite;
	for(int i = 0; i!= copyWrite.size(); i++)
		setCoreParameter("CopyWrite."+ std::to_string(i), copyWrite.at(i));
}

std::vector<long> SubmitGenerateTaskRequest::getPropertyId()const
{
	return propertyId_;
}

void SubmitGenerateTaskRequest::setPropertyId(const std::vector<long>& propertyId)
{
	propertyId_ = propertyId;
	for(int i = 0; i!= propertyId.size(); i++)
		setCoreParameter("PropertyId."+ std::to_string(i), std::to_string(propertyId.at(i)));
}

int SubmitGenerateTaskRequest::getHeight()const
{
	return height_;
}

void SubmitGenerateTaskRequest::setHeight(int height)
{
	height_ = height;
	setCoreParameter("Height", std::to_string(height));
}

