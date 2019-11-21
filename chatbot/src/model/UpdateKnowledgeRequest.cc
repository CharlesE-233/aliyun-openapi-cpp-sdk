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

#include <alibabacloud/chatbot/model/UpdateKnowledgeRequest.h>

using AlibabaCloud::Chatbot::Model::UpdateKnowledgeRequest;

UpdateKnowledgeRequest::UpdateKnowledgeRequest() :
	RpcServiceRequest("chatbot", "2017-10-11", "UpdateKnowledge")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateKnowledgeRequest::~UpdateKnowledgeRequest()
{}

std::string UpdateKnowledgeRequest::getKnowledge()const
{
	return knowledge_;
}

void UpdateKnowledgeRequest::setKnowledge(const std::string& knowledge)
{
	knowledge_ = knowledge;
	setCoreParameter("Knowledge", knowledge);
}

