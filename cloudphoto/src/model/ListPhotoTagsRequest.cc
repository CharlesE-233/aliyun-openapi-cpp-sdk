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

#include <alibabacloud/cloudphoto/model/ListPhotoTagsRequest.h>

using AlibabaCloud::CloudPhoto::Model::ListPhotoTagsRequest;

ListPhotoTagsRequest::ListPhotoTagsRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "ListPhotoTags")
{}

ListPhotoTagsRequest::~ListPhotoTagsRequest()
{}

std::string ListPhotoTagsRequest::getLibraryId()const
{
	return libraryId_;
}

void ListPhotoTagsRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setCoreParameter("LibraryId", libraryId);
}

long ListPhotoTagsRequest::getPhotoId()const
{
	return photoId_;
}

void ListPhotoTagsRequest::setPhotoId(long photoId)
{
	photoId_ = photoId;
	setCoreParameter("PhotoId", std::to_string(photoId));
}

std::string ListPhotoTagsRequest::getStoreName()const
{
	return storeName_;
}

void ListPhotoTagsRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setCoreParameter("StoreName", storeName);
}

std::string ListPhotoTagsRequest::getLang()const
{
	return lang_;
}

void ListPhotoTagsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

