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

#include <alibabacloud/iqa/model/UploadDocumentRequest.h>

using AlibabaCloud::Iqa::Model::UploadDocumentRequest;

UploadDocumentRequest::UploadDocumentRequest() :
	RpcServiceRequest("iqa", "2019-08-13", "UploadDocument")
{}

UploadDocumentRequest::~UploadDocumentRequest()
{}

std::string UploadDocumentRequest::getDocumentData()const
{
	return documentData_;
}

void UploadDocumentRequest::setDocumentData(const std::string& documentData)
{
	documentData_ = documentData;
	setCoreParameter("DocumentData", documentData);
}

std::string UploadDocumentRequest::getDocumentFileUrl()const
{
	return documentFileUrl_;
}

void UploadDocumentRequest::setDocumentFileUrl(const std::string& documentFileUrl)
{
	documentFileUrl_ = documentFileUrl;
	setCoreParameter("DocumentFileUrl", documentFileUrl);
}

std::string UploadDocumentRequest::getProjectId()const
{
	return projectId_;
}

void UploadDocumentRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

